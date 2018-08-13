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

#include <alibabacloud/smartag/model/DeleteCloudConnectNetworkRequest.h>

using AlibabaCloud::Smartag::Model::DeleteCloudConnectNetworkRequest;

DeleteCloudConnectNetworkRequest::DeleteCloudConnectNetworkRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteCloudConnectNetwork")
{}

DeleteCloudConnectNetworkRequest::~DeleteCloudConnectNetworkRequest()
{}

long DeleteCloudConnectNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteCloudConnectNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteCloudConnectNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteCloudConnectNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteCloudConnectNetworkRequest::getRegionId()const
{
	return regionId_;
}

void DeleteCloudConnectNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteCloudConnectNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteCloudConnectNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteCloudConnectNetworkRequest::getCcnId()const
{
	return ccnId_;
}

void DeleteCloudConnectNetworkRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setParameter("CcnId", ccnId);
}

long DeleteCloudConnectNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteCloudConnectNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

