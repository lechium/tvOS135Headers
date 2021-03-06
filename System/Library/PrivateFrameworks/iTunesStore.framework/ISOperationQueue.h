/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue;

@interface ISOperationQueue : NSObject {

	NSOperationQueue* _queue;

}

@property (assign) BOOL adjustsMaxConcurrentOperationCount; 
+(id)mainQueue;
-(id)name;
-(id)init;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(long long)maxConcurrentOperationCount;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)setSuspended:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)operations;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
-(long long)operationCount;
-(void)cancelAllOperations;
-(BOOL)adjustsMaxConcurrentOperationCount;
-(void)setAdjustsMaxConcurrentOperationCount:(BOOL)arg1 ;
@end

