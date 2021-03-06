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

#include <alibabacloud/aegis/model/DescribeFilterFieldsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeFilterFieldsResult::DescribeFilterFieldsResult() :
	ServiceResult()
{}

DescribeFilterFieldsResult::DescribeFilterFieldsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFilterFieldsResult::~DescribeFilterFieldsResult()
{}

void DescribeFilterFieldsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allLogFilterList = value["LogFilterList"]["LogFilterListItem"];
	for (auto value : allLogFilterList)
	{
		LogFilterListItem logFilterListObject;
		if(!value["Fields"].isNull())
			logFilterListObject.fields = value["Fields"].asString();
		logFilterList_.push_back(logFilterListObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeFilterFieldsResult::LogFilterListItem> DescribeFilterFieldsResult::getLogFilterList()const
{
	return logFilterList_;
}

long DescribeFilterFieldsResult::getTotal()const
{
	return total_;
}

