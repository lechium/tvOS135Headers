/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiverKit.framework/AirPlayReceiverKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, APRKStreamRenderingManagerDelegate;
#import <AirPlayReceiverKit/AirPlayReceiverKit-Structs.h>
@class NSMutableOrderedSet, NSObject;

@interface APRKStreamRenderingManager : NSObject {

	AirPlayReceiverServerPrivateRef _server;
	NSMutableOrderedSet* _renderersSet;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	BOOL _useCALayerForMirroring;
	CGSize _customDisplaySize;
	unsigned long long _airPlayVideoVersionSupport;
	id<APRKStreamRenderingManagerDelegate> _delegate;
	unsigned long long _supportedModesMask;

}

@property (assign,nonatomic,__weak) id<APRKStreamRenderingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedModesMask;                             //@synthesize supportedModesMask=_supportedModesMask - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<APRKStreamRenderingManagerDelegate>)delegate;
-(void)setDelegate:(id<APRKStreamRenderingManagerDelegate>)arg1 ;
-(void)setDelegateQueue:(id)arg1 ;
-(id)delegateQueue;
-(id)allRenderers;
-(int)_startReceiverServerWithSupportedModesMask:(unsigned long long)arg1 ;
-(id)_rendererForUniqueIDInternal:(id)arg1 ;
-(CGSize)_customDisplaySizeFromPrefsWithDefault:(CGSize)arg1 ;
-(void)setAirPlayVideoVersionSupport:(unsigned long long)arg1 ;
-(int)startReceiverServer;
-(int)startReceiverServerWithSupportedRenderingModes:(unsigned long long)arg1 ;
-(int)stopReceiverServer;
-(id)rendererForUniqueID:(id)arg1 ;
-(unsigned long long)activeRenderersCount;
-(id)allClientNames;
-(id)createStreamRendererWithUniqueID:(id)arg1 clientName:(id)arg2 UIController:(OpaqueAPReceiverUIControllerRef)arg3 ;
-(void)removeRendererWithUniqueID:(id)arg1 ;
-(void)setUseCALayerForMirroring:(BOOL)arg1 ;
-(BOOL)useCALayerForMirroring;
-(void)setCustomDisplaySize:(CGSize)arg1 ;
-(void)processShowGlobalPasscodePromptRequest:(id)arg1 withClientName:(id)arg2 ;
-(void)processHideGlobalPasscodePromptRequest;
-(unsigned long long)airPlayVideoVersionSupport;
-(void)setDemoModeEnabled:(BOOL)arg1 ;
-(BOOL)demoModeEnabled;
-(void)_setPTPClockEnabled:(BOOL)arg1 ;
-(unsigned long long)supportedModesMask;
@end
