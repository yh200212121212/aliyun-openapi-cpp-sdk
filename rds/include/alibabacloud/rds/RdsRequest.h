﻿/*
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

#ifndef ALIBABACLOUD_RDS_RDSREQUEST_H_
#define ALIBABACLOUD_RDS_RDSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include "RdsExport.h"

namespace AlibabaCloud
{
	namespace Rds
	{
		class ALIBABACLOUD_RDS_EXPORT RdsRequest : public RpcServiceRequest
		{
		public:
			explicit RdsRequest(const std::string & action);
			virtual ~RdsRequest();

		private:

		};
	}
}

#endif // !ALIBABACLOUD_RDS_RDSREQUEST_H_