/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <TVUIKit/TVLockupView.h>

@class UIImage, NSString;

@interface TVCaptionButtonView : TVLockupView {

	long long _motionDirection;
	UIImage* _contentImage;
	NSString* _contentText;
	NSString* _title;
	NSString* _subtitle;
	id _target;
	SEL _action;

}

@property (nonatomic,readonly) id target;                            //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                           //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) long long motionDirection;              //@synthesize motionDirection=_motionDirection - In the implementation block
@property (nonatomic,retain) UIImage * contentImage;                 //@synthesize contentImage=_contentImage - In the implementation block
@property (nonatomic,copy) NSString * contentText;                   //@synthesize contentText=_contentText - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
+(Class)_concreteContentViewClass;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)target;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SEL)action;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)contentImage;
-(void)setContentImage:(UIImage *)arg1 ;
-(NSString *)contentText;
-(void)setContentText:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setMotionDirection:(long long)arg1 ;
-(long long)motionDirection;
-(void)_createFooterView;
-(void)_updateAppearanceForFocusUpdateContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
@end
