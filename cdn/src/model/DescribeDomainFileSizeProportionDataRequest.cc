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

#include <alibabacloud/cdn/model/DescribeDomainFileSizeProportionDataRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainFileSizeProportionDataRequest::DescribeDomainFileSizeProportionDataRequest() :
	CdnRequest("DescribeDomainFileSizeProportionData")
{}

DescribeDomainFileSizeProportionDataRequest::~DescribeDomainFileSizeProportionDataRequest()
{}

std::string DescribeDomainFileSizeProportionDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainFileSizeProportionDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainFileSizeProportionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainFileSizeProportionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainFileSizeProportionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainFileSizeProportionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainFileSizeProportionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainFileSizeProportionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeDomainFileSizeProportionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainFileSizeProportionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainFileSizeProportionDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainFileSizeProportionDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

