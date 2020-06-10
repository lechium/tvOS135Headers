/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOAnalyticsPipelineProxy <NSObject>
@required
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4;
-(void)setEvalMode:(BOOL)arg1;
-(void)flushEvalData;
-(void)initiateUploadOfType:(int)arg1;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3;
-(id)getEvalStatus;

@end
