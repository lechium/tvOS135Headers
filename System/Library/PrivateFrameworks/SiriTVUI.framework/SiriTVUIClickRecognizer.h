/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol SiriTVUIClickRecognizerDelegate;
@interface SiriTVUIClickRecognizer : UITapGestureRecognizer {

	id<SiriTVUIClickRecognizerDelegate> _clickDelegate;

}

@property (assign,nonatomic,__weak) id<SiriTVUIClickRecognizerDelegate> clickDelegate;              //@synthesize clickDelegate=_clickDelegate - In the implementation block
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 clickDelegate:(id)arg3 ;
-(id<SiriTVUIClickRecognizerDelegate>)clickDelegate;
-(void)setClickDelegate:(id<SiriTVUIClickRecognizerDelegate>)arg1 ;
@end

