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

#include <alibabacloud/ots/model/DeleteInstanceRequest.h>

using AlibabaCloud::Ots::Model::DeleteInstanceRequest;

DeleteInstanceRequest::DeleteInstanceRequest() :
	RpcServiceRequest("ots", "2016-06-20", "DeleteInstance")
{}

DeleteInstanceRequest::~DeleteInstanceRequest()
{}

std::string DeleteInstanceRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DeleteInstanceRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DeleteInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteInstanceRequest::getInstanceName()const
{
	return instanceName_;
}

void DeleteInstanceRequest::setInstanceName(const std::string& instanceName)
{
	instanceName_ = instanceName;
	setParameter("InstanceName", instanceName);
}
