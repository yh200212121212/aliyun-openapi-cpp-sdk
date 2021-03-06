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

#include <alibabacloud/ecs/model/DescribeSecurityGroupAttributeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSecurityGroupAttributeRequest::DescribeSecurityGroupAttributeRequest() :
	EcsRequest("DescribeSecurityGroupAttribute")
{}

DescribeSecurityGroupAttributeRequest::~DescribeSecurityGroupAttributeRequest()
{}

std::string DescribeSecurityGroupAttributeRequest::getNicType()const
{
	return nicType_;
}

void DescribeSecurityGroupAttributeRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long DescribeSecurityGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSecurityGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSecurityGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSecurityGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSecurityGroupAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSecurityGroupAttributeRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void DescribeSecurityGroupAttributeRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

long DescribeSecurityGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSecurityGroupAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSecurityGroupAttributeRequest::getDirection()const
{
	return direction_;
}

void DescribeSecurityGroupAttributeRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

