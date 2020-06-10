/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPauseManagerDelegate;
@class NSMutableDictionary;

@interface MSPauseManager : NSObject {

	NSMutableDictionary* _UUIDToTimerMap;
	id<MSPauseManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPauseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id<MSPauseManagerDelegate>)delegate;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)_addPauseUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
@end

