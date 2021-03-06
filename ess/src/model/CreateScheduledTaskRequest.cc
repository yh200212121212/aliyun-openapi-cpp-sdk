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

#include <alibabacloud/ess/model/CreateScheduledTaskRequest.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

CreateScheduledTaskRequest::CreateScheduledTaskRequest() :
	EssRequest("CreateScheduledTask")
{}

CreateScheduledTaskRequest::~CreateScheduledTaskRequest()
{}

std::string CreateScheduledTaskRequest::getLaunchTime()const
{
	return launchTime_;
}

void CreateScheduledTaskRequest::setLaunchTime(const std::string& launchTime)
{
	launchTime_ = launchTime;
	setParameter("LaunchTime", launchTime);
}

std::string CreateScheduledTaskRequest::getScheduledAction()const
{
	return scheduledAction_;
}

void CreateScheduledTaskRequest::setScheduledAction(const std::string& scheduledAction)
{
	scheduledAction_ = scheduledAction;
	setParameter("ScheduledAction", scheduledAction);
}

std::string CreateScheduledTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateScheduledTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateScheduledTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateScheduledTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateScheduledTaskRequest::getDescription()const
{
	return description_;
}

void CreateScheduledTaskRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateScheduledTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateScheduledTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateScheduledTaskRequest::getRecurrenceValue()const
{
	return recurrenceValue_;
}

void CreateScheduledTaskRequest::setRecurrenceValue(const std::string& recurrenceValue)
{
	recurrenceValue_ = recurrenceValue;
	setParameter("RecurrenceValue", recurrenceValue);
}

int CreateScheduledTaskRequest::getLaunchExpirationTime()const
{
	return launchExpirationTime_;
}

void CreateScheduledTaskRequest::setLaunchExpirationTime(int launchExpirationTime)
{
	launchExpirationTime_ = launchExpirationTime;
	setParameter("LaunchExpirationTime", std::to_string(launchExpirationTime));
}

std::string CreateScheduledTaskRequest::getRecurrenceEndTime()const
{
	return recurrenceEndTime_;
}

void CreateScheduledTaskRequest::setRecurrenceEndTime(const std::string& recurrenceEndTime)
{
	recurrenceEndTime_ = recurrenceEndTime;
	setParameter("RecurrenceEndTime", recurrenceEndTime);
}

std::string CreateScheduledTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateScheduledTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateScheduledTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateScheduledTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateScheduledTaskRequest::getScheduledTaskName()const
{
	return scheduledTaskName_;
}

void CreateScheduledTaskRequest::setScheduledTaskName(const std::string& scheduledTaskName)
{
	scheduledTaskName_ = scheduledTaskName;
	setParameter("ScheduledTaskName", scheduledTaskName);
}

bool CreateScheduledTaskRequest::getTaskEnabled()const
{
	return taskEnabled_;
}

void CreateScheduledTaskRequest::setTaskEnabled(bool taskEnabled)
{
	taskEnabled_ = taskEnabled;
	setParameter("TaskEnabled", std::to_string(taskEnabled));
}

std::string CreateScheduledTaskRequest::getRecurrenceType()const
{
	return recurrenceType_;
}

void CreateScheduledTaskRequest::setRecurrenceType(const std::string& recurrenceType)
{
	recurrenceType_ = recurrenceType;
	setParameter("RecurrenceType", recurrenceType);
}

