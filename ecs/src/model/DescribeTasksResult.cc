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

#include <alibabacloud/ecs/model/DescribeTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeTasksResult::DescribeTasksResult() :
	ServiceResult()
{}

DescribeTasksResult::DescribeTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTasksResult::~DescribeTasksResult()
{}

void DescribeTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allTaskSet = value["TaskSet"]["Task"];
	for (auto value : allTaskSet)
	{
		Task taskObject;
		taskObject.taskId = value["TaskId"].asString();
		taskObject.taskAction = value["TaskAction"].asString();
		taskObject.taskStatus = value["TaskStatus"].asString();
		taskObject.supportCancel = value["SupportCancel"].asString();
		taskObject.creationTime = value["CreationTime"].asString();
		taskObject.finishedTime = value["FinishedTime"].asString();
		taskSet_.push_back(taskObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeTasksResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeTasksResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeTasksResult::getPageSize()const
{
	return pageSize_;
}

void DescribeTasksResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeTasksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTasksResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeTasksResult::getRegionId()const
{
	return regionId_;
}

void DescribeTasksResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

