/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVApplicationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString, VUIExtrasApplicationController, _TVNavigationZoomAnimator, _TVProductTemplateZoomAnimator;

@interface VUIExtrasManager : NSObject <TVApplicationControllerDelegate, UIViewControllerTransitioningDelegate, MCProfileConnectionObserver> {

	BOOL _presenting;
	BOOL _reverseDismissal;
	NSString* _unrestrictedActionParams;
	VUIExtrasApplicationController* _applicationController;
	_TVNavigationZoomAnimator* _presentingAnimator;
	_TVProductTemplateZoomAnimator* _dismissingAnimator;

}

@property (nonatomic,retain) VUIExtrasApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) _TVNavigationZoomAnimator * presentingAnimator;                      //@synthesize presentingAnimator=_presentingAnimator - In the implementation block
@property (nonatomic,retain) _TVProductTemplateZoomAnimator * dismissingAnimator;                 //@synthesize dismissingAnimator=_dismissingAnimator - In the implementation block
@property (assign,nonatomic) BOOL presenting;                                                     //@synthesize presenting=_presenting - In the implementation block
@property (assign,nonatomic) BOOL reverseDismissal;                                               //@synthesize reverseDismissal=_reverseDismissal - In the implementation block
@property (nonatomic,copy) NSString * unrestrictedActionParams;                                   //@synthesize unrestrictedActionParams=_unrestrictedActionParams - In the implementation block
@property (getter=isExtrasVisible,nonatomic,readonly) BOOL extrasVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setPresenting:(BOOL)arg1 ;
-(void)setApplicationController:(VUIExtrasApplicationController *)arg1 ;
-(VUIExtrasApplicationController *)applicationController;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(id)_extrasNavigationController;
-(void)_loadExtrasURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(BOOL)arg6 presentImmediately:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_stopExtrasApp;
-(void)_presentExtrasApplicationController:(id)arg1 usingAppNavigationController:(id)arg2 withPreviousAppNavigationController:(id)arg3 presentImmediately:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)presenting;
-(void)dismissExtrasViewControllerIfPresent;
-(void)setUnrestrictedActionParams:(NSString *)arg1 ;
-(void)loadExtrasInfo:(id)arg1 ;
-(BOOL)isExtrasVisible;
-(NSString *)unrestrictedActionParams;
-(_TVNavigationZoomAnimator *)presentingAnimator;
-(void)setPresentingAnimator:(_TVNavigationZoomAnimator *)arg1 ;
-(_TVProductTemplateZoomAnimator *)dismissingAnimator;
-(void)setDismissingAnimator:(_TVProductTemplateZoomAnimator *)arg1 ;
-(BOOL)reverseDismissal;
-(void)setReverseDismissal:(BOOL)arg1 ;
@end

