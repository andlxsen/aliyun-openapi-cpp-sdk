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

#ifndef ALIBABACLOUD_GREEN_GREENCLIENT_H_
#define ALIBABACLOUD_GREEN_GREENCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RoaServiceClient.h>
#include "GreenExport.h"
#include "model/ImageSyncScanRequest.h"
#include "model/ImageSyncScanResult.h"
#include "model/UploadCredentialsRequest.h"
#include "model/UploadCredentialsResult.h"
#include "model/GetPersonsRequest.h"
#include "model/GetPersonsResult.h"
#include "model/GetPersonRequest.h"
#include "model/GetPersonResult.h"
#include "model/DeleteFacesRequest.h"
#include "model/DeleteFacesResult.h"
#include "model/DeleteVideoDnaGroupRequest.h"
#include "model/DeleteVideoDnaGroupResult.h"
#include "model/AddVideoDnaRequest.h"
#include "model/AddVideoDnaResult.h"
#include "model/VideoFeedbackRequest.h"
#include "model/VideoFeedbackResult.h"
#include "model/DeletePersonRequest.h"
#include "model/DeletePersonResult.h"
#include "model/VideoSyncScanRequest.h"
#include "model/VideoSyncScanResult.h"
#include "model/VideoAsyncScanResultsRequest.h"
#include "model/VideoAsyncScanResultsResult.h"
#include "model/DeleteVideoDnaRequest.h"
#include "model/DeleteVideoDnaResult.h"
#include "model/AddGroupsRequest.h"
#include "model/AddGroupsResult.h"
#include "model/FileAsyncScanRequest.h"
#include "model/FileAsyncScanResult.h"
#include "model/SetPersonRequest.h"
#include "model/SetPersonResult.h"
#include "model/VoiceIdentityCheckRequest.h"
#include "model/VoiceIdentityCheckResult.h"
#include "model/TextFeedbackRequest.h"
#include "model/TextFeedbackResult.h"
#include "model/FileAsyncScanResultsRequest.h"
#include "model/FileAsyncScanResultsResult.h"
#include "model/DeleteGroupsRequest.h"
#include "model/DeleteGroupsResult.h"
#include "model/VoiceIdentityStartCheckRequest.h"
#include "model/VoiceIdentityStartCheckResult.h"
#include "model/AddVideoDnaGroupRequest.h"
#include "model/AddVideoDnaGroupResult.h"
#include "model/ImageAsyncScanRequest.h"
#include "model/ImageAsyncScanResult.h"
#include "model/VideoAsyncScanRequest.h"
#include "model/VideoAsyncScanResult.h"
#include "model/ImageAsyncScanResultsRequest.h"
#include "model/ImageAsyncScanResultsResult.h"
#include "model/VoiceAsyncScanResultsRequest.h"
#include "model/VoiceAsyncScanResultsResult.h"
#include "model/GetFacesRequest.h"
#include "model/GetFacesResult.h"
#include "model/VoiceAsyncScanRequest.h"
#include "model/VoiceAsyncScanResult.h"
#include "model/VoiceCancelScanRequest.h"
#include "model/VoiceCancelScanResult.h"
#include "model/GetGroupsRequest.h"
#include "model/GetGroupsResult.h"
#include "model/TextScanRequest.h"
#include "model/TextScanResult.h"
#include "model/VoiceIdentityRegisterRequest.h"
#include "model/VoiceIdentityRegisterResult.h"
#include "model/ImageScanFeedbackRequest.h"
#include "model/ImageScanFeedbackResult.h"
#include "model/VoiceIdentityStartRegisterRequest.h"
#include "model/VoiceIdentityStartRegisterResult.h"
#include "model/DeleteSimilarityImageRequest.h"
#include "model/DeleteSimilarityImageResult.h"
#include "model/SearchPersonRequest.h"
#include "model/SearchPersonResult.h"
#include "model/GetAddVideoDnaResultsRequest.h"
#include "model/GetAddVideoDnaResultsResult.h"
#include "model/AddPersonRequest.h"
#include "model/AddPersonResult.h"
#include "model/AddFacesRequest.h"
#include "model/AddFacesResult.h"
#include "model/AddSimilarityImageRequest.h"
#include "model/AddSimilarityImageResult.h"
#include "model/VoiceIdentityUnregisterRequest.h"
#include "model/VoiceIdentityUnregisterResult.h"


namespace AlibabaCloud
{
	namespace Green
	{
		class ALIBABACLOUD_GREEN_EXPORT GreenClient : public RoaServiceClient
		{
		public:
			typedef Outcome<Error, Model::ImageSyncScanResult> ImageSyncScanOutcome;
			typedef std::future<ImageSyncScanOutcome> ImageSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageSyncScanRequest&, const ImageSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageSyncScanAsyncHandler;
			typedef Outcome<Error, Model::UploadCredentialsResult> UploadCredentialsOutcome;
			typedef std::future<UploadCredentialsOutcome> UploadCredentialsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::UploadCredentialsRequest&, const UploadCredentialsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UploadCredentialsAsyncHandler;
			typedef Outcome<Error, Model::GetPersonsResult> GetPersonsOutcome;
			typedef std::future<GetPersonsOutcome> GetPersonsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonsRequest&, const GetPersonsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonsAsyncHandler;
			typedef Outcome<Error, Model::GetPersonResult> GetPersonOutcome;
			typedef std::future<GetPersonOutcome> GetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetPersonRequest&, const GetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonAsyncHandler;
			typedef Outcome<Error, Model::DeleteFacesResult> DeleteFacesOutcome;
			typedef std::future<DeleteFacesOutcome> DeleteFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteFacesRequest&, const DeleteFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFacesAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoDnaGroupResult> DeleteVideoDnaGroupOutcome;
			typedef std::future<DeleteVideoDnaGroupOutcome> DeleteVideoDnaGroupOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteVideoDnaGroupRequest&, const DeleteVideoDnaGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoDnaGroupAsyncHandler;
			typedef Outcome<Error, Model::AddVideoDnaResult> AddVideoDnaOutcome;
			typedef std::future<AddVideoDnaOutcome> AddVideoDnaOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddVideoDnaRequest&, const AddVideoDnaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVideoDnaAsyncHandler;
			typedef Outcome<Error, Model::VideoFeedbackResult> VideoFeedbackOutcome;
			typedef std::future<VideoFeedbackOutcome> VideoFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoFeedbackRequest&, const VideoFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoFeedbackAsyncHandler;
			typedef Outcome<Error, Model::DeletePersonResult> DeletePersonOutcome;
			typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeletePersonRequest&, const DeletePersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
			typedef Outcome<Error, Model::VideoSyncScanResult> VideoSyncScanOutcome;
			typedef std::future<VideoSyncScanOutcome> VideoSyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoSyncScanRequest&, const VideoSyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoSyncScanAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResultsResult> VideoAsyncScanResultsOutcome;
			typedef std::future<VideoAsyncScanResultsOutcome> VideoAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanResultsRequest&, const VideoAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::DeleteVideoDnaResult> DeleteVideoDnaOutcome;
			typedef std::future<DeleteVideoDnaOutcome> DeleteVideoDnaOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteVideoDnaRequest&, const DeleteVideoDnaOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteVideoDnaAsyncHandler;
			typedef Outcome<Error, Model::AddGroupsResult> AddGroupsOutcome;
			typedef std::future<AddGroupsOutcome> AddGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddGroupsRequest&, const AddGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddGroupsAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResult> FileAsyncScanOutcome;
			typedef std::future<FileAsyncScanOutcome> FileAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanRequest&, const FileAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::SetPersonResult> SetPersonOutcome;
			typedef std::future<SetPersonOutcome> SetPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SetPersonRequest&, const SetPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SetPersonAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityCheckResult> VoiceIdentityCheckOutcome;
			typedef std::future<VoiceIdentityCheckOutcome> VoiceIdentityCheckOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityCheckRequest&, const VoiceIdentityCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityCheckAsyncHandler;
			typedef Outcome<Error, Model::TextFeedbackResult> TextFeedbackOutcome;
			typedef std::future<TextFeedbackOutcome> TextFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextFeedbackRequest&, const TextFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextFeedbackAsyncHandler;
			typedef Outcome<Error, Model::FileAsyncScanResultsResult> FileAsyncScanResultsOutcome;
			typedef std::future<FileAsyncScanResultsOutcome> FileAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::FileAsyncScanResultsRequest&, const FileAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> FileAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::DeleteGroupsResult> DeleteGroupsOutcome;
			typedef std::future<DeleteGroupsOutcome> DeleteGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteGroupsRequest&, const DeleteGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupsAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityStartCheckResult> VoiceIdentityStartCheckOutcome;
			typedef std::future<VoiceIdentityStartCheckOutcome> VoiceIdentityStartCheckOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityStartCheckRequest&, const VoiceIdentityStartCheckOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityStartCheckAsyncHandler;
			typedef Outcome<Error, Model::AddVideoDnaGroupResult> AddVideoDnaGroupOutcome;
			typedef std::future<AddVideoDnaGroupOutcome> AddVideoDnaGroupOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddVideoDnaGroupRequest&, const AddVideoDnaGroupOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddVideoDnaGroupAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResult> ImageAsyncScanOutcome;
			typedef std::future<ImageAsyncScanOutcome> ImageAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanRequest&, const ImageAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VideoAsyncScanResult> VideoAsyncScanOutcome;
			typedef std::future<VideoAsyncScanOutcome> VideoAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VideoAsyncScanRequest&, const VideoAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VideoAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::ImageAsyncScanResultsResult> ImageAsyncScanResultsOutcome;
			typedef std::future<ImageAsyncScanResultsOutcome> ImageAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageAsyncScanResultsRequest&, const ImageAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResultsResult> VoiceAsyncScanResultsOutcome;
			typedef std::future<VoiceAsyncScanResultsOutcome> VoiceAsyncScanResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanResultsRequest&, const VoiceAsyncScanResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanResultsAsyncHandler;
			typedef Outcome<Error, Model::GetFacesResult> GetFacesOutcome;
			typedef std::future<GetFacesOutcome> GetFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetFacesRequest&, const GetFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetFacesAsyncHandler;
			typedef Outcome<Error, Model::VoiceAsyncScanResult> VoiceAsyncScanOutcome;
			typedef std::future<VoiceAsyncScanOutcome> VoiceAsyncScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceAsyncScanRequest&, const VoiceAsyncScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceAsyncScanAsyncHandler;
			typedef Outcome<Error, Model::VoiceCancelScanResult> VoiceCancelScanOutcome;
			typedef std::future<VoiceCancelScanOutcome> VoiceCancelScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceCancelScanRequest&, const VoiceCancelScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceCancelScanAsyncHandler;
			typedef Outcome<Error, Model::GetGroupsResult> GetGroupsOutcome;
			typedef std::future<GetGroupsOutcome> GetGroupsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetGroupsRequest&, const GetGroupsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupsAsyncHandler;
			typedef Outcome<Error, Model::TextScanResult> TextScanOutcome;
			typedef std::future<TextScanOutcome> TextScanOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::TextScanRequest&, const TextScanOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> TextScanAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityRegisterResult> VoiceIdentityRegisterOutcome;
			typedef std::future<VoiceIdentityRegisterOutcome> VoiceIdentityRegisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityRegisterRequest&, const VoiceIdentityRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityRegisterAsyncHandler;
			typedef Outcome<Error, Model::ImageScanFeedbackResult> ImageScanFeedbackOutcome;
			typedef std::future<ImageScanFeedbackOutcome> ImageScanFeedbackOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::ImageScanFeedbackRequest&, const ImageScanFeedbackOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> ImageScanFeedbackAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityStartRegisterResult> VoiceIdentityStartRegisterOutcome;
			typedef std::future<VoiceIdentityStartRegisterOutcome> VoiceIdentityStartRegisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityStartRegisterRequest&, const VoiceIdentityStartRegisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityStartRegisterAsyncHandler;
			typedef Outcome<Error, Model::DeleteSimilarityImageResult> DeleteSimilarityImageOutcome;
			typedef std::future<DeleteSimilarityImageOutcome> DeleteSimilarityImageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::DeleteSimilarityImageRequest&, const DeleteSimilarityImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteSimilarityImageAsyncHandler;
			typedef Outcome<Error, Model::SearchPersonResult> SearchPersonOutcome;
			typedef std::future<SearchPersonOutcome> SearchPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::SearchPersonRequest&, const SearchPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonAsyncHandler;
			typedef Outcome<Error, Model::GetAddVideoDnaResultsResult> GetAddVideoDnaResultsOutcome;
			typedef std::future<GetAddVideoDnaResultsOutcome> GetAddVideoDnaResultsOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::GetAddVideoDnaResultsRequest&, const GetAddVideoDnaResultsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetAddVideoDnaResultsAsyncHandler;
			typedef Outcome<Error, Model::AddPersonResult> AddPersonOutcome;
			typedef std::future<AddPersonOutcome> AddPersonOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddPersonRequest&, const AddPersonOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddPersonAsyncHandler;
			typedef Outcome<Error, Model::AddFacesResult> AddFacesOutcome;
			typedef std::future<AddFacesOutcome> AddFacesOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddFacesRequest&, const AddFacesOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddFacesAsyncHandler;
			typedef Outcome<Error, Model::AddSimilarityImageResult> AddSimilarityImageOutcome;
			typedef std::future<AddSimilarityImageOutcome> AddSimilarityImageOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::AddSimilarityImageRequest&, const AddSimilarityImageOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> AddSimilarityImageAsyncHandler;
			typedef Outcome<Error, Model::VoiceIdentityUnregisterResult> VoiceIdentityUnregisterOutcome;
			typedef std::future<VoiceIdentityUnregisterOutcome> VoiceIdentityUnregisterOutcomeCallable;
			typedef std::function<void(const GreenClient*, const Model::VoiceIdentityUnregisterRequest&, const VoiceIdentityUnregisterOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> VoiceIdentityUnregisterAsyncHandler;

			GreenClient(const Credentials &credentials, const ClientConfiguration &configuration);
			GreenClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			GreenClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~GreenClient();
			ImageSyncScanOutcome imageSyncScan(const Model::ImageSyncScanRequest &request)const;
			void imageSyncScanAsync(const Model::ImageSyncScanRequest& request, const ImageSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageSyncScanOutcomeCallable imageSyncScanCallable(const Model::ImageSyncScanRequest& request) const;
			UploadCredentialsOutcome uploadCredentials(const Model::UploadCredentialsRequest &request)const;
			void uploadCredentialsAsync(const Model::UploadCredentialsRequest& request, const UploadCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UploadCredentialsOutcomeCallable uploadCredentialsCallable(const Model::UploadCredentialsRequest& request) const;
			GetPersonsOutcome getPersons(const Model::GetPersonsRequest &request)const;
			void getPersonsAsync(const Model::GetPersonsRequest& request, const GetPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonsOutcomeCallable getPersonsCallable(const Model::GetPersonsRequest& request) const;
			GetPersonOutcome getPerson(const Model::GetPersonRequest &request)const;
			void getPersonAsync(const Model::GetPersonRequest& request, const GetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetPersonOutcomeCallable getPersonCallable(const Model::GetPersonRequest& request) const;
			DeleteFacesOutcome deleteFaces(const Model::DeleteFacesRequest &request)const;
			void deleteFacesAsync(const Model::DeleteFacesRequest& request, const DeleteFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteFacesOutcomeCallable deleteFacesCallable(const Model::DeleteFacesRequest& request) const;
			DeleteVideoDnaGroupOutcome deleteVideoDnaGroup(const Model::DeleteVideoDnaGroupRequest &request)const;
			void deleteVideoDnaGroupAsync(const Model::DeleteVideoDnaGroupRequest& request, const DeleteVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoDnaGroupOutcomeCallable deleteVideoDnaGroupCallable(const Model::DeleteVideoDnaGroupRequest& request) const;
			AddVideoDnaOutcome addVideoDna(const Model::AddVideoDnaRequest &request)const;
			void addVideoDnaAsync(const Model::AddVideoDnaRequest& request, const AddVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVideoDnaOutcomeCallable addVideoDnaCallable(const Model::AddVideoDnaRequest& request) const;
			VideoFeedbackOutcome videoFeedback(const Model::VideoFeedbackRequest &request)const;
			void videoFeedbackAsync(const Model::VideoFeedbackRequest& request, const VideoFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoFeedbackOutcomeCallable videoFeedbackCallable(const Model::VideoFeedbackRequest& request) const;
			DeletePersonOutcome deletePerson(const Model::DeletePersonRequest &request)const;
			void deletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeletePersonOutcomeCallable deletePersonCallable(const Model::DeletePersonRequest& request) const;
			VideoSyncScanOutcome videoSyncScan(const Model::VideoSyncScanRequest &request)const;
			void videoSyncScanAsync(const Model::VideoSyncScanRequest& request, const VideoSyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoSyncScanOutcomeCallable videoSyncScanCallable(const Model::VideoSyncScanRequest& request) const;
			VideoAsyncScanResultsOutcome videoAsyncScanResults(const Model::VideoAsyncScanResultsRequest &request)const;
			void videoAsyncScanResultsAsync(const Model::VideoAsyncScanResultsRequest& request, const VideoAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanResultsOutcomeCallable videoAsyncScanResultsCallable(const Model::VideoAsyncScanResultsRequest& request) const;
			DeleteVideoDnaOutcome deleteVideoDna(const Model::DeleteVideoDnaRequest &request)const;
			void deleteVideoDnaAsync(const Model::DeleteVideoDnaRequest& request, const DeleteVideoDnaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteVideoDnaOutcomeCallable deleteVideoDnaCallable(const Model::DeleteVideoDnaRequest& request) const;
			AddGroupsOutcome addGroups(const Model::AddGroupsRequest &request)const;
			void addGroupsAsync(const Model::AddGroupsRequest& request, const AddGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddGroupsOutcomeCallable addGroupsCallable(const Model::AddGroupsRequest& request) const;
			FileAsyncScanOutcome fileAsyncScan(const Model::FileAsyncScanRequest &request)const;
			void fileAsyncScanAsync(const Model::FileAsyncScanRequest& request, const FileAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanOutcomeCallable fileAsyncScanCallable(const Model::FileAsyncScanRequest& request) const;
			SetPersonOutcome setPerson(const Model::SetPersonRequest &request)const;
			void setPersonAsync(const Model::SetPersonRequest& request, const SetPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SetPersonOutcomeCallable setPersonCallable(const Model::SetPersonRequest& request) const;
			VoiceIdentityCheckOutcome voiceIdentityCheck(const Model::VoiceIdentityCheckRequest &request)const;
			void voiceIdentityCheckAsync(const Model::VoiceIdentityCheckRequest& request, const VoiceIdentityCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityCheckOutcomeCallable voiceIdentityCheckCallable(const Model::VoiceIdentityCheckRequest& request) const;
			TextFeedbackOutcome textFeedback(const Model::TextFeedbackRequest &request)const;
			void textFeedbackAsync(const Model::TextFeedbackRequest& request, const TextFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextFeedbackOutcomeCallable textFeedbackCallable(const Model::TextFeedbackRequest& request) const;
			FileAsyncScanResultsOutcome fileAsyncScanResults(const Model::FileAsyncScanResultsRequest &request)const;
			void fileAsyncScanResultsAsync(const Model::FileAsyncScanResultsRequest& request, const FileAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			FileAsyncScanResultsOutcomeCallable fileAsyncScanResultsCallable(const Model::FileAsyncScanResultsRequest& request) const;
			DeleteGroupsOutcome deleteGroups(const Model::DeleteGroupsRequest &request)const;
			void deleteGroupsAsync(const Model::DeleteGroupsRequest& request, const DeleteGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteGroupsOutcomeCallable deleteGroupsCallable(const Model::DeleteGroupsRequest& request) const;
			VoiceIdentityStartCheckOutcome voiceIdentityStartCheck(const Model::VoiceIdentityStartCheckRequest &request)const;
			void voiceIdentityStartCheckAsync(const Model::VoiceIdentityStartCheckRequest& request, const VoiceIdentityStartCheckAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityStartCheckOutcomeCallable voiceIdentityStartCheckCallable(const Model::VoiceIdentityStartCheckRequest& request) const;
			AddVideoDnaGroupOutcome addVideoDnaGroup(const Model::AddVideoDnaGroupRequest &request)const;
			void addVideoDnaGroupAsync(const Model::AddVideoDnaGroupRequest& request, const AddVideoDnaGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddVideoDnaGroupOutcomeCallable addVideoDnaGroupCallable(const Model::AddVideoDnaGroupRequest& request) const;
			ImageAsyncScanOutcome imageAsyncScan(const Model::ImageAsyncScanRequest &request)const;
			void imageAsyncScanAsync(const Model::ImageAsyncScanRequest& request, const ImageAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanOutcomeCallable imageAsyncScanCallable(const Model::ImageAsyncScanRequest& request) const;
			VideoAsyncScanOutcome videoAsyncScan(const Model::VideoAsyncScanRequest &request)const;
			void videoAsyncScanAsync(const Model::VideoAsyncScanRequest& request, const VideoAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VideoAsyncScanOutcomeCallable videoAsyncScanCallable(const Model::VideoAsyncScanRequest& request) const;
			ImageAsyncScanResultsOutcome imageAsyncScanResults(const Model::ImageAsyncScanResultsRequest &request)const;
			void imageAsyncScanResultsAsync(const Model::ImageAsyncScanResultsRequest& request, const ImageAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageAsyncScanResultsOutcomeCallable imageAsyncScanResultsCallable(const Model::ImageAsyncScanResultsRequest& request) const;
			VoiceAsyncScanResultsOutcome voiceAsyncScanResults(const Model::VoiceAsyncScanResultsRequest &request)const;
			void voiceAsyncScanResultsAsync(const Model::VoiceAsyncScanResultsRequest& request, const VoiceAsyncScanResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanResultsOutcomeCallable voiceAsyncScanResultsCallable(const Model::VoiceAsyncScanResultsRequest& request) const;
			GetFacesOutcome getFaces(const Model::GetFacesRequest &request)const;
			void getFacesAsync(const Model::GetFacesRequest& request, const GetFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetFacesOutcomeCallable getFacesCallable(const Model::GetFacesRequest& request) const;
			VoiceAsyncScanOutcome voiceAsyncScan(const Model::VoiceAsyncScanRequest &request)const;
			void voiceAsyncScanAsync(const Model::VoiceAsyncScanRequest& request, const VoiceAsyncScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceAsyncScanOutcomeCallable voiceAsyncScanCallable(const Model::VoiceAsyncScanRequest& request) const;
			VoiceCancelScanOutcome voiceCancelScan(const Model::VoiceCancelScanRequest &request)const;
			void voiceCancelScanAsync(const Model::VoiceCancelScanRequest& request, const VoiceCancelScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceCancelScanOutcomeCallable voiceCancelScanCallable(const Model::VoiceCancelScanRequest& request) const;
			GetGroupsOutcome getGroups(const Model::GetGroupsRequest &request)const;
			void getGroupsAsync(const Model::GetGroupsRequest& request, const GetGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetGroupsOutcomeCallable getGroupsCallable(const Model::GetGroupsRequest& request) const;
			TextScanOutcome textScan(const Model::TextScanRequest &request)const;
			void textScanAsync(const Model::TextScanRequest& request, const TextScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			TextScanOutcomeCallable textScanCallable(const Model::TextScanRequest& request) const;
			VoiceIdentityRegisterOutcome voiceIdentityRegister(const Model::VoiceIdentityRegisterRequest &request)const;
			void voiceIdentityRegisterAsync(const Model::VoiceIdentityRegisterRequest& request, const VoiceIdentityRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityRegisterOutcomeCallable voiceIdentityRegisterCallable(const Model::VoiceIdentityRegisterRequest& request) const;
			ImageScanFeedbackOutcome imageScanFeedback(const Model::ImageScanFeedbackRequest &request)const;
			void imageScanFeedbackAsync(const Model::ImageScanFeedbackRequest& request, const ImageScanFeedbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			ImageScanFeedbackOutcomeCallable imageScanFeedbackCallable(const Model::ImageScanFeedbackRequest& request) const;
			VoiceIdentityStartRegisterOutcome voiceIdentityStartRegister(const Model::VoiceIdentityStartRegisterRequest &request)const;
			void voiceIdentityStartRegisterAsync(const Model::VoiceIdentityStartRegisterRequest& request, const VoiceIdentityStartRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityStartRegisterOutcomeCallable voiceIdentityStartRegisterCallable(const Model::VoiceIdentityStartRegisterRequest& request) const;
			DeleteSimilarityImageOutcome deleteSimilarityImage(const Model::DeleteSimilarityImageRequest &request)const;
			void deleteSimilarityImageAsync(const Model::DeleteSimilarityImageRequest& request, const DeleteSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteSimilarityImageOutcomeCallable deleteSimilarityImageCallable(const Model::DeleteSimilarityImageRequest& request) const;
			SearchPersonOutcome searchPerson(const Model::SearchPersonRequest &request)const;
			void searchPersonAsync(const Model::SearchPersonRequest& request, const SearchPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			SearchPersonOutcomeCallable searchPersonCallable(const Model::SearchPersonRequest& request) const;
			GetAddVideoDnaResultsOutcome getAddVideoDnaResults(const Model::GetAddVideoDnaResultsRequest &request)const;
			void getAddVideoDnaResultsAsync(const Model::GetAddVideoDnaResultsRequest& request, const GetAddVideoDnaResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetAddVideoDnaResultsOutcomeCallable getAddVideoDnaResultsCallable(const Model::GetAddVideoDnaResultsRequest& request) const;
			AddPersonOutcome addPerson(const Model::AddPersonRequest &request)const;
			void addPersonAsync(const Model::AddPersonRequest& request, const AddPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddPersonOutcomeCallable addPersonCallable(const Model::AddPersonRequest& request) const;
			AddFacesOutcome addFaces(const Model::AddFacesRequest &request)const;
			void addFacesAsync(const Model::AddFacesRequest& request, const AddFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddFacesOutcomeCallable addFacesCallable(const Model::AddFacesRequest& request) const;
			AddSimilarityImageOutcome addSimilarityImage(const Model::AddSimilarityImageRequest &request)const;
			void addSimilarityImageAsync(const Model::AddSimilarityImageRequest& request, const AddSimilarityImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			AddSimilarityImageOutcomeCallable addSimilarityImageCallable(const Model::AddSimilarityImageRequest& request) const;
			VoiceIdentityUnregisterOutcome voiceIdentityUnregister(const Model::VoiceIdentityUnregisterRequest &request)const;
			void voiceIdentityUnregisterAsync(const Model::VoiceIdentityUnregisterRequest& request, const VoiceIdentityUnregisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			VoiceIdentityUnregisterOutcomeCallable voiceIdentityUnregisterCallable(const Model::VoiceIdentityUnregisterRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_GREEN_GREENCLIENT_H_
