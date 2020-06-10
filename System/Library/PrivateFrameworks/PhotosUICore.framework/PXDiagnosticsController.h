/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIWindow, NSArray, UITapGestureRecognizer, NSString;

@interface PXDiagnosticsController : NSObject <PXSettingsKeyObserver, UIGestureRecognizerDelegate> {

	UIWindow* __window;
	NSArray* __diagnosticsServicesClasses;
	UITapGestureRecognizer* __gestureRecognizer;

}

@property (nonatomic,readonly) UIWindow * _window;                                                                   //@synthesize _window=__window - In the implementation block
@property (nonatomic,readonly) NSArray * _diagnosticsServicesClasses;                                                //@synthesize _diagnosticsServicesClasses=__diagnosticsServicesClasses - In the implementation block
@property (setter=_setGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _gestureRecognizer;              //@synthesize _gestureRecognizer=__gestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(UIWindow *)_window;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(UITapGestureRecognizer *)_gestureRecognizer;
-(void)setupOnInternalDevicesWithWindow:(id)arg1 ;
-(id)currentItemProviders;
-(id)servicesWithItemProviders:(id)arg1 ;
-(id)consoleDescriptionForServices:(id)arg1 ;
-(void)presentContextualViewControllerForServices:(id)arg1 ;
-(void)_loadDiagnosticsServicesClasses;
-(void)_updateGestureRecognizer;
-(void)_handleGestureRecognizer:(id)arg1 ;
-(void)presentContextualDiagnostics;
-(void)_presentContextualViewControllerFromPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(id)_currentRootViewController;
-(void)_executeService:(id)arg1 ;
-(NSArray *)_diagnosticsServicesClasses;
-(void)_setGestureRecognizer:(id)arg1 ;
@end

