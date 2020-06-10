/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKRecord;

@interface CKDGetUserRecordURLRequest : CKDURLRequest {

	/*^block*/id _recordFetchedBlock;
	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
@property (nonatomic,copy) id recordFetchedBlock;                //@synthesize recordFetchedBlock=_recordFetchedBlock - In the implementation block
-(int)operationType;
-(id)recordFetchedBlock;
-(void)setRecordFetchedBlock:(id)arg1 ;
-(CKRecord *)userRecord;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setUserRecord:(CKRecord *)arg1 ;
@end

