/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneMetricsCalculating.h>

@class UIWindowScene, NSString;

@interface _UIScenefbsSceneBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating> {

	UIWindowScene* _scene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,nonatomic,__weak) UIWindowScene * _scene;              //@synthesize scene=_scene - In the implementation block
-(UIWindowScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end

