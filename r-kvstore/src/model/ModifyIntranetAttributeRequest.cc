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

#include <alibabacloud/r-kvstore/model/ModifyIntranetAttributeRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyIntranetAttributeRequest;

ModifyIntranetAttributeRequest::ModifyIntranetAttributeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyIntranetAttribute")
{}

ModifyIntranetAttributeRequest::~ModifyIntranetAttributeRequest()
{}

long ModifyIntranetAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIntranetAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIntranetAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyIntranetAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyIntranetAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyIntranetAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyIntranetAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIntranetAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIntranetAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIntranetAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyIntranetAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIntranetAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyIntranetAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIntranetAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyIntranetAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyIntranetAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

