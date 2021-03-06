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

#include <alibabacloud/vpc/model/AssociateEipAddressRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

AssociateEipAddressRequest::AssociateEipAddressRequest() :
	VpcRequest("AssociateEipAddress")
{}

AssociateEipAddressRequest::~AssociateEipAddressRequest()
{}

long AssociateEipAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateEipAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateEipAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void AssociateEipAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AssociateEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void AssociateEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateEipAddressRequest::getInstanceRegionId()const
{
	return instanceRegionId_;
}

void AssociateEipAddressRequest::setInstanceRegionId(const std::string& instanceRegionId)
{
	instanceRegionId_ = instanceRegionId;
	setParameter("InstanceRegionId", instanceRegionId);
}

std::string AssociateEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AssociateEipAddressRequest::getInstanceType()const
{
	return instanceType_;
}

void AssociateEipAddressRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string AssociateEipAddressRequest::getAllocationId()const
{
	return allocationId_;
}

void AssociateEipAddressRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setParameter("AllocationId", allocationId);
}

long AssociateEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateEipAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

