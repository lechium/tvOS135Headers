/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVEnvironment : NSObject
+(id)versionInfo;
+(BOOL)PVLogPMRUseOsLog;
+(BOOL)PVLogPMRFrameStatsToDisk;
+(BOOL)PV_DEBUG_COLOR_NO_SOURCE_TRACK_NODE;
+(BOOL)PV_CLAMP_XR_INPUTS_TO_FILTERS;
+(BOOL)PV_DEBUG_COLOR_OUT_OF_RANGE_EFFECTS;
+(int)PV_TEXTURE_BORDER_WIDTH;
+(void)Initialize;
+(BOOL)PV_DISABLE_PROXY_RENDERING;
+(BOOL)PV_DISABLE_TIMELINE_SCROLLING;
+(BOOL)PV_DISABLE_YCBCR_INPUTS;
+(int)PV_PERF_STATS_LOG_LEVEL;
+(int)PV_TEXTURE_POOL_SIZE_MB;
+(float)PV_TEXTURE_POOL_FINISH_SIZE_RATIO;
+(unsigned)PV_TEXTURE_CLUSTER_PADDING_REMEMBRANCE;
+(unsigned)PV_TEXTURE_CLUSTER_PADDING_CUSHIONING;
+(unsigned)PV_TEXTURE_CLUSTER_PADDING_CLUMPING;
+(BOOL)PV_ENABLE_CHECK_PASSTHRUS;
+(BOOL)PV_MULTI_SOURCE_PLAYBACK_FPS;
+(int)PV_NUM_RENDER_PASSES;
+(int)PV_RENDER_PASS_TEST_TYPE;
+(BOOL)PV_ENABLE_420V_OUTPUT;
+(BOOL)PV_ENABLE_BGRA_OUTPUT_EXPORT;
+(int)PV_RENDER_THREAD_PRIORITY;
+(BOOL)PV_SERIALIZE_EXPORT_REQUESTS;
+(unsigned)PV_THROTTLE_AVF_EXPORT_REQUEST_HANDLING_MS;
+(BOOL)PV_THROTTLE_EXPORT_ON_MEM_WARNING;
+(BOOL)PV_ENABLE_ENV_LOGS;
+(unsigned)PV_MAX_EXPECTED_LIVE_COMPOSITORS;
+(BOOL)PV_HIGHLIGHT_OUT_OF_GAMUT;
+(unsigned)PV_HG_POOL_OBSERVER_INTERVAL;
+(unsigned)PV_METAL_COMMAND_Q_COMMAND_BUFFER_COUNT_MIN;
+(unsigned)PV_METAL_COMMAND_Q_COMMAND_BUFFER_COUNT_MAX;
+(unsigned)PV_METAL_COMMAND_Q_MEM_USAGE;
+(float)PVExportPrefilterValue;
@end

