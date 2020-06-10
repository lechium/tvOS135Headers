/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKOperationInfo, NSDate, NSNumber;

@interface CKDOperationInfoMetadata : NSObject {

	CKOperationInfo* _operationInfo;
	NSDate* _lastAttemptDate;
	NSNumber* _retryNumber;

}

@property (nonatomic,retain) CKOperationInfo * operationInfo;              //@synthesize operationInfo=_operationInfo - In the implementation block
@property (nonatomic,retain) NSDate * lastAttemptDate;                     //@synthesize lastAttemptDate=_lastAttemptDate - In the implementation block
@property (nonatomic,retain) NSNumber * retryNumber;                       //@synthesize retryNumber=_retryNumber - In the implementation block
-(CKOperationInfo *)operationInfo;
-(NSNumber *)retryNumber;
-(NSDate *)lastAttemptDate;
-(void)setOperationInfo:(CKOperationInfo *)arg1 ;
-(void)setLastAttemptDate:(NSDate *)arg1 ;
-(void)setRetryNumber:(NSNumber *)arg1 ;
@end

