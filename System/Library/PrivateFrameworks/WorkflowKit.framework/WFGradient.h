/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WFColor;

@interface WFGradient : NSObject <NSCopying> {

	CGGradientRef _CGGradient;
	WFColor* _baseColor;
	WFColor* _darkBaseColor;
	WFColor* _accessibilityBaseColor;
	WFColor* _darkAccessibilityBaseColor;
	WFColor* _startColor;
	WFColor* _endColor;
	long long _blendMode;

}

@property (nonatomic,readonly) WFColor * baseColor;                               //@synthesize baseColor=_baseColor - In the implementation block
@property (nonatomic,readonly) WFColor * darkBaseColor;                           //@synthesize darkBaseColor=_darkBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * accessibilityBaseColor;                  //@synthesize accessibilityBaseColor=_accessibilityBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * darkAccessibilityBaseColor;              //@synthesize darkAccessibilityBaseColor=_darkAccessibilityBaseColor - In the implementation block
@property (nonatomic,readonly) WFColor * startColor;                              //@synthesize startColor=_startColor - In the implementation block
@property (nonatomic,readonly) WFColor * endColor;                                //@synthesize endColor=_endColor - In the implementation block
@property (nonatomic,readonly) long long blendMode;                               //@synthesize blendMode=_blendMode - In the implementation block
@property (nonatomic,readonly) CGGradientRef CGGradient;                          //@synthesize CGGradient=_CGGradient - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithColor:(id)arg1 ;
-(long long)blendMode;
-(WFColor *)baseColor;
-(WFColor *)startColor;
-(WFColor *)endColor;
-(CGGradientRef)CGGradient;
-(id)initWithStartColor:(id)arg1 endColor:(id)arg2 ;
-(id)initWithBaseColor:(id)arg1 startColor:(id)arg2 endColor:(id)arg3 blendMode:(long long)arg4 ;
-(id)initWithBaseColor:(id)arg1 darkBaseColor:(id)arg2 accessibilityBaseColor:(id)arg3 darkAccessibilityBaseColor:(id)arg4 startColor:(id)arg5 endColor:(id)arg6 blendMode:(long long)arg7 ;
-(WFColor *)darkBaseColor;
-(WFColor *)accessibilityBaseColor;
-(WFColor *)darkAccessibilityBaseColor;
@end

