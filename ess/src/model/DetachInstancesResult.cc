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

#include <alibabacloud/ess/model/DetachInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DetachInstancesResult::DetachInstancesResult() :
	ServiceResult()
{}

DetachInstancesResult::DetachInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DetachInstancesResult::~DetachInstancesResult()
{}

void DetachInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	if(!value["ScalingActivityId"].isNull())
		scalingActivityId_ = value["ScalingActivityId"].asString();

}

std::string DetachInstancesResult::getScalingActivityId()const
{
	return scalingActivityId_;
}

void DetachInstancesResult::setScalingActivityId(const std::string& scalingActivityId)
{
	scalingActivityId_ = scalingActivityId;
}

