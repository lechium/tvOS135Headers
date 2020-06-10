/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation {

	BOOL executing;
	BOOL finished;
	BOOL cancelled;
	NSError* _error;
	NSMutableArray* _successDependencies;

}

@property (retain) NSMutableArray * successDependencies;              //@synthesize successDependencies=_successDependencies - In the implementation block
@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
@property (getter=isCancelled) BOOL cancelled; 
@property (retain) NSError * error;                                   //@synthesize error=_error - In the implementation block
+(id)operation:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)startOperation;
-(void)completeOperation;
-(BOOL)checkDependencies;
-(void)addSuccessDependency:(id)arg1 ;
-(void)setExecuting:(BOOL)arg1 ;
-(NSMutableArray *)successDependencies;
-(void)setSuccessDependencies:(NSMutableArray *)arg1 ;
@end

