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

#include <alibabacloud/openanalytics/model/OpenProductAccountRequest.h>

using AlibabaCloud::Openanalytics::Model::OpenProductAccountRequest;

OpenProductAccountRequest::OpenProductAccountRequest() :
	RpcServiceRequest("openanalytics", "2018-03-01", "OpenProductAccount")
{}

OpenProductAccountRequest::~OpenProductAccountRequest()
{}

long OpenProductAccountRequest::getCallerParentId()const
{
	return callerParentId_;
}

void OpenProductAccountRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

long OpenProductAccountRequest::getCallerBid()const
{
	return callerBid_;
}

void OpenProductAccountRequest::setCallerBid(long callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", std::to_string(callerBid));
}

std::string OpenProductAccountRequest::getCallerType()const
{
	return callerType_;
}

void OpenProductAccountRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool OpenProductAccountRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void OpenProductAccountRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string OpenProductAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void OpenProductAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool OpenProductAccountRequest::getSecurity_transport()const
{
	return security_transport_;
}

void OpenProductAccountRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string OpenProductAccountRequest::getRegionID()const
{
	return regionID_;
}

void OpenProductAccountRequest::setRegionID(const std::string& regionID)
{
	regionID_ = regionID;
	setParameter("RegionID", regionID);
}

std::string OpenProductAccountRequest::getRequestId()const
{
	return requestId_;
}

void OpenProductAccountRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long OpenProductAccountRequest::getCallerUid()const
{
	return callerUid_;
}

void OpenProductAccountRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string OpenProductAccountRequest::getProductCode()const
{
	return productCode_;
}

void OpenProductAccountRequest::setProductCode(const std::string& productCode)
{
	productCode_ = productCode;
	setParameter("ProductCode", productCode);
}

std::string OpenProductAccountRequest::getProductAccessKey()const
{
	return productAccessKey_;
}

void OpenProductAccountRequest::setProductAccessKey(const std::string& productAccessKey)
{
	productAccessKey_ = productAccessKey;
	setParameter("ProductAccessKey", productAccessKey);
}

std::string OpenProductAccountRequest::getTargetUid()const
{
	return targetUid_;
}

void OpenProductAccountRequest::setTargetUid(const std::string& targetUid)
{
	targetUid_ = targetUid;
	setParameter("TargetUid", targetUid);
}

std::string OpenProductAccountRequest::getTargetArnRole()const
{
	return targetArnRole_;
}

void OpenProductAccountRequest::setTargetArnRole(const std::string& targetArnRole)
{
	targetArnRole_ = targetArnRole;
	setParameter("TargetArnRole", targetArnRole);
}

