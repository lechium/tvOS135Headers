/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SiriTVUISnippetViewDelegate;
@interface SiriTVUISnippetView : UIView {

	id<SiriTVUISnippetViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUISnippetViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SiriTVUISnippetViewDelegate>)delegate;
-(void)setDelegate:(id<SiriTVUISnippetViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
@end
