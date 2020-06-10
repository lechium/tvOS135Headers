/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSEventQueue;

@interface BSEventQueueLock : NSObject {

	BOOL _relinquished;
	NSString* _reason;
	BSEventQueue* _eventQueue;

}

@property (nonatomic,retain) BSEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,copy) NSString * reason;                        //@synthesize reason=_reason - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)reason;
-(void)relinquish;
-(id)initWithEventQueue:(id)arg1 reason:(id)arg2 ;
-(void)setReason:(NSString *)arg1 ;
-(BSEventQueue *)eventQueue;
-(void)setEventQueue:(BSEventQueue *)arg1 ;
@end

