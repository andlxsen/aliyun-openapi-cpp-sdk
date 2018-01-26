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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEBYTAGSRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEBYTAGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DescribeDBInstanceByTagsResult : public ServiceResult
			{
			public:
				struct DBInstanceTag
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string dBInstanceId;
					std::vector<DBInstanceTag::Tag> tags;
				};


				DescribeDBInstanceByTagsResult();
				explicit DescribeDBInstanceByTagsResult(const std::string &payload);
				~DescribeDBInstanceByTagsResult();
				int getTotalRecordCount()const;
				void setTotalRecordCount(int totalRecordCount);
				int getPageRecordCount()const;
				void setPageRecordCount(int pageRecordCount);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::vector<DBInstanceTag> getItems()const;
				void setItems(const std::vector<DBInstanceTag>& items);

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				int pageNumber_;
				std::vector<DBInstanceTag> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEDBINSTANCEBYTAGSRESULT_H_