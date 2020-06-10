/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPopoverController.h>

@protocol _UIViewServiceDummyPopoverControllerDelegate;
@interface _UIViewServiceDummyPopoverController : UIPopoverController {

	id<_UIViewServiceDummyPopoverControllerDelegate> _dummyPopoverControllerDelegate;

}

@property (assign,nonatomic,__weak) id<_UIViewServiceDummyPopoverControllerDelegate> dummyPopoverControllerDelegate;              //@synthesize dummyPopoverControllerDelegate=_dummyPopoverControllerDelegate - In the implementation block
+(Class)_popoverViewClass;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(BOOL)arg2 ;
-(BOOL)_attemptsToAvoidKeyboard;
-(id<_UIViewServiceDummyPopoverControllerDelegate>)dummyPopoverControllerDelegate;
-(void)_popoverView:(id)arg1 didSetUseToolbarShine:(BOOL)arg2 ;
-(void)_super_setPopoverContentSize:(CGSize)arg1 ;
-(void)setDummyPopoverControllerDelegate:(id<_UIViewServiceDummyPopoverControllerDelegate>)arg1 ;
@end

