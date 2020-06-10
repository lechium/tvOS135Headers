/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _scheduleEnabledSetting;
	DNDScheduleTimePeriod* _timePeriod;
	unsigned long long _bedtimeBehaviorEnabledSetting;

}

@property (nonatomic,readonly) unsigned long long scheduleEnabledSetting;                     //@synthesize scheduleEnabledSetting=_scheduleEnabledSetting - In the implementation block
@property (nonatomic,copy,readonly) DNDScheduleTimePeriod * timePeriod;                       //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,readonly) unsigned long long bedtimeBehaviorEnabledSetting;              //@synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithSettings:(id)arg1 ;
-(unsigned long long)scheduleEnabledSetting;
-(DNDScheduleTimePeriod *)timePeriod;
-(unsigned long long)bedtimeBehaviorEnabledSetting;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 ;
@end

