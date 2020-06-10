/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUILabel, UITextView;

@interface VUITVDescriptiveAlertView : UIView {

	VUILabel* _titleLabel;
	UITextView* _descriptionTextView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UITextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(UITextView *)descriptionTextView;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(void)_updateDescriptionTextViewProperties:(BOOL)arg1 ;
@end

