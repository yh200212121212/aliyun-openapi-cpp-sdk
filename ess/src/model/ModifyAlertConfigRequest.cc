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

#include <alibabacloud/ess/model/ModifyAlertConfigRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

ModifyAlertConfigRequest::ModifyAlertConfigRequest() :
	EssRequest("ModifyAlertConfig")
{}

ModifyAlertConfigRequest::~ModifyAlertConfigRequest()
{}

int ModifyAlertConfigRequest::getSuccessConfig()const
{
	return successConfig_;
}

void ModifyAlertConfigRequest::setSuccessConfig(int successConfig)
{
	successConfig_ = successConfig;
	setParameter("SuccessConfig", std::to_string(successConfig));
}

int ModifyAlertConfigRequest::getRejectConfig()const
{
	return rejectConfig_;
}

void ModifyAlertConfigRequest::setRejectConfig(int rejectConfig)
{
	rejectConfig_ = rejectConfig;
	setParameter("RejectConfig", std::to_string(rejectConfig));
}

std::string ModifyAlertConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyAlertConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyAlertConfigRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void ModifyAlertConfigRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

long ModifyAlertConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyAlertConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifyAlertConfigRequest::getFailConfig()const
{
	return failConfig_;
}

void ModifyAlertConfigRequest::setFailConfig(int failConfig)
{
	failConfig_ = failConfig;
	setParameter("FailConfig", std::to_string(failConfig));
}

std::string ModifyAlertConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlertConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

