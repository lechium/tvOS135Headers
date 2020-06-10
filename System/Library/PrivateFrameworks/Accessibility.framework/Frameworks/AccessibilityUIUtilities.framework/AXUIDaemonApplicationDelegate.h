/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, FBSOrientationObserver, NSString;

@interface AXUIDaemonApplicationDelegate : NSObject <UIApplicationDelegate> {

	FBSOrientationObserver* _orientationObserver;
	UIWindow* window;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)featureEnabledStatusDidChangeNotification;
+(id)loggingFacility;
+(id)debugFeatureName;
+(BOOL)isFeatureEnabled;
-(id)init;
-(void)dealloc;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)_exitIfNotEnabled;
-(void)_setKeepAlive:(BOOL)arg1 ;
-(void)_enabledPreferenceDidChange:(id)arg1 ;
-(void)didFinishLaunching;
-(void)_didUpdateToOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willTerminate;
-(void)didUpdateOrientation;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)_systemAppDidBecomeReady;
@end
