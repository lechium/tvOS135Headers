/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject {

	NSMutableArray* _completionBlocks;
	BOOL _shouldCallImmediately;

}
-(id)init;
-(void)addCompletionBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(BOOL)shouldCallImmediately;
-(void)setShouldCallImmediately:(BOOL)arg1 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)addFailureBlock:(/*^block*/id)arg1 orCallWithFutureResult:(id)arg2 ;
-(void)flushCompletionBlocksWithFutureResult:(id)arg1 ;
@end

