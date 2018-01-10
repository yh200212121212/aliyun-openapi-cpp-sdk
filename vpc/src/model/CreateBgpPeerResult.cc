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

#include <alibabacloud/vpc/model/CreateBgpPeerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

CreateBgpPeerResult::CreateBgpPeerResult() :
	ServiceResult()
{}

CreateBgpPeerResult::CreateBgpPeerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateBgpPeerResult::~CreateBgpPeerResult()
{}

void CreateBgpPeerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	bgpPeerId_ = value["BgpPeerId"].asString();

}

std::string CreateBgpPeerResult::getBgpPeerId()const
{
	return bgpPeerId_;
}

void CreateBgpPeerResult::setBgpPeerId(const std::string& bgpPeerId)
{
	bgpPeerId_ = bgpPeerId;
}
