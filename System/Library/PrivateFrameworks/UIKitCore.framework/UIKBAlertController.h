/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>

@protocol UIKBAlertControllerDelegate;
@interface UIKBAlertController : UIAlertController {

	id<UIKBAlertControllerDelegate> _kbDelegate;

}

@property (assign,nonatomic) id<UIKBAlertControllerDelegate> kbDelegate;              //@synthesize kbDelegate=_kbDelegate - In the implementation block
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id<UIKBAlertControllerDelegate>)kbDelegate;
-(void)setKbDelegate:(id<UIKBAlertControllerDelegate>)arg1 ;
@end

