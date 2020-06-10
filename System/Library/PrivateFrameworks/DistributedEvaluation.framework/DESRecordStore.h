/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DESRecordStore : NSObject {

	NSString* _bundleId;

}

@property (getter=isPermitted,nonatomic,readonly) BOOL permitted; 
@property (nonatomic,readonly) BOOL shouldMakeRecord; 
+(void)_getServiceProxyWithErrorHandler:(/*^block*/id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(BOOL)shouldMakeRecordWithFrequency:(unsigned long long)arg1 ;
-(BOOL)isPermitted;
-(BOOL)shouldMakeRecord;
-(void)saveRecordWithData:(id)arg1 recordInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchSavedRecordInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteAllSavedRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteSavedRecordWithIdentfier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveCoreDuetEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

