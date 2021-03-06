/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPromise.h>

@class NSLock;

@interface SSLazyPromise : SSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	NSLock* _executeBlockLock;

}

@property (nonatomic,copy) id block;                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * executeBlockLock;              //@synthesize executeBlockLock=_executeBlockLock - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;                     //@synthesize executedBlock=_executedBlock - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)block;
-(id)resultWithError:(id*)arg1 ;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock;
-(NSLock *)executeBlockLock;
-(BOOL)executedBlock;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(void)setExecuteBlockLock:(NSLock *)arg1 ;
@end

