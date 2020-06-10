/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DNDModeAssertionLifetime.h>

@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime {

	NSString* _scheduleIdentifier;
	unsigned long long _behavior;

}

@property (nonatomic,copy,readonly) NSString * scheduleIdentifier;              //@synthesize scheduleIdentifier=_scheduleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long behavior;                     //@synthesize behavior=_behavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)behavior;
-(NSString *)scheduleIdentifier;
-(unsigned long long)lifetimeType;
-(id)initWithScheduleIdentifier:(id)arg1 behavior:(unsigned long long)arg2 ;
@end

