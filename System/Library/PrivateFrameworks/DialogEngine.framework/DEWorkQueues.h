/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DEWorkQueues : NSObject {

	NSMutableDictionary* _queues;

}

@property (retain) NSMutableDictionary * queues;              //@synthesize queues=_queues - In the implementation block
-(id)init;
-(void)setQueues:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)queues;
-(void)on:(id)arg1 enqueue:(/*^block*/id)arg2 ;
-(void)advance:(id)arg1 ;
@end
