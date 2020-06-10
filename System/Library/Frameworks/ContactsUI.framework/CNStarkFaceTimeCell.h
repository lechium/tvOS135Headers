/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNTransportButton;

@interface CNStarkFaceTimeCell : CNContactCell {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNTransportButton* _transportIcon;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon;                     //@synthesize transportIcon=_transportIcon - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(CNTransportButton *)transportIcon;
-(id)constantConstraints;
-(void)_cnui_applyContactStyle;
-(void)performDefaultAction;
-(void)tintColorDidChange;
-(NSDictionary *)labelTextAttributes;
-(UILabel *)faceTimeLabel;
-(void)transportButtonClicked:(id)arg1 ;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
@end

