/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UITextField.h>

@protocol _TVTextEntryTextFieldDelegate;
@class NSDictionary;

@interface _TVTextEntryTextField : UITextField {

	BOOL _allowsFocus;
	id<_TVTextEntryTextFieldDelegate> __tvTextEntryDelegate;
	NSDictionary* _autofillContext;

}

@property (assign,nonatomic) BOOL allowsFocus;                                                           //@synthesize allowsFocus=_allowsFocus - In the implementation block
@property (assign,nonatomic,__weak) id<_TVTextEntryTextFieldDelegate> _tvTextEntryDelegate;              //@synthesize _tvTextEntryDelegate=__tvTextEntryDelegate - In the implementation block
@property (getter=_autofillContext,nonatomic,retain) NSDictionary * autofillContext;                     //@synthesize autofillContext=_autofillContext - In the implementation block
-(id)text;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_autofillContext;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)allowsFocus;
-(void)setAllowsFocus:(BOOL)arg1 ;
-(void)set_tvTextEntryDelegate:(id<_TVTextEntryTextFieldDelegate>)arg1 ;
-(id<_TVTextEntryTextFieldDelegate>)_tvTextEntryDelegate;
@end

