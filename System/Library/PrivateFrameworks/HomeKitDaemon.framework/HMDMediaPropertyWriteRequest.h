/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDMediaPropertyRequest.h>

@class NSUUID;

@interface HMDMediaPropertyWriteRequest : HMDMediaPropertyRequest {

	id _value;
	NSUUID* _identifier;

}

@property (nonatomic,readonly) id value;                         //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2 ;
+(id)serializeWriteRequests:(id)arg1 ;
+(id)deserializeWriteRequests:(id)arg1 mediaProfile:(id)arg2 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 ;
+(id)writeRequestWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
-(id)description;
-(NSUUID *)identifier;
-(id)value;
-(id)initWithProperty:(id)arg1 value:(id)arg2 mediaProfile:(id)arg3 identifier:(id)arg4 ;
@end

