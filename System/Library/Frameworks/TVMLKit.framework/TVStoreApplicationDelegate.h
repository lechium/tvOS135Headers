/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>
#import <TVMLKit/TVApplicationControllerDelegate.h>

@class TVStoreApplicationSetupHelper, NSDictionary, NSURL, BKSProcessAssertion, UIWindow, TVApplicationController, IKURLBagCache, NSString;

@interface TVStoreApplicationDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate> {

	TVStoreApplicationSetupHelper* _setupHelper;
	NSDictionary* _launchOptions;
	NSURL* _launchOpenURL;
	NSDictionary* _launchOpenURLOptions;
	BKSProcessAssertion* _launchAssertion;
	BOOL _shouldTerminateOnEnterBackground;
	BOOL _headLess;
	BOOL _overrideOrientation;
	UIWindow* _window;
	TVApplicationController* _appController;
	IKURLBagCache* _bagCache;

}

@property (nonatomic,retain) UIWindow * window;                                      //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) TVApplicationController * appController;              //@synthesize appController=_appController - In the implementation block
@property (nonatomic,readonly) IKURLBagCache * bagCache;                             //@synthesize bagCache=_bagCache - In the implementation block
@property (nonatomic,readonly) BOOL supportsIdleModeVisualEffects; 
@property (assign,nonatomic) BOOL overrideOrientation;                               //@synthesize overrideOrientation=_overrideOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)reload;
-(UIWindow *)window;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(id)bagBootURLKey;
-(IKURLBagCache *)bagCache;
-(id)offlineJSURL;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2 ;
-(id)bootURL;
-(BOOL)supportsIdleModeVisualEffects;
-(TVApplicationController *)appController;
-(void)_launchApp;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_presetDialogWithError:(long long)arg1 appController:(id)arg2 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(void)updateIdleModeVisualEffectsStatus:(BOOL)arg1 ;
-(BOOL)shouldBeForcedLeftToRight;
-(id)_bagBootURL;
-(void)_loadWithBootURL:(id)arg1 ;
-(void)setupWithBootURL:(id)arg1 ;
-(id)appLocalBootURL;
-(void)didShowViewController;
-(id)cachedBagPath;
-(BOOL)overrideOrientation;
-(void)setOverrideOrientation:(BOOL)arg1 ;
@end
