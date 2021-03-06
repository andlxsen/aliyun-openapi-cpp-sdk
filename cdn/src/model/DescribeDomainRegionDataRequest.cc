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

#include <alibabacloud/cdn/model/DescribeDomainRegionDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainRegionDataRequest;

DescribeDomainRegionDataRequest::DescribeDomainRegionDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainRegionData")
{}

DescribeDomainRegionDataRequest::~DescribeDomainRegionDataRequest()
{}

long DescribeDomainRegionDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainRegionDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainRegionDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainRegionDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainRegionDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainRegionDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeDomainRegionDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainRegionDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainRegionDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainRegionDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainRegionDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainRegionDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeDomainRegionDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainRegionDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainRegionDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainRegionDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeDomainRegionDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainRegionDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeDomainRegionDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainRegionDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainRegionDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainRegionDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainRegionDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainRegionDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainRegionDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainRegionDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeDomainRegionDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainRegionDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeDomainRegionDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainRegionDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeDomainRegionDataRequest::getOutString()const
{
	return outString_;
}

void DescribeDomainRegionDataRequest::setOutString(const std::string& outString)
{
	outString_ = outString;
	setParameter("OutString", outString);
}

std::string DescribeDomainRegionDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainRegionDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeDomainRegionDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainRegionDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeDomainRegionDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainRegionDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeDomainRegionDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainRegionDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainRegionDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainRegionDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeDomainRegionDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainRegionDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainRegionDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainRegionDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainRegionDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainRegionDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainRegionDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainRegionDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

