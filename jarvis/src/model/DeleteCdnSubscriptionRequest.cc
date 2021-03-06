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

#include <alibabacloud/jarvis/model/DeleteCdnSubscriptionRequest.h>

using AlibabaCloud::Jarvis::Model::DeleteCdnSubscriptionRequest;

DeleteCdnSubscriptionRequest::DeleteCdnSubscriptionRequest() :
	RpcServiceRequest("jarvis", "2018-02-06", "DeleteCdnSubscription")
{}

DeleteCdnSubscriptionRequest::~DeleteCdnSubscriptionRequest()
{}

std::string DeleteCdnSubscriptionRequest::getSourceIp()const
{
	return sourceIp_;
}

void DeleteCdnSubscriptionRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DeleteCdnSubscriptionRequest::getLang()const
{
	return lang_;
}

void DeleteCdnSubscriptionRequest::setLang(const std::string& lang)
{
	lang_ = lang;
	setParameter("Lang", lang);
}

std::string DeleteCdnSubscriptionRequest::getCdnUidList()const
{
	return cdnUidList_;
}

void DeleteCdnSubscriptionRequest::setCdnUidList(const std::string& cdnUidList)
{
	cdnUidList_ = cdnUidList;
	setParameter("CdnUidList", cdnUidList);
}

std::string DeleteCdnSubscriptionRequest::getSourceCode()const
{
	return sourceCode_;
}

void DeleteCdnSubscriptionRequest::setSourceCode(const std::string& sourceCode)
{
	sourceCode_ = sourceCode;
	setParameter("SourceCode", sourceCode);
}

