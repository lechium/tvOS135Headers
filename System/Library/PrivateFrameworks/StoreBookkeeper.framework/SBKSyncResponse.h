/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/SBKResponse.h>

@class SBKSyncResponseData;

@interface SBKSyncResponse : SBKResponse {

	SBKSyncResponseData* _syncResponseData;

}

@property (readonly) SBKSyncResponseData * syncResponseData;              //@synthesize syncResponseData=_syncResponseData - In the implementation block
+(id)responseWithResponse:(id)arg1 transaction:(id)arg2 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg1 ;
-(SBKSyncResponseData *)syncResponseData;
@end

