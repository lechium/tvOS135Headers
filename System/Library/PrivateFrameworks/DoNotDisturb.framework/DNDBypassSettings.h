/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	unsigned long long _immediateBypassEventSourceType;
	NSString* _immediateBypassCNGroupIdentifier;
	unsigned long long _repeatEventSourceBehaviorEnabledSetting;

}

@property (nonatomic,readonly) unsigned long long immediateBypassEventSourceType;                       //@synthesize immediateBypassEventSourceType=_immediateBypassEventSourceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * immediateBypassCNGroupIdentifier;                        //@synthesize immediateBypassCNGroupIdentifier=_immediateBypassCNGroupIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long repeatEventSourceBehaviorEnabledSetting;              //@synthesize repeatEventSourceBehaviorEnabledSetting=_repeatEventSourceBehaviorEnabledSetting - In the implementation block
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
-(unsigned long long)immediateBypassEventSourceType;
-(NSString *)immediateBypassCNGroupIdentifier;
-(unsigned long long)repeatEventSourceBehaviorEnabledSetting;
-(id)_initWithImmediateBypassEventSourceType:(unsigned long long)arg1 immediateBypassCNGroupIdentifier:(id)arg2 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)arg3 ;
@end

