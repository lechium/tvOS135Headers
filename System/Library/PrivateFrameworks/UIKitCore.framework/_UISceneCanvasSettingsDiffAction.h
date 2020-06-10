/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UISceneSettingsDiffAction.h>

@protocol _UICanvasSettingsDiffAction;
@class NSString;

@interface _UISceneCanvasSettingsDiffAction : NSObject <_UISceneSettingsDiffAction> {

	id<_UICanvasSettingsDiffAction> _canvasDiffAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneArrayFromCanvasArray:(id)arg1 ;
-(id)initWithCanvasDiffAction:(id)arg1 ;
-(void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned)arg6 ;
@end

