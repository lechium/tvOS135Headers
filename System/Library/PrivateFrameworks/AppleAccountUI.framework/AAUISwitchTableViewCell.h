/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol AAUISwitchTableViewCellDelegate;
@class UISwitch;

@interface AAUISwitchTableViewCell : UITableViewCell {

	UISwitch* _control;
	id<AAUISwitchTableViewCellDelegate> _delegate;

}

@property (nonatomic,readonly) UISwitch * control;                                             //@synthesize control=_control - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISwitchTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id<AAUISwitchTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<AAUISwitchTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UISwitch *)control;
-(void)_delegate_switchTableViewCellDidUpdateValue;
-(void)_controlValueChanged:(id)arg1 ;
@end

