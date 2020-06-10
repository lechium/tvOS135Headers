/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _interval;
	long long _frequency;

}

@property (nonatomic,readonly) unsigned long long interval;              //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) long long frequency;                      //@synthesize frequency=_frequency - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)interval;
-(long long)frequency;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2 ;
@end

