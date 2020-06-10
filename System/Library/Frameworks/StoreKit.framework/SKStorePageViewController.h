/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol SKUIServiceStorePageViewController;
@class _UIAsyncInvocation, SKStoreProductViewController, SKRemoteStorePageViewController, SKInvocationQueueProxy, NSString;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {

	_UIAsyncInvocation* _cancelRequest;
	/*^block*/id _loadBlock;
	SKStoreProductViewController* _productPageViewController;
	SKRemoteStorePageViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceStorePageViewController> _serviceProxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_addRemoteView;
-(void)_requestRemoteViewController;
-(void)_didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)_prepareToLoadWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_dismissProductPageViewController;
-(void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)loadPageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)loadPageWithURLBagKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showProductPageWithItemIdentifier:(id)arg1 ;
@end

