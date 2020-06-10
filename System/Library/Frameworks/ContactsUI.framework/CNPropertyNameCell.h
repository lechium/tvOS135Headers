/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactCell.h>

@protocol CNPropertyCellDelegate;
@class UITextField, UIResponder, CNPropertyGroupItem;

@interface CNPropertyNameCell : CNContactCell {

	UITextField* _textField;
	UIResponder* _firstResponderItem;
	id<CNPropertyCellDelegate> _delegate;

}

@property (nonatomic,retain) CNPropertyGroupItem * propertyItem; 
@property (nonatomic,readonly) UITextField * textField;                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIResponder * firstResponderItem;                      //@synthesize firstResponderItem=_firstResponderItem - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<CNPropertyCellDelegate>)delegate;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UITextField *)textField;
-(void)textFieldChanged:(id)arg1 ;
-(CNPropertyGroupItem *)propertyItem;
-(void)setCardGroupItem:(id)arg1 ;
-(id)constantConstraints;
-(UIResponder *)firstResponderItem;
-(void)setPropertyItem:(CNPropertyGroupItem *)arg1 ;
@end

