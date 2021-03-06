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

#include <alibabacloud/vod/model/DescribeVodStorageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodStorageDataRequest;

DescribeVodStorageDataRequest::DescribeVodStorageDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodStorageData")
{}

DescribeVodStorageDataRequest::~DescribeVodStorageDataRequest()
{}

long DescribeVodStorageDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodStorageDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeVodStorageDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodStorageDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeVodStorageDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodStorageDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodStorageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodStorageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodStorageDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodStorageDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeVodStorageDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodStorageDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeVodStorageDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodStorageDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeVodStorageDataRequest::getStorageType()const
{
	return storageType_;
}

void DescribeVodStorageDataRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setCoreParameter("StorageType", storageType);
}

std::string DescribeVodStorageDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodStorageDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVodStorageDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodStorageDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodStorageDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodStorageDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVodStorageDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodStorageDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeVodStorageDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodStorageDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeVodStorageDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodStorageDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeVodStorageDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodStorageDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeVodStorageDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodStorageDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeVodStorageDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodStorageDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeVodStorageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodStorageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodStorageDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodStorageDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeVodStorageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodStorageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVodStorageDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodStorageDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeVodStorageDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodStorageDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodStorageDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodStorageDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodStorageDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodStorageDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodStorageDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodStorageDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeVodStorageDataRequest::getRegion()const
{
	return region_;
}

void DescribeVodStorageDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

