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

#include <alibabacloud/ecs/model/DescribeInstanceRamRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceRamRoleResult::DescribeInstanceRamRoleResult() :
	ServiceResult()
{}

DescribeInstanceRamRoleResult::DescribeInstanceRamRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceRamRoleResult::~DescribeInstanceRamRoleResult()
{}

void DescribeInstanceRamRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInstanceRamRoleSets = value["InstanceRamRoleSets"]["InstanceRamRoleSet"];
	for (auto value : allInstanceRamRoleSets)
	{
		InstanceRamRoleSet instanceRamRoleSetObject;
		instanceRamRoleSetObject.instanceId = value["InstanceId"].asString();
		instanceRamRoleSetObject.ramRoleName = value["RamRoleName"].asString();
		instanceRamRoleSets_.push_back(instanceRamRoleSetObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceRamRoleResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeInstanceRamRoleResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

std::string DescribeInstanceRamRoleResult::getRegionId()const
{
	return regionId_;
}

void DescribeInstanceRamRoleResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

