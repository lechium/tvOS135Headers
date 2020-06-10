#import <Celestial/BWAudioFileSinkNode.h>
#import <Celestial/BWBoxedOutputDetectionTimingInfo.h>
#import <Celestial/BWFaceDetectionNode.h>
#import <Celestial/BWPreviewTimeMachineSinkNode.h>
#import <Celestial/BWSynchronizedStreamsGroup.h>
#import <Celestial/BWAttachedMediaSwapNode.h>
#import <Celestial/BWVideoProcessingInferenceProvider.h>
#import <Celestial/BWInferenceRequirement.h>
#import <Celestial/FigIrisAutoTrimmerMotionSample.h>
#import <Celestial/BWStillImageCaptureStreamFrameCounts.h>
#import <Celestial/BWStillImageTimeMachineFrameCoordinatorNode.h>
#import <Celestial/BWBracketSettings.h>
#import <Celestial/BWStillImageMetalSDOFRenderer.h>
#import <Celestial/BWSpringSimulation.h>
#import <Celestial/FigCaptureStillImageSettings.h>
#import <Celestial/FigCaptureIrisStillImageSettings.h>
#import <Celestial/FigCaptureIrisPreparedSettings.h>
#import <Celestial/BWDepthRotatorNode.h>
#import <Celestial/BWSphereModeSelector.h>
#import <Celestial/FigWiredMemory.h>
#import <Celestial/FigCapturePointCloudDataSinkPipeline.h>
#import <Celestial/FigCaptureSessionParsedCameraSourceConfiguration.h>
#import <Celestial/FigCaptureSessionParsedMicSourceConfiguration.h>
#import <Celestial/FigCaptureSessionParsedPreviewSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedStillImageSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedVideoDataSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedVisionDataSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedDepthDataSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedMetadataSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedMovieFileSinkConfiguration.h>
#import <Celestial/FigCaptureSessionParsedConfiguration.h>
#import <Celestial/BWStreamingCameraCalibrationDataNode.h>
#import <Celestial/FigUtlROIProcessor.h>
#import <Celestial/FigCaptureAPSSphereInteractionCalibrationContext.h>
#import <Celestial/BWSensorConfiguration.h>
#import <Celestial/BWParallelSplitterNode.h>
#import <Celestial/BWPortraitHDRStagingNode.h>
#import <Celestial/BWMeaningfulSubjectTrackingContext.h>
#import <Celestial/BWCoreImageFilterRenderer.h>
#import <Celestial/FigCaptureVISPipeline.h>
#import <Celestial/FigCaptureSystemPressureMonitor.h>
#import <Celestial/BWStillImageScalerNode.h>
#import <Celestial/FigCapturePowerMonitor.h>
#import <Celestial/BWInferenceLazyVideoRequirement.h>
#import <Celestial/FigCaptureSessionServerKeyedUnarchiverDelegate.h>
#import <Celestial/BWAttachedMediaSplitNode.h>
#import <Celestial/BWNodeInput.h>
#import <Celestial/BWNodeInputMediaConfiguration.h>
#import <Celestial/BWNodeInputMediaProperties.h>
#import <Celestial/BWCameraCalibrationDataFormat.h>
#import <Celestial/BWOverCaptureAttachedMediaSplitNode.h>
#import <Celestial/AVFromMainThreadPostNotificationNameDict.h>
#import <Celestial/AVFromNotifySafeThreadPostNotificationNameDict.h>
#import <Celestial/AVSafePostDelayedNotificationFromMainThreadTargetDict.h>
#import <Celestial/AVSafePerformOnMainThreadTargetDict.h>
#import <Celestial/AVValue.h>
#import <Celestial/AVObjectRegistry.h>
#import <Celestial/BWFigCaptureDeviceClient.h>
#import <Celestial/BWFigCaptureDeviceVendor.h>
#import <Celestial/BWSimpleCache.h>
#import <Celestial/BWIrisStillImageMovieMetadataCache.h>
#import <Celestial/BWUBCaptureParameters.h>
#import <Celestial/BWUBNode.h>
#import <Celestial/BWIrisMovieInfo.h>
#import <Celestial/BWMattingInferenceProvider.h>
#import <Celestial/AVFileProcessor.h>
#import <Celestial/BWStillImageTurnstileNode.h>
#import <Celestial/BWInferenceScalingRequirement.h>
#import <Celestial/FigCaptureVideoDataSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureVideoDataSinkPipeline.h>
#import <Celestial/BWVisionLandmarkDetector.h>
#import <Celestial/FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory.h>
#import <Celestial/FigCaptureAutoFocusPositionSensorCalibrationContext.h>
#import <Celestial/BWVideoStitcherNode.h>
#import <Celestial/CMMTLComputePipelineState.h>
#import <Celestial/CMMTLRenderPipelineState.h>
#import <Celestial/CMMTLCommandQueue.h>
#import <Celestial/CMMTLCommandBuffer.h>
#import <Celestial/CMMTLComputeCommandEncoder.h>
#import <Celestial/CMMTLRenderCommandEncoder.h>
#import <Celestial/BWNodeOutput.h>
#import <Celestial/BWNodeOutputMediaConfiguration.h>
#import <Celestial/BWNodeOutputMediaProperties.h>
#import <Celestial/BWInferenceSingleBufferPoolProvider.h>
#import <Celestial/BWCaptureDeferredPhotoProcessor.h>
#import <Celestial/BWFrameStatistics.h>
#import <Celestial/BWFrameStatisticsByPortType.h>
#import <Celestial/FigCaptureSphereCalibrationContext.h>
#import <Celestial/BWSlaveFrameSynchronizerNode.h>
#import <Celestial/BWRenderListProcessor.h>
#import <Celestial/BWMonochromeEffectNode.h>
#import <Celestial/FigMetalContext.h>
#import <Celestial/BWOverCaptureFanOutNode.h>
#import <Celestial/BWHDRNode.h>
#import <Celestial/BWStreamingFilterNode.h>
#import <Celestial/BWEspressoInferenceContext.h>
#import <Celestial/FigCaptureSessionActiveCameraCaptureSource.h>
#import <Celestial/BWFigCaptureSession.h>
#import <Celestial/BWDeepFusionProcessorInput.h>
#import <Celestial/BWDeepFusionProcessorRequest.h>
#import <Celestial/BWDeepFusionProcessorControllerConfiguration.h>
#import <Celestial/BWDeepFusionProcessorController.h>
#import <Celestial/BWEspressoInferenceStorage.h>
#import <Celestial/BWInferenceSchedulerJobList.h>
#import <Celestial/AVSystemController.h>
#import <Celestial/BWAudioSourceNode.h>
#import <Celestial/BWPixelTransferNode.h>
#import <Celestial/BWStillImageSettings.h>
#import <Celestial/BWAdaptiveBracketingFrameParameters.h>
#import <Celestial/BWDepthSynchronizerNode.h>
#import <Celestial/BWIntermediateJPEGCompressor.h>
#import <Celestial/BWInferenceSchedulerScaler.h>
#import <Celestial/BWDepthConverterNode.h>
#import <Celestial/BWStreamingCVAFilterRenderer.h>
#import <Celestial/FigCaptureDisplayLayoutMonitor.h>
#import <Celestial/BWRingBuffer.h>
#import <Celestial/BWMotionSampleRingBuffer.h>
#import <Celestial/BWDeviceMotionActivityDetector.h>
#import <Celestial/BWRedEyeReducerNode.h>
#import <Celestial/BWMetadataSourceNode.h>
#import <Celestial/BWFigVideoCaptureStream.h>
#import <Celestial/BWUBAdaptiveBracketingParameters.h>
#import <Celestial/BWUBProcessorInput.h>
#import <Celestial/BWUBSemanticRenderingInput.h>
#import <Celestial/BWUBProcessorRequest.h>
#import <Celestial/BWUBProcessorControllerConfiguration.h>
#import <Celestial/BWUBProcessorController.h>
#import <Celestial/FigCaptureMetadataSourcePipeline.h>
#import <Celestial/BWVideoProcessingInferenceAdapter.h>
#import <Celestial/FigCaptureCameraSourcePipelineConfiguration.h>
#import <Celestial/FigCaptureCameraSourcePipeline.h>
#import <Celestial/BWLandmarksInferenceConfiguration.h>
#import <Celestial/BWParallelJoinerNode.h>
#import <Celestial/BWSinkNode.h>
#import <Celestial/BWStillImageMetalBlurMapRenderer.h>
#import <Celestial/BWInferenceProviderStorage.h>
#import <Celestial/BWStreamingCVAFilterRendererParameters.h>
#import <Celestial/FigCaptureSessionConfiguration.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>
#import <Celestial/FigVideoCaptureConnectionConfiguration.h>
#import <Celestial/FigAudioCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataObjectCaptureConnectionConfiguration.h>
#import <Celestial/FigMetadataItemCaptureConnectionConfiguration.h>
#import <Celestial/FigDepthDataCaptureConnectionConfiguration.h>
#import <Celestial/FigVisionDataCaptureConnectionConfiguration.h>
#import <Celestial/FigPointCloudDataCaptureConnectionConfiguration.h>
#import <Celestial/FigCameraCalibrationDataCaptureConnectionConfiguration.h>
#import <Celestial/FigCaptureSourceConfiguration.h>
#import <Celestial/FigCaptureSinkConfiguration.h>
#import <Celestial/FigCaptureVideoPreviewSinkConfiguration.h>
#import <Celestial/FigCaptureVideoThumbnailSinkConfiguration.h>
#import <Celestial/FigCaptureAudioPreviewSinkConfiguration.h>
#import <Celestial/FigCaptureStillImageSinkConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkConfiguration.h>
#import <Celestial/FigCaptureAudioFileSinkConfiguration.h>
#import <Celestial/FigCaptureVideoDataSinkConfiguration.h>
#import <Celestial/FigCaptureAudioDataSinkConfiguration.h>
#import <Celestial/FigCaptureMetadataObjectSinkConfiguration.h>
#import <Celestial/FigCaptureMetadataItemGroupSinkConfiguration.h>
#import <Celestial/FigCaptureInternalSinkConfiguration.h>
#import <Celestial/FigCapturePointCloudDataSinkConfiguration.h>
#import <Celestial/FigCaptureIrisSinkConfiguration.h>
#import <Celestial/FigCaptureDepthDataSinkConfiguration.h>
#import <Celestial/FigCaptureVisionDataSinkConfiguration.h>
#import <Celestial/FigCaptureCameraCalibrationDataSinkConfiguration.h>
#import <Celestial/FigCaptureSessionConfigurationKeyedUnarchiverDelegate.h>
#import <Celestial/BWStillImageCaptureDelegateCallbackInfo.h>
#import <Celestial/BWStillImageCoordinatorNode.h>
#import <Celestial/BWBravoStreamSelector.h>
#import <Celestial/BWMeaningfulSubjectTracker.h>
#import <Celestial/BWBackPressureNode.h>
#import <Celestial/BWStillImageMultiCameraDoserNode.h>
#import <Celestial/BWFileCoordinatorNode.h>
#import <Celestial/FigCaptureThermalMonitor.h>
#import <Celestial/BWIrisDiscontinuity.h>
#import <Celestial/BWIrisSequenceAdjuster.h>
#import <Celestial/FigStateMachine.h>
#import <Celestial/BWSISNode.h>
#import <Celestial/BWCoreMotionMetadataSourceNode.h>
#import <Celestial/BWInferenceCloneVideoRequirement.h>
#import <Celestial/BWDeferredProcessingSourceNode.h>
#import <Celestial/BWMeaningfulSubjectDetectionContext.h>
#import <Celestial/BWCameraParameters.h>
#import <Celestial/BWBravoPortraitSceneMonitor.h>
#import <Celestial/BWObjectRingBuffer.h>
#import <Celestial/BWObjectRingBufferThreadSafe.h>
#import <Celestial/BWAutoFocusPositionSensorMonitor.h>
#import <Celestial/BWMeaningfulSubjectTrackingNode.h>
#import <Celestial/BWMattingV2InferenceConfiguration.h>
#import <Celestial/BWInferenceResult.h>
#import <Celestial/BWBravoPortraitSceneMonitorV2.h>
#import <Celestial/BWPointCloudFormatRequirements.h>
#import <Celestial/BWPointCloudFormat.h>
#import <Celestial/FigCaptureAutoFocusCalibrationContext.h>
#import <Celestial/BWStillImageTimeMachine.h>
#import <Celestial/BWIrisStagingNode.h>
#import <Celestial/BWDeferredProcessorControllerInput.h>
#import <Celestial/BWDeferredProcessorRequest.h>
#import <Celestial/BWDeferredProcessorController.h>
#import <Celestial/FigStillImageSharedProcessingResources.h>
#import <Celestial/BWPixelBufferPool.h>
#import <Celestial/BWNoiseReducerNode.h>
#import <Celestial/BWZoomCommandHandler.h>
#import <Celestial/BWZoomDelayBuffer.h>
#import <Celestial/BWZoomRange.h>
#import <Celestial/FigCaptureCalibrationMonitor.h>
#import <Celestial/BWCameraInfoMetadataNode.h>
#import <Celestial/FigCaptureMovieFileSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkHeadPipelineConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkHeadPipeline.h>
#import <Celestial/FigCaptureMovieFileSinkMiddlePipelineConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkMiddlePipeline.h>
#import <Celestial/FigCaptureMovieFileSinkTailPipelineConfiguration.h>
#import <Celestial/FigCaptureMovieFileSinkTailPipeline.h>
#import <Celestial/FigCaptureMovieFileSinkPipeline.h>
#import <Celestial/FigCameraViewfinder.h>
#import <Celestial/FigCameraViewfinderSession.h>
#import <Celestial/BWRedEyeReductionControllerInput.h>
#import <Celestial/BWRedEyeReductionRequest.h>
#import <Celestial/BWRedEyeReductionController.h>
#import <Celestial/FigCaptureRecordingSettings.h>
#import <Celestial/FigCaptureMovieFileRecordingSettings.h>
#import <Celestial/FigCaptureAudioFileRecordingSettings.h>
#import <Celestial/BWStillImageDisparitySplitterNode.h>
#import <Celestial/BWColorLookupCacheEntry.h>
#import <Celestial/BWPersonSemanticsConfiguration.h>
#import <Celestial/BWPhotoDecompressorNode.h>
#import <Celestial/FigCaptureSessionMovieFileSinkPipeline.h>
#import <Celestial/FigCaptureSessionPreviewSinkPipeline.h>
#import <Celestial/FigCaptureSessionPreparedBracket.h>
#import <Celestial/FigCaptureStillImageSinkPipelineSessionStorage.h>
#import <Celestial/FigCaptureSessionPipelines.h>
#import <Celestial/BWImageQueueSinkNode.h>
#import <Celestial/BWFormatRequirements.h>
#import <Celestial/BWFormat.h>
#import <Celestial/BWAudioConverterNode.h>
#import <Celestial/BWInferenceScheduler.h>
#import <Celestial/BWNodeEnumerator.h>
#import <Celestial/BWDepthFirstEnumerator.h>
#import <Celestial/BWReverseDepthFirstEnumerator.h>
#import <Celestial/BWBreadthFirstEnumerator.h>
#import <Celestial/BWReverseBreadthFirstEnumerator.h>
#import <Celestial/BWInferenceSchedulerGraphInputNode.h>
#import <Celestial/BWMotionDataPreserver.h>
#import <Celestial/BWVideoDefringingNode.h>
#import <Celestial/BWMRCNode.h>
#import <Celestial/BWCoreImageFilterRendererParameters.h>
#import <Celestial/BWFrameRateGovernorNode.h>
#import <Celestial/BWPersonSegmentationConfiguration.h>
#import <Celestial/BWStillImageBufferRouterNode.h>
#import <Celestial/BWDeferredContainerBase.h>
#import <Celestial/BWDeferredCaptureContainer.h>
#import <Celestial/BWDeferredProcessingContainer.h>
#import <Celestial/BWMemoryPool.h>
#import <Celestial/BWStillImageConditionalRouterConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterLandmarksConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterPersonSegmentationAndMattingConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterUBConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterOverCaptureConfiguration.h>
#import <Celestial/BWStillImageConditionalRouterNode.h>
#import <Celestial/BWCoreAnalyticsReporter.h>
#import <Celestial/BWStillImageCaptureAnalyticsPayload.h>
#import <Celestial/BWMovieFileOutputAnalyticsPayload.h>
#import <Celestial/BWIOSurfaceCompressionStatisticsAnalyticsPayload.h>
#import <Celestial/BWStreamingSessionAnalyticsPayload.h>
#import <Celestial/BWStartupCalibrationAnalyticsPayload.h>
#import <Celestial/BWDeferredCaptureAnalyticsPayload.h>
#import <Celestial/BWDeferredProcessingAnalyticsPayload.h>
#import <Celestial/BWLivePhotoMovieAnalyticsPayload.h>
#import <Celestial/BWInferenceBufferingNode.h>
#import <Celestial/BWInferenceResultRingBuffers.h>
#import <Celestial/BWVideoProcessingInferenceStorage.h>
#import <Celestial/FigIrisAutoTrimmer.h>
#import <Celestial/FigM2MController.h>
#import <Celestial/BWMotionAttachmentsNode.h>
#import <Celestial/FigCaptureCalibrationContext.h>
#import <Celestial/BWSceneClassifierSinkNode.h>
#import <Celestial/BWMultiStreamCameraSourceNode.h>
#import <Celestial/BWInferenceVideoFormatRequirements.h>
#import <Celestial/BWInferenceVideoFormat.h>
#import <Celestial/BWAggdDataReporter.h>
#import <Celestial/FigCoreMotionDelegate.h>
#import <Celestial/FigCaptureDepthDataPipelineConfiguration.h>
#import <Celestial/FigCaptureDepthDataPipeline.h>
#import <Celestial/BWRemoteQueueSinkNode.h>
#import <Celestial/FigCaptureAudioFileSinkPipeline.h>
#import <Celestial/BWUBInferenceControllerConfiguration.h>
#import <Celestial/BWUBInferenceControllerInput.h>
#import <Celestial/BWUBInferenceController.h>
#import <Celestial/FigCaptureAudioDataSinkPipeline.h>
#import <Celestial/BWDroppedSample.h>
#import <Celestial/BWMotionDataTimeMachine.h>
#import <Celestial/BWTrackedFace.h>
#import <Celestial/BWSingleCameraPortraitSceneMonitor.h>
#import <Celestial/FigCaptureMetadataSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureMetadataSinkPipeline.h>
#import <Celestial/FigCameraViewfinderLocal.h>
#import <Celestial/FigCameraViewfinderSessionLocal.h>
#import <Celestial/BWMetadataObjectFormat.h>
#import <Celestial/BWIrisMovieInfoAndCallback.h>
#import <Celestial/BWIrisMovieGenerator.h>
#import <Celestial/FigCaptureMicSourcePipelineConfiguration.h>
#import <Celestial/FigCaptureMicSourcePipeline.h>
#import <Celestial/BWInferenceDataDependency.h>
#import <Celestial/FigCaptureSourceFormat.h>
#import <Celestial/FigCaptureSourceVideoFormat.h>
#import <Celestial/FigCaptureSourceDepthDataFormat.h>
#import <Celestial/FigCaptureSourceCompanionFormat.h>
#import <Celestial/BWNodeConnection.h>
#import <Celestial/BWInferenceSchedulerResourceCoordinator.h>
#import <Celestial/FigBWNodeRenderObserver.h>
#import <Celestial/FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureStillImageUnifiedBracketingSinkPipeline.h>
#import <Celestial/BWMattingInferenceConfiguration.h>
#import <Celestial/FigCaptureImageMotionDetector.h>
#import <Celestial/BWMetalColorCubeRenderer.h>
#import <Celestial/BWStreamingCVAFilterRendererAnimator.h>
#import <Celestial/FigIOSurfaceData.h>
#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>
#import <Celestial/BWInferenceNode.h>
#import <Celestial/BWDeferredContainerPixelBufferWrapper.h>
#import <Celestial/BWDeferredContainerPixelBufferPoolWrapper.h>
#import <Celestial/BWDeferredContainerManagerBase.h>
#import <Celestial/BWDeferredCaptureContainerManager.h>
#import <Celestial/BWDeferredProcessingContainerManager.h>
#import <Celestial/BWFanOutNode.h>
#import <Celestial/BWVideoOrientationMetadataNode.h>
#import <Celestial/BWStillImagePortraitMetadataNode.h>
#import <Celestial/FigCaptureSphereEndStopCalibrationContext.h>
#import <Celestial/BWSourceNode.h>
#import <Celestial/BWInferenceMediaRequirement.h>
#import <Celestial/BWStreamStartStopState.h>
#import <Celestial/BWStreamStartStopSynchronizer.h>
#import <Celestial/BWInferenceSchedulerFramebufferBuilder.h>
#import <Celestial/BWFaceTrackingNode.h>
#import <Celestial/BWDeferredMetadataCache.h>
#import <Celestial/BWDetectedFacesRingBuffer.h>
#import <Celestial/BWDetectedObjectsInfoRingBuffer.h>
#import <Celestial/BWPhotoManifest.h>
#import <Celestial/BWPhotoDescriptor.h>
#import <Celestial/BWStillImageProcessingSettings.h>
#import <Celestial/BWInferenceSchedulerGraph.h>
#import <Celestial/FigCaptureSourceStreamsContainer.h>
#import <Celestial/BWStillImageCaptureSettings.h>
#import <Celestial/BWStillImageCaptureStreamSettings.h>
#import <Celestial/BWStillImageCaptureMetadata.h>
#import <Celestial/BWSceneClassifierFrameGateNode.h>
#import <Celestial/BWInferenceMetadataRequirement.h>
#import <Celestial/BWFileSinkNode.h>
#import <Celestial/BWPearlPortraitSceneMonitor.h>
#import <Celestial/BWImageControlModeTransitionMonitor.h>
#import <Celestial/BWStats.h>
#import <Celestial/BWMovingWindowStats.h>
#import <Celestial/BWLimitedGMErrorLogger.h>
#import <Celestial/BWVideoQualityMetrics.h>
#import <Celestial/BWPreviewStitcherNode.h>
#import <Celestial/BWMeteorHeadroomNode.h>
#import <Celestial/FigCameraUsageListener.h>
#import <Celestial/FigCaptureClientSessionMonitor.h>
#import <Celestial/FigCapturePixelConverter.h>
#import <Celestial/BWRenderList.h>
#import <Celestial/BWVariableFramerateSelector.h>
#import <Celestial/BWColorLookupCache.h>
#import <Celestial/BWMultiFilterThumbnailNode.h>
#import <Celestial/BWInferenceDepthScalingProvider.h>
#import <Celestial/BWRGBPersonSegmentationInferenceConfiguration.h>
#import <Celestial/BWInferenceVideoScalingProvider.h>
#import <Celestial/FigCaptureSessionObservatory.h>
#import <Celestial/FigCaptureSessionProxy.h>
#import <Celestial/BWStillImageProcessorConfiguration.h>
#import <Celestial/BWStillImageProcessorInput.h>
#import <Celestial/BWStillImageProcessorController.h>
#import <Celestial/FigCapturePipeline.h>
#import <Celestial/FigCaptureSourcePipeline.h>
#import <Celestial/FigCaptureSinkPipeline.h>
#import <Celestial/FigCaptureRemoteQueueSinkPipeline.h>
#import <Celestial/BWStillImageFilterNode.h>
#import <Celestial/BWRenderListAnimator.h>
#import <Celestial/BWRamp.h>
#import <Celestial/BWRenderListParameters.h>
#import <Celestial/BWNode.h>
#import <Celestial/BWMattingInferenceStorage.h>
#import <Celestial/BWStillImageDualPhotoFacePropagatorNode.h>
#import <Celestial/BWInferenceSchedulerFramebuffer.h>
#import <Celestial/BWVideoFormatRequirements.h>
#import <Celestial/BWVideoFormat.h>
#import <Celestial/BWStillImageSampleBufferSinkNode.h>
#import <Celestial/FigCaptureStillImageSinkPipelineConfiguration.h>
#import <Celestial/FigCaptureStillImageSinkPipeline.h>
#import <Celestial/BWPipelineStage.h>
#import <Celestial/BWInferenceDependencyProvider.h>
#import <Celestial/BWStillImageCaptureStreamFrameCounters.h>
#import <Celestial/BWStillImageFrameCoordinatorNode.h>
#import <Celestial/BWStillImageCameraCalibrationDataNode.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <Celestial/BWStillImageNodeConfiguration.h>
#import <Celestial/BWInferenceSynchronizerNode.h>
#import <Celestial/FigCaptureMachPortSendRight.h>
#import <Celestial/FigSmartcamDiagnostics.h>
#import <Celestial/BWInferenceSchedulerInference.h>
#import <Celestial/BWGNRNode.h>
#import <Celestial/BWStereoFusionNode.h>
#import <Celestial/BWDataBufferPool.h>
#import <Celestial/FigMomentCaptureSettings.h>
#import <Celestial/BWStillImageBravoDisparityNode.h>
#import <Celestial/BWStillImageOverCaptureProcessorInput.h>
#import <Celestial/BWStillImageOverCaptureProcessorRequest.h>
#import <Celestial/BWStillImageOverCaptureProcessorControllerConfiguration.h>
#import <Celestial/BWStillImageOverCaptureProcessorController.h>
#import <Celestial/FigCaptureVisionDataSinkPipeline.h>
#import <Celestial/BWPhotoEncoderNode.h>
#import <Celestial/FigNSXPCConnection.h>
#import <Celestial/FigCameraViewfinderRemote.h>
#import <Celestial/FigCameraViewfinderSessionRemote.h>
#import <Celestial/FigWeakReference.h>
#import <Celestial/FigDelegateStorage.h>
#import <Celestial/BWGraph.h>
#import <Celestial/FigCapturePreviewSinkPipelineConfiguration.h>
#import <Celestial/FigCapturePreviewSinkPipeline.h>
#import <Celestial/BWStillImageFocusPixelDisparityNode.h>
#import <Celestial/FigCameraViewfinderStream.h>
#import <Celestial/BWNodeMessage.h>
#import <Celestial/BWNodeSampleBufferMessage.h>
#import <Celestial/BWNodeConfigurationLiveMessage.h>
#import <Celestial/BWNodeEndOfDataMessage.h>
#import <Celestial/BWNodeErrorMessage.h>
#import <Celestial/BWNodeDroppedSampleMessage.h>
#import <Celestial/BWNodeIrisReferenceMovieRequestMessage.h>
#import <Celestial/BWNodeStillImageReferenceFrameBracketedCaptureSequenceNumberMessage.h>
#import <Celestial/BWNodeStillImagePrewarmMessage.h>
#import <Celestial/BWEspressoInferenceProvider.h>
#import <Celestial/BWDeferredContainerPixelBufferPool.h>
#import <Celestial/BWQuickTimeMovieFileSinkNode.h>
#import <Celestial/FigCameraViewfinderServer.h>
#import <Celestial/BWInferenceConfiguration.h>
#import <Celestial/BWMetalColorCubeRendererParameters.h>
#import <Celestial/BWFigVideoCaptureDevice.h>
#import <Celestial/BWSynchronizerNode.h>
#import <Celestial/BWMetadataFormat.h>
#import <Celestial/BWFaceSegmentsWithLandmarksInferenceConfiguration.h>
#import <Celestial/BWStillImageProcessorCoordinator.h>
#import <Celestial/FigCaptureVideoThumbnailSinkPipeline.h>
#import <Celestial/BWInferenceEngine.h>
#import <Celestial/BWVideoSDOFSplitNode.h>
#import <Celestial/BWInferenceSchedulerConnection.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <Celestial/BWMattingV2InferenceProvider.h>
#import <Celestial/BWEspressoInferenceAdapter.h>
#import <Celestial/BWStillImageStereoStitchingNode.h>
#import <Celestial/BWPhotoDecompressor.h>
#import <Celestial/FigCaptureDeferredProcessingJob.h>
#import <Celestial/FigCaptureDeferredProcessingEngine.h>
#import <Celestial/BWVideoCompressorNode.h>
#import <Celestial/FigCaptureCameraCalibrationDataSinkPipeline.h>
#import <Celestial/BWCaptureDevice.h>
#import <Celestial/FigCaptureDeferredPhotoProcessorRequest.h>
#import <Celestial/BWNodeError.h>
#import <Celestial/BWVISNode.h>
#import <Celestial/BWFunnelNode.h>
#import <Celestial/BWInferenceSimpleStorage.h>
