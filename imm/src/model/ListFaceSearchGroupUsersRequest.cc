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

#include <alibabacloud/imm/model/ListFaceSearchGroupUsersRequest.h>

using AlibabaCloud::Imm::Model::ListFaceSearchGroupUsersRequest;

ListFaceSearchGroupUsersRequest::ListFaceSearchGroupUsersRequest() :
	RpcServiceRequest("imm", "2017-09-06", "ListFaceSearchGroupUsers")
{}

ListFaceSearchGroupUsersRequest::~ListFaceSearchGroupUsersRequest()
{}

int ListFaceSearchGroupUsersRequest::getMaxKeys()const
{
	return maxKeys_;
}

void ListFaceSearchGroupUsersRequest::setMaxKeys(int maxKeys)
{
	maxKeys_ = maxKeys;
	setCoreParameter("MaxKeys", std::to_string(maxKeys));
}

std::string ListFaceSearchGroupUsersRequest::getRegionId()const
{
	return regionId_;
}

void ListFaceSearchGroupUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListFaceSearchGroupUsersRequest::getMarker()const
{
	return marker_;
}

void ListFaceSearchGroupUsersRequest::setMarker(const std::string& marker)
{
	marker_ = marker;
	setCoreParameter("Marker", marker);
}

std::string ListFaceSearchGroupUsersRequest::getProject()const
{
	return project_;
}

void ListFaceSearchGroupUsersRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string ListFaceSearchGroupUsersRequest::getGroupName()const
{
	return groupName_;
}

void ListFaceSearchGroupUsersRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string ListFaceSearchGroupUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFaceSearchGroupUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

