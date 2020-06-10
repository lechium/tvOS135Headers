/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSObject;

@interface AVCEffects : NSObject {

	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _avConferenceEffectsQueue;
	int _mode;
	BOOL _isEffectsApplied;
	BOOL _isFaceMeshTrackingEnabled;
	int _effectType;

}

@property (assign,nonatomic) id<AVCEffectsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int effectType;                               //@synthesize effectType=_effectType - In the implementation block
-(void)dealloc;
-(id<AVCEffectsDelegate>)delegate;
-(void)setDelegate:(id<AVCEffectsDelegate>)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)initWithDelegate:(id)arg1 ;
-(int)effectType;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)avcVideoFrameDidRelease:(id)arg1 ;
-(void)setEffectType:(int)arg1 ;
-(void)encodeProcessedVideoFrame:(id)arg1 ;
@end

