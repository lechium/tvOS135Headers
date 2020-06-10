/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {

	NSString* _gradientName;
	NSString* _flatColorName;
	NSString* _startColorName;
	NSString* _endColorName;
	NSArray* _colors;
	NSArray* _middleLocations;
	double _opacity;
	BOOL _horizontal;
	BOOL _usesRGBColors;
	BOOL _didQueryRGBColors;

}

@property (assign,nonatomic) double opacity;                          //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) BOOL horizontal;                         //@synthesize horizontal=_horizontal - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
@property (nonatomic,readonly) NSString * flatColorName; 
+(id)gradientWithFlatColor:(id)arg1 ;
+(id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
+(id)gradientWithColors:(id)arg1 middleLocations:(id)arg2 ;
+(id)gradientWithName:(id)arg1 ;
+(id)gradientWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CGGradientRef)CGGradient;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(BOOL)horizontal;
-(void)setHorizontal:(BOOL)arg1 ;
-(BOOL)usesRGBColors;
-(id)initWithFlatColor:(id)arg1 ;
-(id)initWith3Colors:(id)arg1 middleLocation:(double)arg2 ;
-(id)initWithColors:(id)arg1 middleLocations:(id)arg2 ;
-(NSString *)flatColorName;
@end

