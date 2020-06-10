/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PBSPictureInPictureDelegateServiceInterface.h>

@protocol OS_dispatch_queue, PBSPictureInPicturePlaybackDelegate;
@class PBSPictureInPictureServiceProxy, NSObject, NSHashTable, PBSPictureInPictureState, NSString;

@interface PBSPictureInPictureController : NSObject <PBSPictureInPictureDelegateServiceInterface> {

	PBSPictureInPictureServiceProxy* _serviceProxy;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	PBSPictureInPictureState* _currentState;
	id<PBSPictureInPicturePlaybackDelegate> _playbackDelegate;

}

@property (nonatomic,readonly) PBSPictureInPictureServiceProxy * serviceProxy;                             //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                                   //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> observerQueue;                                 //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                                    //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) PBSPictureInPictureState * currentState;                                      //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic,__weak) id<PBSPictureInPicturePlaybackDelegate> playbackDelegate;              //@synthesize playbackDelegate=_playbackDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(PBSPictureInPictureState *)currentState;
-(void)setCurrentState:(PBSPictureInPictureState *)arg1 ;
-(id<PBSPictureInPicturePlaybackDelegate>)playbackDelegate;
-(void)setPlaybackDelegate:(id<PBSPictureInPicturePlaybackDelegate>)arg1 ;
-(NSHashTable *)observers;
-(PBSPictureInPictureServiceProxy *)serviceProxy;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)cancelPictureInPicture;
-(void)setPictureInPictureAvoidanceInsets:(id)arg1 usingIdentifier:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)applyPictureInPictureInsetsValue:(id)arg1 fromSource:(id)arg2 withAnimationSettings:(id)arg3 usingAnimationFence:(id)arg4 ;
-(void)mutePictureInPicture:(BOOL)arg1 ;
-(void)_configureRemoteProxy:(id)arg1 ;
-(void)_notifyObserversPictureInPictureShouldMute:(BOOL)arg1 ;
-(void)_handleStateChange:(id)arg1 error:(id)arg2 ;
-(void)pictureInPictureServiceDidUpdateState:(id)arg1 ;
-(void)pictureInPictureService:(id)arg1 didRequestMute:(BOOL)arg2 ;
-(void)pictureInPictureService:(id)arg1 didSendPlaybackCommand:(unsigned long long)arg2 ;
@end
