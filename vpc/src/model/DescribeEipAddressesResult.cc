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

#include <alibabacloud/vpc/model/DescribeEipAddressesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeEipAddressesResult::DescribeEipAddressesResult() :
	ServiceResult()
{}

DescribeEipAddressesResult::DescribeEipAddressesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEipAddressesResult::~DescribeEipAddressesResult()
{}

void DescribeEipAddressesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allEipAddresses = value["EipAddresses"]["EipAddress"];
	for (auto value : allEipAddresses)
	{
		EipAddress eipAddressesObject;
		if(!value["RegionId"].isNull())
			eipAddressesObject.regionId = value["RegionId"].asString();
		if(!value["IpAddress"].isNull())
			eipAddressesObject.ipAddress = value["IpAddress"].asString();
		if(!value["PrivateIpAddress"].isNull())
			eipAddressesObject.privateIpAddress = value["PrivateIpAddress"].asString();
		if(!value["AllocationId"].isNull())
			eipAddressesObject.allocationId = value["AllocationId"].asString();
		if(!value["Status"].isNull())
			eipAddressesObject.status = value["Status"].asString();
		if(!value["InstanceId"].isNull())
			eipAddressesObject.instanceId = value["InstanceId"].asString();
		if(!value["Bandwidth"].isNull())
			eipAddressesObject.bandwidth = value["Bandwidth"].asString();
		if(!value["EipBandwidth"].isNull())
			eipAddressesObject.eipBandwidth = value["EipBandwidth"].asString();
		if(!value["InternetChargeType"].isNull())
			eipAddressesObject.internetChargeType = value["InternetChargeType"].asString();
		if(!value["AllocationTime"].isNull())
			eipAddressesObject.allocationTime = value["AllocationTime"].asString();
		if(!value["InstanceType"].isNull())
			eipAddressesObject.instanceType = value["InstanceType"].asString();
		if(!value["InstanceRegionId"].isNull())
			eipAddressesObject.instanceRegionId = value["InstanceRegionId"].asString();
		if(!value["ChargeType"].isNull())
			eipAddressesObject.chargeType = value["ChargeType"].asString();
		if(!value["ExpiredTime"].isNull())
			eipAddressesObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["HDMonitorStatus"].isNull())
			eipAddressesObject.hDMonitorStatus = value["HDMonitorStatus"].asString();
		if(!value["Name"].isNull())
			eipAddressesObject.name = value["Name"].asString();
		if(!value["ISP"].isNull())
			eipAddressesObject.iSP = value["ISP"].asString();
		if(!value["Descritpion"].isNull())
			eipAddressesObject.descritpion = value["Descritpion"].asString();
		if(!value["BandwidthPackageId"].isNull())
			eipAddressesObject.bandwidthPackageId = value["BandwidthPackageId"].asString();
		if(!value["BandwidthPackageType"].isNull())
			eipAddressesObject.bandwidthPackageType = value["BandwidthPackageType"].asString();
		if(!value["ResourceGroupId"].isNull())
			eipAddressesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["HasReservationData"].isNull())
			eipAddressesObject.hasReservationData = value["HasReservationData"].asString();
		if(!value["ReservationBandwidth"].isNull())
			eipAddressesObject.reservationBandwidth = value["ReservationBandwidth"].asString();
		if(!value["ReservationInternetChargeType"].isNull())
			eipAddressesObject.reservationInternetChargeType = value["ReservationInternetChargeType"].asString();
		if(!value["ReservationActiveTime"].isNull())
			eipAddressesObject.reservationActiveTime = value["ReservationActiveTime"].asString();
		if(!value["ReservationOrderType"].isNull())
			eipAddressesObject.reservationOrderType = value["ReservationOrderType"].asString();
		if(!value["Mode"].isNull())
			eipAddressesObject.mode = value["Mode"].asString();
		auto allOperationLocks = value["OperationLocks"]["LockReason"];
		for (auto value : allOperationLocks)
		{
			EipAddress::LockReason operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			eipAddressesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			EipAddress::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			eipAddressesObject.tags.push_back(tagsObject);
		}
		auto allAvailableRegions = value["AvailableRegions"]["AvailableRegion"];
		for (auto value : allAvailableRegions)
			eipAddressesObject.availableRegions.push_back(value.asString());
		eipAddresses_.push_back(eipAddressesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeEipAddressesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeEipAddressesResult::EipAddress> DescribeEipAddressesResult::getEipAddresses()const
{
	return eipAddresses_;
}

int DescribeEipAddressesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEipAddressesResult::getPageNumber()const
{
	return pageNumber_;
}

