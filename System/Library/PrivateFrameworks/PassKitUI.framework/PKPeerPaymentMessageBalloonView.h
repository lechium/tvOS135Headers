/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class PKPeerPaymentBubbleView;

@interface PKPeerPaymentMessageBalloonView : UIView {

	PKPeerPaymentBubbleView* _bubbleView;
	long long _peerPaymentType;

}

@property (nonatomic,readonly) PKPeerPaymentBubbleView * bubbleView;              //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,readonly) long long peerPaymentType;                         //@synthesize peerPaymentType=_peerPaymentType - In the implementation block
-(long long)peerPaymentType;
-(PKPeerPaymentBubbleView *)bubbleView;
-(id)initWithBubbleView:(id)arg1 peerPaymentType:(long long)arg2 ;
@end

