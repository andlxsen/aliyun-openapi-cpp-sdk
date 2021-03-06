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

#include <alibabacloud/ivision/model/DeleteTrainDatasRequest.h>

using AlibabaCloud::Ivision::Model::DeleteTrainDatasRequest;

DeleteTrainDatasRequest::DeleteTrainDatasRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteTrainDatas")
{}

DeleteTrainDatasRequest::~DeleteTrainDatasRequest()
{}

long DeleteTrainDatasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteTrainDatasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteTrainDatasRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteTrainDatasRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteTrainDatasRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteTrainDatasRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteTrainDatasRequest::getDataIds()const
{
	return dataIds_;
}

void DeleteTrainDatasRequest::setDataIds(const std::string& dataIds)
{
	dataIds_ = dataIds;
	setCoreParameter("DataIds", dataIds);
}

std::string DeleteTrainDatasRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteTrainDatasRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteTrainDatasRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteTrainDatasRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteTrainDatasRequest::getCallerType()const
{
	return callerType_;
}

void DeleteTrainDatasRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteTrainDatasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteTrainDatasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteTrainDatasRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteTrainDatasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteTrainDatasRequest::getRegionId()const
{
	return regionId_;
}

void DeleteTrainDatasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteTrainDatasRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteTrainDatasRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteTrainDatasRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteTrainDatasRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteTrainDatasRequest::getProjectId()const
{
	return projectId_;
}

void DeleteTrainDatasRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeleteTrainDatasRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteTrainDatasRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteTrainDatasRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteTrainDatasRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteTrainDatasRequest::getShowLog()const
{
	return showLog_;
}

void DeleteTrainDatasRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DeleteTrainDatasRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteTrainDatasRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteTrainDatasRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteTrainDatasRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteTrainDatasRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteTrainDatasRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteTrainDatasRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteTrainDatasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteTrainDatasRequest::getVersion()const
{
	return version_;
}

void DeleteTrainDatasRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DeleteTrainDatasRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteTrainDatasRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteTrainDatasRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteTrainDatasRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteTrainDatasRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteTrainDatasRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteTrainDatasRequest::getRequestId()const
{
	return requestId_;
}

void DeleteTrainDatasRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

