/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	int _stage;
	int _responseType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int stage;                           //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) int responseType;                    //@synthesize responseType=_responseType - In the implementation block
+(id)uuid;
+(id)homeInvitationWithStage:(int)arg1 ;
+(id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
-(int)responseType;
-(int)stage;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
@end

