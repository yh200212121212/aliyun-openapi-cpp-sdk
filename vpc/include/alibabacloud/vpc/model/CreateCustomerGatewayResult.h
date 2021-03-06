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

#ifndef ALIBABACLOUD_VPC_MODEL_CREATECUSTOMERGATEWAYRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_CREATECUSTOMERGATEWAYRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT CreateCustomerGatewayResult : public ServiceResult
			{
			public:


				CreateCustomerGatewayResult();
				explicit CreateCustomerGatewayResult(const std::string &payload);
				~CreateCustomerGatewayResult();
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getCustomerGatewayId()const;
				void setCustomerGatewayId(const std::string& customerGatewayId);
				long getCreateTime()const;
				void setCreateTime(long createTime);
				std::string getIpAddress()const;
				void setIpAddress(const std::string& ipAddress);
				std::string getName()const;
				void setName(const std::string& name);

			protected:
				void parse(const std::string &payload);
			private:
				std::string description_;
				std::string customerGatewayId_;
				long createTime_;
				std::string ipAddress_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_CREATECUSTOMERGATEWAYRESULT_H_