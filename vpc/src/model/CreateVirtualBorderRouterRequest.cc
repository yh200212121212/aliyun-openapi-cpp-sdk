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

#include <alibabacloud/vpc/model/CreateVirtualBorderRouterRequest.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateVirtualBorderRouterRequest::CreateVirtualBorderRouterRequest() :
	VpcRequest("CreateVirtualBorderRouter")
{}

CreateVirtualBorderRouterRequest::~CreateVirtualBorderRouterRequest()
{}

long CreateVirtualBorderRouterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVirtualBorderRouterRequest::getCircuitCode()const
{
	return circuitCode_;
}

void CreateVirtualBorderRouterRequest::setCircuitCode(const std::string& circuitCode)
{
	circuitCode_ = circuitCode;
	setParameter("CircuitCode", circuitCode);
}

int CreateVirtualBorderRouterRequest::getVlanId()const
{
	return vlanId_;
}

void CreateVirtualBorderRouterRequest::setVlanId(int vlanId)
{
	vlanId_ = vlanId;
	setParameter("VlanId", std::to_string(vlanId));
}

std::string CreateVirtualBorderRouterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVirtualBorderRouterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateVirtualBorderRouterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVirtualBorderRouterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVirtualBorderRouterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateVirtualBorderRouterRequest::getDescription()const
{
	return description_;
}

void CreateVirtualBorderRouterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateVirtualBorderRouterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVirtualBorderRouterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVirtualBorderRouterRequest::getPeerGatewayIp()const
{
	return peerGatewayIp_;
}

void CreateVirtualBorderRouterRequest::setPeerGatewayIp(const std::string& peerGatewayIp)
{
	peerGatewayIp_ = peerGatewayIp;
	setParameter("PeerGatewayIp", peerGatewayIp);
}

std::string CreateVirtualBorderRouterRequest::getPeeringSubnetMask()const
{
	return peeringSubnetMask_;
}

void CreateVirtualBorderRouterRequest::setPeeringSubnetMask(const std::string& peeringSubnetMask)
{
	peeringSubnetMask_ = peeringSubnetMask;
	setParameter("PeeringSubnetMask", peeringSubnetMask);
}

std::string CreateVirtualBorderRouterRequest::getRegionId()const
{
	return regionId_;
}

void CreateVirtualBorderRouterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateVirtualBorderRouterRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void CreateVirtualBorderRouterRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setParameter("PhysicalConnectionId", physicalConnectionId);
}

std::string CreateVirtualBorderRouterRequest::getName()const
{
	return name_;
}

void CreateVirtualBorderRouterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string CreateVirtualBorderRouterRequest::getLocalGatewayIp()const
{
	return localGatewayIp_;
}

void CreateVirtualBorderRouterRequest::setLocalGatewayIp(const std::string& localGatewayIp)
{
	localGatewayIp_ = localGatewayIp;
	setParameter("LocalGatewayIp", localGatewayIp);
}

long CreateVirtualBorderRouterRequest::getVbrOwnerId()const
{
	return vbrOwnerId_;
}

void CreateVirtualBorderRouterRequest::setVbrOwnerId(long vbrOwnerId)
{
	vbrOwnerId_ = vbrOwnerId;
	setParameter("VbrOwnerId", std::to_string(vbrOwnerId));
}

