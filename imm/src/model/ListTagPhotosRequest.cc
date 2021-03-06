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

#include <alibabacloud/imm/model/ListTagPhotosRequest.h>

using AlibabaCloud::Imm::Model::ListTagPhotosRequest;

ListTagPhotosRequest::ListTagPhotosRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListTagPhotos")
{}

ListTagPhotosRequest::~ListTagPhotosRequest()
{}

std::string ListTagPhotosRequest::getTagName()const
{
	return tagName_;
}

void ListTagPhotosRequest::setTagName(const std::string& tagName)
{
	tagName_ = tagName;
	setCoreParameter("TagName", tagName);
}

std::string ListTagPhotosRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListTagPhotosRequest::setMaxKeys(const std::string& maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", maxKeys);
}

std::string ListTagPhotosRequest::getRegionId()const
{
	return regionId_;
}

void ListTagPhotosRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListTagPhotosRequest::getMarker()const
{
	return marker_;
}

void ListTagPhotosRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListTagPhotosRequest::getProject()const
{
	return project_;
}

void ListTagPhotosRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListTagPhotosRequest::getSetId()const
{
	return setId_;
}

void ListTagPhotosRequest::setSetId(const std::string& setId)
{
	setId_ = setId;
	setCoreParameter("SetId", setId);
}

std::string ListTagPhotosRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListTagPhotosRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

