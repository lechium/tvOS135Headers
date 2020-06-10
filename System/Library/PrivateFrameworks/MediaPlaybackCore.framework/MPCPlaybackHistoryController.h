/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPCPlaybackEngineEventObserving.h>

@class MPCPlaybackEngine, NSOperationQueue, MPModelPlayEvent, NSString;

@interface MPCPlaybackHistoryController : NSObject <MPCPlaybackEngineEventObserving> {

	MPCPlaybackEngine* _playbackEngine;
	NSOperationQueue* _operationQueue;
	MPModelPlayEvent* _lastRecordedPlayEvent;
	long long _currentRepeatType;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * lastRecordedPlayEvent;                 //@synthesize lastRecordedPlayEvent=_lastRecordedPlayEvent - In the implementation block
@property (assign,nonatomic) long long currentRepeatType;                              //@synthesize currentRepeatType=_currentRepeatType - In the implementation block
@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)setCurrentRepeatType:(long long)arg1 ;
-(long long)currentRepeatType;
-(MPCPlaybackEngine *)playbackEngine;
-(void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3 ;
-(void)engine:(id)arg1 didChangeRepeatType:(long long)arg2 ;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(MPModelPlayEvent *)lastRecordedPlayEvent;
-(void)setLastRecordedPlayEvent:(MPModelPlayEvent *)arg1 ;
@end
