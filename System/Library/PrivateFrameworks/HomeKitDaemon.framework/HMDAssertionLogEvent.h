/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent {

	NSString* _description;
	NSString* _reason;

}

@property (copy,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(id)identifier;
-(id)description;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
@end

