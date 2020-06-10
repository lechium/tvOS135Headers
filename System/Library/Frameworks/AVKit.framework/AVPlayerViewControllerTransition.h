/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class AVPlayerViewController, NSString;

@interface AVPlayerViewControllerTransition : NSObject <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {

	AVPlayerViewController* _playerViewController;

}

@property (nonatomic,retain) AVPlayerViewController * playerViewController;              //@synthesize playerViewController=_playerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(BOOL)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(AVPlayerViewController *)playerViewController;
-(void)setPlayerViewController:(AVPlayerViewController *)arg1 ;
-(id)placeholderView;
@end

