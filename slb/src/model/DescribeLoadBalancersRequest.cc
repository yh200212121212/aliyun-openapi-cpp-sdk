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

#include <alibabacloud/slb/model/DescribeLoadBalancersRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeLoadBalancersRequest::DescribeLoadBalancersRequest() :
	SlbRequest("DescribeLoadBalancers")
{}

DescribeLoadBalancersRequest::~DescribeLoadBalancersRequest()
{}

std::string DescribeLoadBalancersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeLoadBalancersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeLoadBalancersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLoadBalancersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLoadBalancersRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeLoadBalancersRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

std::string DescribeLoadBalancersRequest::getMasterZoneId()const
{
	return masterZoneId_;
}

void DescribeLoadBalancersRequest::setMasterZoneId(const std::string& masterZoneId)
{
	masterZoneId_ = masterZoneId;
	setParameter("MasterZoneId", masterZoneId);
}

int DescribeLoadBalancersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeLoadBalancersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeLoadBalancersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLoadBalancersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLoadBalancersRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeLoadBalancersRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerName()const
{
	return loadBalancerName_;
}

void DescribeLoadBalancersRequest::setLoadBalancerName(const std::string& loadBalancerName)
{
	loadBalancerName_ = loadBalancerName;
	setParameter("LoadBalancerName", loadBalancerName);
}

std::string DescribeLoadBalancersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLoadBalancersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeLoadBalancersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLoadBalancersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLoadBalancersRequest::getAddressType()const
{
	return addressType_;
}

void DescribeLoadBalancersRequest::setAddressType(const std::string& addressType)
{
	addressType_ = addressType;
	setParameter("AddressType", addressType);
}

std::string DescribeLoadBalancersRequest::getSlaveZoneId()const
{
	return slaveZoneId_;
}

void DescribeLoadBalancersRequest::setSlaveZoneId(const std::string& slaveZoneId)
{
	slaveZoneId_ = slaveZoneId;
	setParameter("SlaveZoneId", slaveZoneId);
}

std::string DescribeLoadBalancersRequest::getAddress()const
{
	return address_;
}

void DescribeLoadBalancersRequest::setAddress(const std::string& address)
{
	address_ = address;
	setParameter("Address", address);
}

std::string DescribeLoadBalancersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLoadBalancersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLoadBalancersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLoadBalancersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeLoadBalancersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLoadBalancersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLoadBalancersRequest::getServerId()const
{
	return serverId_;
}

void DescribeLoadBalancersRequest::setServerId(const std::string& serverId)
{
	serverId_ = serverId;
	setParameter("ServerId", serverId);
}

std::string DescribeLoadBalancersRequest::getTags()const
{
	return tags_;
}

void DescribeLoadBalancersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeLoadBalancersRequest::getServerIntranetAddress()const
{
	return serverIntranetAddress_;
}

void DescribeLoadBalancersRequest::setServerIntranetAddress(const std::string& serverIntranetAddress)
{
	serverIntranetAddress_ = serverIntranetAddress;
	setParameter("ServerIntranetAddress", serverIntranetAddress);
}

std::string DescribeLoadBalancersRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeLoadBalancersRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DescribeLoadBalancersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void DescribeLoadBalancersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string DescribeLoadBalancersRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void DescribeLoadBalancersRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setParameter("InternetChargeType", internetChargeType);
}

std::string DescribeLoadBalancersRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeLoadBalancersRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeLoadBalancersRequest::getPayType()const
{
	return payType_;
}

void DescribeLoadBalancersRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

