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

#include <alibabacloud/vpc/model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult() :
	ServiceResult()
{}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::~DescribeVirtualBorderRoutersForPhysicalConnectionResult()
{}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterForPhysicalConnectionSet = value["VirtualBorderRouterForPhysicalConnectionSet"]["VirtualBorderRouterForPhysicalConnectionType"];
	for (auto value : allVirtualBorderRouterForPhysicalConnectionSet)
	{
		VirtualBorderRouterForPhysicalConnectionType virtualBorderRouterForPhysicalConnectionTypeObject;
		virtualBorderRouterForPhysicalConnectionTypeObject.vbrId = value["VbrId"].asString();
		virtualBorderRouterForPhysicalConnectionTypeObject.vbrOwnerUid = std::stol(value["VbrOwnerUid"].asString());
		virtualBorderRouterForPhysicalConnectionTypeObject.creationTime = value["CreationTime"].asString();
		virtualBorderRouterForPhysicalConnectionTypeObject.activationTime = value["ActivationTime"].asString();
		virtualBorderRouterForPhysicalConnectionTypeObject.terminationTime = value["TerminationTime"].asString();
		virtualBorderRouterForPhysicalConnectionTypeObject.recoveryTime = value["RecoveryTime"].asString();
		virtualBorderRouterForPhysicalConnectionTypeObject.vlanId = std::stoi(value["VlanId"].asString());
		virtualBorderRouterForPhysicalConnectionTypeObject.circuitCode = value["CircuitCode"].asString();
		virtualBorderRouterForPhysicalConnectionSet_.push_back(virtualBorderRouterForPhysicalConnectionTypeObject);
	}
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageSize()const
{
	return pageSize_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

