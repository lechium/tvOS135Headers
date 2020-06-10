/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILegibilityView.h>

@class NSString, UIFont;

@interface _UILegibilityLabel : _UILegibilityView {

	BOOL _usesSecondaryColor;
	NSString* _string;
	UIFont* _font;

}

@property (nonatomic,copy) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) BOOL usesSecondaryColor;              //@synthesize usesSecondaryColor=_usesSecondaryColor - In the implementation block
@property (nonatomic,readonly) double baselineOffset; 
-(void)dealloc;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(double)baselineOffset;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 ;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 string:(id)arg3 font:(id)arg4 options:(long long)arg5 ;
@end

