/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLayoutConstraint, NSString, UIImageView;

@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying> {

	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _widthConstraint;
	BOOL _active;
	BOOL _hasBadge;
	NSString* _bundleIdentifier;
	UIImageView* _iconImageView;
	UIImageView* _iconHighlightImageView;
	UIImageView* _badgeView;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                       //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                         //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;                       //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) UIImageView * iconHighlightImageView;              //@synthesize iconHighlightImageView=_iconHighlightImageView - In the implementation block
@property (nonatomic,retain) UIImageView * badgeView;                           //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,readonly) BOOL itemHasBundleIdentifier; 
@property (assign,nonatomic) BOOL hasBadge;                                     //@synthesize hasBadge=_hasBadge - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHasBadge:(BOOL)arg1 ;
-(BOOL)hasBadge;
-(float)charge;
-(void)setCharge:(float)arg1 ;
-(UIImageView *)iconImageView;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIImageView *)badgeView;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_buttonPressed:(id)arg1 ;
-(void)setBadgeView:(UIImageView *)arg1 ;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(BOOL)shouldShowBadge;
-(UIImageView *)iconHighlightImageView;
-(BOOL)itemHasBundleIdentifier;
-(void)setBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIconHighlightImageView:(UIImageView *)arg1 ;
@end

