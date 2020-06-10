/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleTransportCell.h>

@interface CNPropertyInstantMessageCell : CNPropertySimpleTransportCell {

	id _action;

}

@property (nonatomic,retain) id action;              //@synthesize action=_action - In the implementation block
-(id)action;
-(void)setAction:(id)arg1 ;
-(BOOL)shouldPerformDefaultAction;
-(void)performDefaultAction;
-(void)updateTransportButtons;
-(void)transportButton1Clicked:(id)arg1 ;
@end

