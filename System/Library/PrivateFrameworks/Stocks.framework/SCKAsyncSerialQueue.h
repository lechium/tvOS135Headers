/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface SCKAsyncSerialQueue : NSObject {

	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;              //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
@property (getter=isSuspended) BOOL suspended; 
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(NSOperationQueue *)serialOperationQueue;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
-(void)waitUntilEmpty;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
@end

