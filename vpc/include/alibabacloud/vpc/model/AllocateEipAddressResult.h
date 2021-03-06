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

#ifndef ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT AllocateEipAddressResult : public ServiceResult
			{
			public:


				AllocateEipAddressResult();
				explicit AllocateEipAddressResult(const std::string &payload);
				~AllocateEipAddressResult();
				std::string getAllocationId()const;
				void setAllocationId(const std::string& allocationId);
				std::string getEipAddress()const;
				void setEipAddress(const std::string& eipAddress);
				long getOrderId()const;
				void setOrderId(long orderId);

			protected:
				void parse(const std::string &payload);
			private:
				std::string allocationId_;
				std::string eipAddress_;
				long orderId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_ALLOCATEEIPADDRESSRESULT_H_