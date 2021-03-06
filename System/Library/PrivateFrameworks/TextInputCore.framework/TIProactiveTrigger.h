/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TextInputCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface TIProactiveTrigger : NSObject <NSCopying> {

	unsigned char _triggerSourceType;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) unsigned char triggerSourceType;              //@synthesize triggerSourceType=_triggerSourceType - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                    //@synthesize attributes=_attributes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(unsigned char)triggerSourceType;
-(id)initWithSourceType:(unsigned char)arg1 attributes:(id)arg2 ;
@end

