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

#include <alibabacloud/vpc/model/DescribeBgpPeersRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeBgpPeersRequest::DescribeBgpPeersRequest() :
	VpcRequest("DescribeBgpPeers")
{}

DescribeBgpPeersRequest::~DescribeBgpPeersRequest()
{}

long DescribeBgpPeersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeBgpPeersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeBgpPeersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeBgpPeersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeBgpPeersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeBgpPeersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeBgpPeersRequest::getRouterId()const
{
	return routerId_;
}

void DescribeBgpPeersRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setParameter("RouterId", routerId);
}

std::string DescribeBgpPeersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeBgpPeersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeBgpPeersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeBgpPeersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeBgpPeersRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void DescribeBgpPeersRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setParameter("BgpGroupId", bgpGroupId);
}

std::string DescribeBgpPeersRequest::getBgpPeerId()const
{
	return bgpPeerId_;
}

void DescribeBgpPeersRequest::setBgpPeerId(const std::string& bgpPeerId)
{
	bgpPeerId_ = bgpPeerId;
	setParameter("BgpPeerId", bgpPeerId);
}

bool DescribeBgpPeersRequest::getIsDefault()const
{
	return isDefault_;
}

void DescribeBgpPeersRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setParameter("IsDefault", std::to_string(isDefault));
}

long DescribeBgpPeersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeBgpPeersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeBgpPeersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeBgpPeersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

