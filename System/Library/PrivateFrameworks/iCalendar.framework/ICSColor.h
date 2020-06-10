/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICSColor : NSObject <NSSecureCoding> {

	unsigned char _red;
	unsigned char _green;
	unsigned char _blue;

}
+(BOOL)supportsSecureCoding;
+(id)symbolicColorForLegacyRGB:(id)arg1 ;
+(BOOL)colorDetailsAreEffectivelyDifferentFirstColor:(id)arg1 secondColor:(id)arg2 firstSymbolicName:(id)arg3 secondSymbolicName:(id)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)red;
-(unsigned char)green;
-(unsigned char)blue;
-(id)initWithRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3 ;
@end

