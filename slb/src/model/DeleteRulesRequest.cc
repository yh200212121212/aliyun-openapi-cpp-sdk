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

#include <alibabacloud/slb/model/DeleteRulesRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DeleteRulesRequest::DeleteRulesRequest() :
	SlbRequest("DeleteRules")
{}

DeleteRulesRequest::~DeleteRulesRequest()
{}

std::string DeleteRulesRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DeleteRulesRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DeleteRulesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRulesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteRulesRequest::getRuleIds()const
{
	return ruleIds_;
}

void DeleteRulesRequest::setRuleIds(const std::string& ruleIds)
{
	ruleIds_ = ruleIds;
	setParameter("RuleIds", ruleIds);
}

std::string DeleteRulesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRulesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRulesRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRulesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteRulesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRulesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteRulesRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRulesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteRulesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteRulesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteRulesRequest::getTags()const
{
	return tags_;
}

void DeleteRulesRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

