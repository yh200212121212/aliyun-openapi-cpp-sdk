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

#include <alibabacloud/cloudphoto/model/SetMeRequest.h>

using namespace AlibabaCloud::CloudPhoto;
using namespace AlibabaCloud::CloudPhoto::Model;

SetMeRequest::SetMeRequest() :
	CloudPhotoRequest("SetMe")
{}

SetMeRequest::~SetMeRequest()
{}

std::string SetMeRequest::getLibraryId()const
{
	return libraryId_;
}

void SetMeRequest::setLibraryId(const std::string& libraryId)
{
	libraryId_ = libraryId;
	setParameter("LibraryId", libraryId);
}

std::string SetMeRequest::getStoreName()const
{
	return storeName_;
}

void SetMeRequest::setStoreName(const std::string& storeName)
{
	storeName_ = storeName;
	setParameter("StoreName", storeName);
}

long SetMeRequest::getFaceId()const
{
	return faceId_;
}

void SetMeRequest::setFaceId(long faceId)
{
	faceId_ = faceId;
	setParameter("FaceId", std::to_string(faceId));
}

