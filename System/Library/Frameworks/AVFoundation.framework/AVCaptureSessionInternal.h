/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, AVCaptureDevice, FigCaptureSessionConfiguration, NSMutableArray, NSHashTable, AVCaptureSessionConfiguration, NSError, AVRunLoopCondition, NSObject;

@interface AVCaptureSessionInternal : NSObject {

	AVWeakReference* weakReference;
	NSString* sessionPreset;
	AVCaptureDevice* adjustingDeviceActiveFormat;
	int beginConfigRefCount;
	FigCaptureSessionConfiguration* sessionConfig;
	OpaqueFigCaptureSessionRef figCaptureSession;
	BOOL figCaptureSessionRunning;
	BOOL figCaptureSessionStarted;
	NSMutableArray* inputs;
	NSMutableArray* outputs;
	NSHashTable* videoPreviewLayers;
	NSMutableArray* connections;
	NSMutableArray* committedAVCaptureSessionConfigurations;
	AVCaptureSessionConfiguration* liveAVCaptureSessionConfiguration;
	NSError* stopError;
	BOOL running;
	BOOL interrupted;
	BOOL usesApplicationAudioSession;
	BOOL automaticallyConfiguresApplicationAudioSession;
	BOOL automaticallyConfiguresCaptureDeviceForWideColor;
	AVRunLoopCondition* runLoopCondition;
	BOOL waitingForFigCaptureSessionToStart;
	BOOL waitingForFigCaptureSessionToStop;
	BOOL waitingForFigCaptureSessionConfigurationToBecomeLive;
	OpaqueCMClockRef masterClock;
	BOOL notifiesOnMainThread;
	BOOL adjustingVideoDeviceHDREnabled;
	NSMutableArray* devicesToResetVideoZoomFactorAndMinMaxFrameDurations;
	BOOL authorizedToUseCameraInMultipleForegroundAppLayout;
	NSObject*<OS_dispatch_semaphore> serverConnectionDiedSemaphore;
	id serverConnectionDiedNotificationToken;

}
@end

