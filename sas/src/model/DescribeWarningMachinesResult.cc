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

#include <alibabacloud/sas/model/DescribeWarningMachinesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeWarningMachinesResult::DescribeWarningMachinesResult() :
	ServiceResult()
{}

DescribeWarningMachinesResult::DescribeWarningMachinesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWarningMachinesResult::~DescribeWarningMachinesResult()
{}

void DescribeWarningMachinesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allWarningMachines = value["WarningMachines"]["WarningMachine"];
	for (auto value : allWarningMachines)
	{
		WarningMachine warningMachinesObject;
		if(!value["Uuid"].isNull())
			warningMachinesObject.uuid = value["Uuid"].asString();
		if(!value["MachineName"].isNull())
			warningMachinesObject.machineName = value["MachineName"].asString();
		if(!value["InternetIp"].isNull())
			warningMachinesObject.internetIp = value["InternetIp"].asString();
		if(!value["IntranetIp"].isNull())
			warningMachinesObject.intranetIp = value["IntranetIp"].asString();
		if(!value["PassCount"].isNull())
			warningMachinesObject.passCount = std::stoi(value["PassCount"].asString());
		if(!value["HighWarningCount"].isNull())
			warningMachinesObject.highWarningCount = std::stoi(value["HighWarningCount"].asString());
		if(!value["MediumWarningCount"].isNull())
			warningMachinesObject.mediumWarningCount = std::stoi(value["MediumWarningCount"].asString());
		if(!value["LowWarningCount"].isNull())
			warningMachinesObject.lowWarningCount = std::stoi(value["LowWarningCount"].asString());
		if(!value["Status"].isNull())
			warningMachinesObject.status = std::stoi(value["Status"].asString());
		warningMachines_.push_back(warningMachinesObject);
	}
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());

}

int DescribeWarningMachinesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeWarningMachinesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeWarningMachinesResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeWarningMachinesResult::WarningMachine> DescribeWarningMachinesResult::getWarningMachines()const
{
	return warningMachines_;
}

int DescribeWarningMachinesResult::getCount()const
{
	return count_;
}

