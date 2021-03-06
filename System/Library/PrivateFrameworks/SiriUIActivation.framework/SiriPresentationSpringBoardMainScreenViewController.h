/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <SiriUIActivation/SiriPresentationViewController.h>

@interface SiriPresentationSpringBoardMainScreenViewController : SiriPresentationViewController

@property (nonatomic,retain) id<SiriPresentationSpringBoardMainScreenViewControllerDelegate> siriPresentationControllerDelegate; 
-(id)init;
-(id)initWithIdentifier:(long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setShowsStatusBar:(BOOL)arg1 ;
-(void)setFluidDismissalState:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(void)prewarmFlamesWithPresentationFrame:(CGRect)arg1 ;
-(void)requestPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
@end

