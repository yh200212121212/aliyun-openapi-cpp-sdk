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

#ifndef ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESNAPSHOTCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESNAPSHOTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/cdn/CdnRequest.h>

namespace AlibabaCloud
{
	namespace Cdn
	{
		namespace Model
		{
			class ALIBABACLOUD_CDN_EXPORT DescribeLiveSnapshotConfigRequest : public CdnRequest
			{

			public:
				DescribeLiveSnapshotConfigRequest();
				~DescribeLiveSnapshotConfigRequest();

				std::string getAppName()const;
				void setAppName(const std::string& appName);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getDomainName()const;
				void setDomainName(const std::string& domainName);
				int getPageSize()const;
				void setPageSize(int pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNum()const;
				void setPageNum(int pageNum);
				std::string getStreamName()const;
				void setStreamName(const std::string& streamName);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getOrder()const;
				void setOrder(const std::string& order);

            private:
				std::string appName_;
				std::string securityToken_;
				std::string domainName_;
				int pageSize_;
				long ownerId_;
				int pageNum_;
				std::string streamName_;
				std::string accessKeyId_;
				std::string order_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDN_MODEL_DESCRIBELIVESNAPSHOTCONFIGREQUEST_H_