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

#include <alibabacloud/emr/model/ModifyScalingRuleRequest.h>

using AlibabaCloud::Emr::Model::ModifyScalingRuleRequest;

ModifyScalingRuleRequest::ModifyScalingRuleRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyScalingRule")
{}

ModifyScalingRuleRequest::~ModifyScalingRuleRequest()
{}

std::string ModifyScalingRuleRequest::getLaunchTime()const
{
	return launchTime_;
}

void ModifyScalingRuleRequest::setLaunchTime(const std::string& launchTime)
{
	launchTime_ = launchTime;
	setParameter("LaunchTime", launchTime);
}

long ModifyScalingRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyScalingRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyScalingRuleRequest::getAdjustmentValue()const
{
	return adjustmentValue_;
}

void ModifyScalingRuleRequest::setAdjustmentValue(int adjustmentValue)
{
	adjustmentValue_ = adjustmentValue;
	setParameter("AdjustmentValue", std::to_string(adjustmentValue));
}

std::string ModifyScalingRuleRequest::getAdjustmentType()const
{
	return adjustmentType_;
}

void ModifyScalingRuleRequest::setAdjustmentType(const std::string& adjustmentType)
{
	adjustmentType_ = adjustmentType;
	setParameter("AdjustmentType", adjustmentType);
}

std::string ModifyScalingRuleRequest::getRuleName()const
{
	return ruleName_;
}

void ModifyScalingRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setParameter("RuleName", ruleName);
}

std::string ModifyScalingRuleRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyScalingRuleRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ModifyScalingRuleRequest::getScalingRuleId()const
{
	return scalingRuleId_;
}

void ModifyScalingRuleRequest::setScalingRuleId(const std::string& scalingRuleId)
{
	scalingRuleId_ = scalingRuleId;
	setParameter("ScalingRuleId", scalingRuleId);
}

int ModifyScalingRuleRequest::getLaunchExpirationTime()const
{
	return launchExpirationTime_;
}

void ModifyScalingRuleRequest::setLaunchExpirationTime(int launchExpirationTime)
{
	launchExpirationTime_ = launchExpirationTime;
	setParameter("LaunchExpirationTime", std::to_string(launchExpirationTime));
}

std::string ModifyScalingRuleRequest::getRecurrenceValue()const
{
	return recurrenceValue_;
}

void ModifyScalingRuleRequest::setRecurrenceValue(const std::string& recurrenceValue)
{
	recurrenceValue_ = recurrenceValue;
	setParameter("RecurrenceValue", recurrenceValue);
}

std::string ModifyScalingRuleRequest::getRecurrenceEndTime()const
{
	return recurrenceEndTime_;
}

void ModifyScalingRuleRequest::setRecurrenceEndTime(const std::string& recurrenceEndTime)
{
	recurrenceEndTime_ = recurrenceEndTime;
	setParameter("RecurrenceEndTime", recurrenceEndTime);
}

std::vector<ModifyScalingRuleRequest::CloudWatchTrigger> ModifyScalingRuleRequest::getCloudWatchTrigger()const
{
	return cloudWatchTrigger_;
}

void ModifyScalingRuleRequest::setCloudWatchTrigger(const std::vector<CloudWatchTrigger>& cloudWatchTrigger)
{
	cloudWatchTrigger_ = cloudWatchTrigger;
	int i = 0;
	for(int i = 0; i!= cloudWatchTrigger.size(); i++)	{
		auto obj = cloudWatchTrigger.at(i);
		std::string str ="CloudWatchTrigger."+ std::to_string(i);
		setParameter(str + ".Period", std::to_string(obj.period));
		setParameter(str + ".EvaluationCount", obj.evaluationCount);
		setParameter(str + ".Threshold", obj.threshold);
		setParameter(str + ".MetricName", obj.metricName);
		setParameter(str + ".ComparisonOperator", obj.comparisonOperator);
		setParameter(str + ".Statistics", obj.statistics);
	}
}

std::string ModifyScalingRuleRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyScalingRuleRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyScalingRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifyScalingRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyScalingRuleRequest::getHostGroupId()const
{
	return hostGroupId_;
}

void ModifyScalingRuleRequest::setHostGroupId(const std::string& hostGroupId)
{
	hostGroupId_ = hostGroupId;
	setParameter("HostGroupId", hostGroupId);
}

std::vector<ModifyScalingRuleRequest::SchedulerTrigger> ModifyScalingRuleRequest::getSchedulerTrigger()const
{
	return schedulerTrigger_;
}

void ModifyScalingRuleRequest::setSchedulerTrigger(const std::vector<SchedulerTrigger>& schedulerTrigger)
{
	schedulerTrigger_ = schedulerTrigger;
	int i = 0;
	for(int i = 0; i!= schedulerTrigger.size(); i++)	{
		auto obj = schedulerTrigger.at(i);
		std::string str ="SchedulerTrigger."+ std::to_string(i);
		setParameter(str + ".LaunchTime", obj.launchTime);
		setParameter(str + ".LaunchExpirationTime", std::to_string(obj.launchExpirationTime));
		setParameter(str + ".RecurrenceValue", obj.recurrenceValue);
		setParameter(str + ".RecurrenceEndTime", obj.recurrenceEndTime);
		setParameter(str + ".RecurrenceType", obj.recurrenceType);
	}
}

int ModifyScalingRuleRequest::getCooldown()const
{
	return cooldown_;
}

void ModifyScalingRuleRequest::setCooldown(int cooldown)
{
	cooldown_ = cooldown;
	setParameter("Cooldown", std::to_string(cooldown));
}

std::string ModifyScalingRuleRequest::getRecurrenceType()const
{
	return recurrenceType_;
}

void ModifyScalingRuleRequest::setRecurrenceType(const std::string& recurrenceType)
{
	recurrenceType_ = recurrenceType;
	setParameter("RecurrenceType", recurrenceType);
}

