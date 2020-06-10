/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>

@class NSString;

@interface BSColor : NSObject <NSCopying, NSSecureCoding, BSXPCCoding> {

	double _red;
	double _green;
	double _blue;
	double _alpha;
	CGColorRef _colorRef;

}

@property (nonatomic,readonly) double red;                          //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) double green;                        //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) double blue;                         //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) double alpha;                        //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) CGColorRef CGColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
+(id)blackColor;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(double)red;
-(double)green;
-(double)blue;
-(double)alpha;
-(BOOL)isEqualToColor:(id)arg1 ;
-(CGColorRef)CGColor;
@end

