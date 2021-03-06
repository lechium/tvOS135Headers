/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest {

	BOOL _wantsProtectionInfo;
	/*^block*/id _progressBlock;
	NSArray* _infosToDiscover;
	NSMutableDictionary* _submittedInfos;

}

@property (nonatomic,retain) NSArray * infosToDiscover;                         //@synthesize infosToDiscover=_infosToDiscover - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * submittedInfos;              //@synthesize submittedInfos=_submittedInfos - In the implementation block
@property (assign,nonatomic) BOOL wantsProtectionInfo;                          //@synthesize wantsProtectionInfo=_wantsProtectionInfo - In the implementation block
@property (nonatomic,copy) id progressBlock;                                    //@synthesize progressBlock=_progressBlock - In the implementation block
-(long long)databaseScope;
-(int)operationType;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithLookupInfos:(id)arg1 ;
-(NSArray *)infosToDiscover;
-(BOOL)wantsProtectionInfo;
-(void)setWantsProtectionInfo:(BOOL)arg1 ;
-(void)setInfosToDiscover:(NSArray *)arg1 ;
-(NSMutableDictionary *)submittedInfos;
-(void)setSubmittedInfos:(NSMutableDictionary *)arg1 ;
@end

