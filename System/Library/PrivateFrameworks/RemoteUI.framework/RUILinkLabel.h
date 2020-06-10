/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UILabel, NSString, UIFont;

@interface RUILinkLabel : UIView {

	UIButton* _linkButton;
	long long _textAlignment;
	BOOL _enabled;
	/*^block*/id _action;
	UILabel* _textLabel;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) UIFont * font; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (nonatomic,copy) id action;                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) BOOL enabled;                         //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel;                //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) UIButton * linkButton; 
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)action;
-(void)setAction:(id)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)setNumberOfLines:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)numberOfLines;
-(long long)textAlignment;
-(UIButton *)linkButton;
-(void)_resize;
-(void)_linkPressed;
@end

