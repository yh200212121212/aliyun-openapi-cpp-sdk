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

#ifndef ALIBABACLOUD_CDN_MODEL_MODIFYCDNDOMAINREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_MODIFYCDNDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT ModifyCdnDomainRequest : public CdnRequest
			{

			public:
				ModifyCdnDomainRequest();
				~ModifyCdnDomainRequest();

				std::string getTopLevelDomain()const;
				void setTopLevelDomain(const std::string& topLevelDomain);
				int getSourcePort()const;
				void setSourcePort(int sourcePort);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getPriorities()const;
				void setPriorities(const std::string& priorities);
				std::string getSources()const;
				void setSources(const std::string& sources);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				std::string getSourceType()const;
				void setSourceType(const std::string& sourceType);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				std::string topLevelDomain_;
				int sourcePort_;
				std::string resourceGroupId_;
				std::string priorities_;
				std::string sources_;
				std::string securityToken_;
				std::string domainName_;
				std::string sourceType_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_MODIFYCDNDOMAINREQUEST_H_