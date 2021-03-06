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

#ifndef ALIBABACLOUD_ECS_MODEL_EXPORTIMAGEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_EXPORTIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/ecs/EcsRequest.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT ExportImageRequest : public EcsRequest
			{

			public:
				ExportImageRequest();
				~ExportImageRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getImageId()const;
				void setImageId(const std::string& imageId);
				std::string getOSSBucket()const;
				void setOSSBucket(const std::string& oSSBucket);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOSSPrefix()const;
				void setOSSPrefix(const std::string& oSSPrefix);
				std::string getRoleName()const;
				void setRoleName(const std::string& roleName);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getImageFormat()const;
				void setImageFormat(const std::string& imageFormat);

            private:
				long resourceOwnerId_;
				std::string imageId_;
				std::string oSSBucket_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string oSSPrefix_;
				std::string roleName_;
				long ownerId_;
				std::string imageFormat_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_EXPORTIMAGEREQUEST_H_