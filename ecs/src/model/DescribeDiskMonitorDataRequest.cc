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

#include <alibabacloud/ecs/model/DescribeDiskMonitorDataRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDiskMonitorDataRequest::DescribeDiskMonitorDataRequest() :
	EcsRequest("DescribeDiskMonitorData")
{}

DescribeDiskMonitorDataRequest::~DescribeDiskMonitorDataRequest()
{}

long DescribeDiskMonitorDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeDiskMonitorDataRequest::getPeriod()const
{
	return period_;
}

void DescribeDiskMonitorDataRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string DescribeDiskMonitorDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDiskMonitorDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDiskMonitorDataRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDiskMonitorDataRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDiskMonitorDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDiskMonitorDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDiskMonitorDataRequest::getDiskId()const
{
	return diskId_;
}

void DescribeDiskMonitorDataRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string DescribeDiskMonitorDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDiskMonitorDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDiskMonitorDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDiskMonitorDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

