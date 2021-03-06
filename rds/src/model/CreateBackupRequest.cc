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

#include <alibabacloud/rds/model/CreateBackupRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateBackupRequest::CreateBackupRequest() :
	RdsRequest("CreateBackup")
{}

CreateBackupRequest::~CreateBackupRequest()
{}

std::string CreateBackupRequest::getBackupMethod()const
{
	return backupMethod_;
}

void CreateBackupRequest::setBackupMethod(const std::string& backupMethod)
{
	backupMethod_ = backupMethod;
	setParameter("BackupMethod", backupMethod);
}

long CreateBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBackupRequest::getDBName()const
{
	return dBName_;
}

void CreateBackupRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

std::string CreateBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateBackupRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateBackupRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long CreateBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateBackupRequest::getBackupType()const
{
	return backupType_;
}

void CreateBackupRequest::setBackupType(const std::string& backupType)
{
	backupType_ = backupType;
	setParameter("BackupType", backupType);
}

std::string CreateBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

