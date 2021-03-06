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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBEMIGRATETASKSFORSQLSERVERRESULT_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBEMIGRATETASKSFORSQLSERVERRESULT_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeMigrateTasksForSQLServerResult : public ServiceResult
			{
			public:
				struct MigrateTask
				{
					std::string status;
					std::string desc;
					std::string endTime;
					std::string createTime;
					std::string taskType;
					std::string isDBReplaced;
					std::string dBName;
					std::string migrateIaskId;
				};


				DescribeMigrateTasksForSQLServerResult();
				explicit DescribeMigrateTasksForSQLServerResult(const std::string &payload);
				~DescribeMigrateTasksForSQLServerResult();
				int getTotalRecordCount()const;
				void setTotalRecordCount(int totalRecordCount);
				int getPageRecordCount()const;
				void setPageRecordCount(int pageRecordCount);
				std::string getEndTime()const;
				void setEndTime(const std::string& endTime);
				std::string getDBInstanceID()const;
				void setDBInstanceID(const std::string& dBInstanceID);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::vector<MigrateTask> getItems()const;
				void setItems(const std::vector<MigrateTask>& items);
				std::string getDBInstanceName()const;
				void setDBInstanceName(const std::string& dBInstanceName);

			protected:
				void parse(const std::string &payload);
			private:
				int totalRecordCount_;
				int pageRecordCount_;
				std::string endTime_;
				std::string dBInstanceID_;
				int pageNumber_;
				std::string startTime_;
				std::vector<MigrateTask> items_;
				std::string dBInstanceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBEMIGRATETASKSFORSQLSERVERRESULT_H_