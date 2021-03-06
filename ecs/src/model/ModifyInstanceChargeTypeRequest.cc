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

#include <alibabacloud/ecs/model/ModifyInstanceChargeTypeRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ModifyInstanceChargeTypeRequest::ModifyInstanceChargeTypeRequest() :
	EcsRequest("ModifyInstanceChargeType")
{}

ModifyInstanceChargeTypeRequest::~ModifyInstanceChargeTypeRequest()
{}

long ModifyInstanceChargeTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyInstanceChargeTypeRequest::getPeriod()const
{
	return period_;
}

void ModifyInstanceChargeTypeRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool ModifyInstanceChargeTypeRequest::getDryRun()const
{
	return dryRun_;
}

void ModifyInstanceChargeTypeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", std::to_string(dryRun));
}

bool ModifyInstanceChargeTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyInstanceChargeTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", std::to_string(autoPay));
}

bool ModifyInstanceChargeTypeRequest::getIncludeDataDisks()const
{
	return includeDataDisks_;
}

void ModifyInstanceChargeTypeRequest::setIncludeDataDisks(bool includeDataDisks)
{
	includeDataDisks_ = includeDataDisks;
	setParameter("IncludeDataDisks", std::to_string(includeDataDisks));
}

std::string ModifyInstanceChargeTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceChargeTypeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceChargeTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyInstanceChargeTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceChargeTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyInstanceChargeTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceChargeTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyInstanceChargeTypeRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void ModifyInstanceChargeTypeRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string ModifyInstanceChargeTypeRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ModifyInstanceChargeTypeRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string ModifyInstanceChargeTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceChargeTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

