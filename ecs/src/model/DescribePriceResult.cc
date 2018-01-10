/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ecs/model/DescribePriceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribePriceResult::DescribePriceResult() :
	ServiceResult()
{}

DescribePriceResult::DescribePriceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePriceResult::~DescribePriceResult()
{}

void DescribePriceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allPriceInfo = value["PriceInfo"];
	for (auto value : allPriceInfo)
	{
		PriceInfo priceInfoObject;
		auto allRules = value["Rules"]["Rule"];
		for (auto value : allRules)
		{
			PriceInfo::Rule ruleObject;
			ruleObject.ruleId = std::stol(value["RuleId"].asString());
			ruleObject.description = value["Description"].asString();
			priceInfoObject.rules.push_back(ruleObject);
		}
		auto allPrice = value["Price"];
		for (auto value : allPrice)
		{
			PriceInfo::Price priceObject;
			priceObject.originalPrice = std::stof(value["OriginalPrice"].asString());
			priceObject.discountPrice = std::stof(value["DiscountPrice"].asString());
			priceObject.tradePrice = std::stof(value["TradePrice"].asString());
			priceObject.currency = value["Currency"].asString();
			priceInfoObject.price.push_back(priceObject);
		}
		priceInfo_.push_back(priceInfoObject);
	}

}
