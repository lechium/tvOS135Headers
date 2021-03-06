/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class CNAvatarView, CAShapeLayer;

@interface CNContactGridClippingView : UIView {

	CNAvatarView* _avatarView;
	CAShapeLayer* _actionsMaskLayer;

}

@property (assign,nonatomic,__weak) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * actionsMaskLayer;               //@synthesize actionsMaskLayer=_actionsMaskLayer - In the implementation block
@property (assign,nonatomic) BOOL masksToAvatar; 
-(void)layoutSubviews;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(CNAvatarView *)avatarView;
-(CAShapeLayer *)actionsMaskLayer;
-(BOOL)masksToAvatar;
-(void)setActionsMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setMasksToAvatar:(BOOL)arg1 ;
@end

