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

#include <alibabacloud/r-kvstore/model/CreateCacheAnalysisTaskRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateCacheAnalysisTaskRequest;

CreateCacheAnalysisTaskRequest::CreateCacheAnalysisTaskRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateCacheAnalysisTask")
{}

CreateCacheAnalysisTaskRequest::~CreateCacheAnalysisTaskRequest()
{}

long CreateCacheAnalysisTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCacheAnalysisTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCacheAnalysisTaskRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateCacheAnalysisTaskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateCacheAnalysisTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateCacheAnalysisTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateCacheAnalysisTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCacheAnalysisTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCacheAnalysisTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateCacheAnalysisTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateCacheAnalysisTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCacheAnalysisTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateCacheAnalysisTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCacheAnalysisTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateCacheAnalysisTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateCacheAnalysisTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

