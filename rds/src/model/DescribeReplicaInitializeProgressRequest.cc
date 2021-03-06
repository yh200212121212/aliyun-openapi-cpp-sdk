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

#include <alibabacloud/rds/model/DescribeReplicaInitializeProgressRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeReplicaInitializeProgressRequest::DescribeReplicaInitializeProgressRequest() :
	RdsRequest("DescribeReplicaInitializeProgress")
{}

DescribeReplicaInitializeProgressRequest::~DescribeReplicaInitializeProgressRequest()
{}

long DescribeReplicaInitializeProgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicaInitializeProgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeReplicaInitializeProgressRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicaInitializeProgressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeReplicaInitializeProgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicaInitializeProgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicaInitializeProgressRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicaInitializeProgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeReplicaInitializeProgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicaInitializeProgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeReplicaInitializeProgressRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicaInitializeProgressRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

long DescribeReplicaInitializeProgressRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicaInitializeProgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeReplicaInitializeProgressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicaInitializeProgressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

