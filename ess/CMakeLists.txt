#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)
set(ess_public_header
	include/alibabacloud/ess/model/AttachInstancesRequest.h
	include/alibabacloud/ess/model/AttachInstancesResult.h
	include/alibabacloud/ess/model/DescribeScalingGroupsRequest.h
	include/alibabacloud/ess/model/DescribeScalingGroupsResult.h
	include/alibabacloud/ess/model/DescribeScalingActivitiesRequest.h
	include/alibabacloud/ess/model/DescribeScalingActivitiesResult.h
	include/alibabacloud/ess/model/DescribeScalingRulesRequest.h
	include/alibabacloud/ess/model/DescribeScalingRulesResult.h
	include/alibabacloud/ess/model/ModifyScalingGroupRequest.h
	include/alibabacloud/ess/model/ModifyScalingGroupResult.h
	include/alibabacloud/ess/model/EnableScalingGroupRequest.h
	include/alibabacloud/ess/model/EnableScalingGroupResult.h
	include/alibabacloud/ess/model/DeactivateScalingConfigurationRequest.h
	include/alibabacloud/ess/model/DeactivateScalingConfigurationResult.h
	include/alibabacloud/ess/model/VerifyAuthenticationRequest.h
	include/alibabacloud/ess/model/VerifyAuthenticationResult.h
	include/alibabacloud/ess/model/CreateScheduledTaskRequest.h
	include/alibabacloud/ess/model/CreateScheduledTaskResult.h
	include/alibabacloud/ess/model/DeleteScheduledTaskRequest.h
	include/alibabacloud/ess/model/DeleteScheduledTaskResult.h
	include/alibabacloud/ess/model/CreateScalingRuleRequest.h
	include/alibabacloud/ess/model/CreateScalingRuleResult.h
	include/alibabacloud/ess/model/DescribeScalingConfigurationsRequest.h
	include/alibabacloud/ess/model/DescribeScalingConfigurationsResult.h
	include/alibabacloud/ess/model/ModifyScheduledTaskRequest.h
	include/alibabacloud/ess/model/ModifyScheduledTaskResult.h
	include/alibabacloud/ess/model/RemoveInstancesRequest.h
	include/alibabacloud/ess/model/RemoveInstancesResult.h
	include/alibabacloud/ess/model/ExecuteScalingRuleRequest.h
	include/alibabacloud/ess/model/ExecuteScalingRuleResult.h
	include/alibabacloud/ess/model/DeleteScalingGroupRequest.h
	include/alibabacloud/ess/model/DeleteScalingGroupResult.h
	include/alibabacloud/ess/model/DescribeScalingInstancesRequest.h
	include/alibabacloud/ess/model/DescribeScalingInstancesResult.h
	include/alibabacloud/ess/model/CreateScalingConfigurationRequest.h
	include/alibabacloud/ess/model/CreateScalingConfigurationResult.h
	include/alibabacloud/ess/model/DescribeCapacityHistoryRequest.h
	include/alibabacloud/ess/model/DescribeCapacityHistoryResult.h
	include/alibabacloud/ess/model/DescribeRegionsRequest.h
	include/alibabacloud/ess/model/DescribeRegionsResult.h
	include/alibabacloud/ess/model/DescribeAccountAttributesRequest.h
	include/alibabacloud/ess/model/DescribeAccountAttributesResult.h
	include/alibabacloud/ess/model/DetachInstancesRequest.h
	include/alibabacloud/ess/model/DetachInstancesResult.h
	include/alibabacloud/ess/model/DescribeLimitationRequest.h
	include/alibabacloud/ess/model/DescribeLimitationResult.h
	include/alibabacloud/ess/model/DescribeScalingActivityDetailRequest.h
	include/alibabacloud/ess/model/DescribeScalingActivityDetailResult.h
	include/alibabacloud/ess/model/DescribeAlertConfigRequest.h
	include/alibabacloud/ess/model/DescribeAlertConfigResult.h
	include/alibabacloud/ess/model/CreateScalingGroupRequest.h
	include/alibabacloud/ess/model/CreateScalingGroupResult.h
	include/alibabacloud/ess/model/DeleteScalingConfigurationRequest.h
	include/alibabacloud/ess/model/DeleteScalingConfigurationResult.h
	include/alibabacloud/ess/model/DisableScalingGroupRequest.h
	include/alibabacloud/ess/model/DisableScalingGroupResult.h
	include/alibabacloud/ess/model/ModifyScalingRuleRequest.h
	include/alibabacloud/ess/model/ModifyScalingRuleResult.h
	include/alibabacloud/ess/model/DeleteScalingRuleRequest.h
	include/alibabacloud/ess/model/DeleteScalingRuleResult.h
	include/alibabacloud/ess/model/VerifyUserRequest.h
	include/alibabacloud/ess/model/VerifyUserResult.h
	include/alibabacloud/ess/model/ModifyAlertConfigRequest.h
	include/alibabacloud/ess/model/ModifyAlertConfigResult.h
	include/alibabacloud/ess/EssClient.h
	include/alibabacloud/ess/EssExport.h
	include/alibabacloud/ess/EssRequest.h
	)

set(ess_src
	src/model/AttachInstancesRequest.cc
	src/model/AttachInstancesResult.cc
	src/model/DescribeScalingGroupsRequest.cc
	src/model/DescribeScalingGroupsResult.cc
	src/model/DescribeScalingActivitiesRequest.cc
	src/model/DescribeScalingActivitiesResult.cc
	src/model/DescribeScalingRulesRequest.cc
	src/model/DescribeScalingRulesResult.cc
	src/model/ModifyScalingGroupRequest.cc
	src/model/ModifyScalingGroupResult.cc
	src/model/EnableScalingGroupRequest.cc
	src/model/EnableScalingGroupResult.cc
	src/model/DeactivateScalingConfigurationRequest.cc
	src/model/DeactivateScalingConfigurationResult.cc
	src/model/VerifyAuthenticationRequest.cc
	src/model/VerifyAuthenticationResult.cc
	src/model/CreateScheduledTaskRequest.cc
	src/model/CreateScheduledTaskResult.cc
	src/model/DeleteScheduledTaskRequest.cc
	src/model/DeleteScheduledTaskResult.cc
	src/model/CreateScalingRuleRequest.cc
	src/model/CreateScalingRuleResult.cc
	src/model/DescribeScalingConfigurationsRequest.cc
	src/model/DescribeScalingConfigurationsResult.cc
	src/model/ModifyScheduledTaskRequest.cc
	src/model/ModifyScheduledTaskResult.cc
	src/model/RemoveInstancesRequest.cc
	src/model/RemoveInstancesResult.cc
	src/model/ExecuteScalingRuleRequest.cc
	src/model/ExecuteScalingRuleResult.cc
	src/model/DeleteScalingGroupRequest.cc
	src/model/DeleteScalingGroupResult.cc
	src/model/DescribeScalingInstancesRequest.cc
	src/model/DescribeScalingInstancesResult.cc
	src/model/CreateScalingConfigurationRequest.cc
	src/model/CreateScalingConfigurationResult.cc
	src/model/DescribeCapacityHistoryRequest.cc
	src/model/DescribeCapacityHistoryResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DescribeAccountAttributesRequest.cc
	src/model/DescribeAccountAttributesResult.cc
	src/model/DetachInstancesRequest.cc
	src/model/DetachInstancesResult.cc
	src/model/DescribeLimitationRequest.cc
	src/model/DescribeLimitationResult.cc
	src/model/DescribeScalingActivityDetailRequest.cc
	src/model/DescribeScalingActivityDetailResult.cc
	src/model/DescribeAlertConfigRequest.cc
	src/model/DescribeAlertConfigResult.cc
	src/model/CreateScalingGroupRequest.cc
	src/model/CreateScalingGroupResult.cc
	src/model/DeleteScalingConfigurationRequest.cc
	src/model/DeleteScalingConfigurationResult.cc
	src/model/DisableScalingGroupRequest.cc
	src/model/DisableScalingGroupResult.cc
	src/model/ModifyScalingRuleRequest.cc
	src/model/ModifyScalingRuleResult.cc
	src/model/DeleteScalingRuleRequest.cc
	src/model/DeleteScalingRuleResult.cc
	src/model/VerifyUserRequest.cc
	src/model/VerifyUserResult.cc
	src/model/ModifyAlertConfigRequest.cc
	src/model/ModifyAlertConfigResult.cc
	src/EssClient.cc
	src/EssRequest.cc
	)

add_library(ess ${LIB_TYPE} ${ess_public_header} ${ess_src})

set_target_properties(ess
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ess
	PUBLIC_HEADER "${ess_public_header}"
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ess
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ESS_LIBRARY)
endif()

target_include_directories(ess
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ess
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ess
		jsoncpp)
	target_include_directories(ess
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ess
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ess
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ess
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ess
		jsoncpp)
endif()

install(TARGETS ess
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ess
	)
