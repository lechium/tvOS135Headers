/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIFont, NSString, UIColor;

@interface _UINavigationBarModernPromptView : UIView {

	UILabel* _promptLabel;
	UIFont* _font;
	NSString* _prompt;
	UIColor* _textColor;

}

@property (nonatomic,copy) NSString * prompt;                    //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) double promptHeight; 
-(id)initWithFrame:(CGRect)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(double)promptHeight;
-(void)_updatePromptLabel;
@end

