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

#include <alibabacloud/rds/model/DescibeImportsFromDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescibeImportsFromDatabaseResult::DescibeImportsFromDatabaseResult() :
	ServiceResult()
{}

DescibeImportsFromDatabaseResult::DescibeImportsFromDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescibeImportsFromDatabaseResult::~DescibeImportsFromDatabaseResult()
{}

void DescibeImportsFromDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["ImportResultFromDB"];
	for (auto value : allItems)
	{
		ImportResultFromDB importResultFromDBObject;
		importResultFromDBObject.importId = std::stoi(value["ImportId"].asString());
		importResultFromDBObject.importDataType = value["ImportDataType"].asString();
		importResultFromDBObject.importDataStatus = value["ImportDataStatus"].asString();
		importResultFromDBObject.importDataStatusDescription = value["ImportDataStatusDescription"].asString();
		importResultFromDBObject.incrementalImportingTime = value["IncrementalImportingTime"].asString();
		items_.push_back(importResultFromDBObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescibeImportsFromDatabaseResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescibeImportsFromDatabaseResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescibeImportsFromDatabaseResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescibeImportsFromDatabaseResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescibeImportsFromDatabaseResult::getPageNumber()const
{
	return pageNumber_;
}

void DescibeImportsFromDatabaseResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

