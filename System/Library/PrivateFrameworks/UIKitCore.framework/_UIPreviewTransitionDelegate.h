/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIForceTransitioningDelegate.h>

@class UIInteractionProgress, NSString;

@interface _UIPreviewTransitionDelegate : NSObject <UIForceTransitioningDelegate> {

	UIInteractionProgress* interactionProgressForPresentation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIInteractionProgress * interactionProgressForPresentation; 
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForPresentation:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(UIInteractionProgress *)interactionProgressForPresentation;
-(void)setInteractionProgressForPresentation:(UIInteractionProgress *)arg1 ;
@end
