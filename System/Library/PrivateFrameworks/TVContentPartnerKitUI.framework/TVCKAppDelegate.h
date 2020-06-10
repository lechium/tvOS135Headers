/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVStoreApplicationDelegate.h>
#import <TVContentPartnerKitUI/_TVInterfaceCreatingPrivate.h>
#import <TVContentPartnerKitUI/TVInterfaceCreating.h>

@class NSString;

@interface TVCKAppDelegate : TVStoreApplicationDelegate <_TVInterfaceCreatingPrivate, TVInterfaceCreating>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
+(void)setupUIFactoryWithBootURL:(id)arg1 defaultBootURL:(id)arg2 ;
+(void)exposeObjectsInJSContext:(id)arg1 ;
+(void)exposeDefaultObjectsInJSContext:(id)arg1 ;
-(id)init;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)setupWithBootURL:(id)arg1 ;
-(void)_registerTemplateStyleSheets;
@end

