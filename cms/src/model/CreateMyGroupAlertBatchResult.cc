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

#include <alibabacloud/cms/model/CreateMyGroupAlertBatchResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

CreateMyGroupAlertBatchResult::CreateMyGroupAlertBatchResult() :
	ServiceResult()
{}

CreateMyGroupAlertBatchResult::CreateMyGroupAlertBatchResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMyGroupAlertBatchResult::~CreateMyGroupAlertBatchResult()
{}

void CreateMyGroupAlertBatchResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allResources = value["Resources"]["AlertResult"];
	for (auto value : allResources)
	{
		AlertResult resourcesObject;
		if(!value["AlertName"].isNull())
			resourcesObject.alertName = value["AlertName"].asString();
		if(!value["DisplayName"].isNull())
			resourcesObject.displayName = value["DisplayName"].asString();
		if(!value["MetricNamespace"].isNull())
			resourcesObject.metricNamespace = value["MetricNamespace"].asString();
		if(!value["MetricName"].isNull())
			resourcesObject.metricName = value["MetricName"].asString();
		if(!value["Message"].isNull())
			resourcesObject.message = value["Message"].asString();
		if(!value["Code"].isNull())
			resourcesObject.code = std::stoi(value["Code"].asString());
		if(!value["Success"].isNull())
			resourcesObject.success = value["Success"].asString() == "true";
		if(!value["GroupId"].isNull())
			resourcesObject.groupId = std::stol(value["GroupId"].asString());
		resources_.push_back(resourcesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = std::stoi(value["ErrorCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

std::vector<CreateMyGroupAlertBatchResult::AlertResult> CreateMyGroupAlertBatchResult::getResources()const
{
	return resources_;
}

int CreateMyGroupAlertBatchResult::getErrorCode()const
{
	return errorCode_;
}

std::string CreateMyGroupAlertBatchResult::getErrorMessage()const
{
	return errorMessage_;
}

bool CreateMyGroupAlertBatchResult::getSuccess()const
{
	return success_;
}

