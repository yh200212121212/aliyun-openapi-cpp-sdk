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

#ifndef ALIBABACLOUD_VPC_MODEL_DOWNLOADVPNCONNECTIONCONFIGRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DOWNLOADVPNCONNECTIONCONFIGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DownloadVpnConnectionConfigResult : public ServiceResult
			{
			public:
				struct VpnConnectionConfig
				{
					struct IkeConfig
					{
						std::string ikeAuthAlg;
						std::string localId;
						std::string ikeEncAlg;
						std::string ikeVersion;
						std::string ikeMode;
						long ikeLifetime;
						std::string psk;
						std::string remoteId;
						std::string ikePfs;
					};
					struct IpsecConfig
					{
						std::string ipsecPfs;
						std::string ipsecEncAlg;
						std::string ipsecAuthAlg;
						long ipsecLifetime;
					};
					std::string localSubnet;
					std::string remoteSubnet;
					std::vector<IpsecConfig> ipsecConfig;
					std::string local;
					std::string remote;
					std::vector<IkeConfig> ikeConfig;
				};


				DownloadVpnConnectionConfigResult();
				explicit DownloadVpnConnectionConfigResult(const std::string &payload);
				~DownloadVpnConnectionConfigResult();
				std::vector<VpnConnectionConfig> getVpnConnectionConfig()const;
				void setVpnConnectionConfig(const std::vector<VpnConnectionConfig>& vpnConnectionConfig);

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VpnConnectionConfig> vpnConnectionConfig_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DOWNLOADVPNCONNECTIONCONFIGRESULT_H_