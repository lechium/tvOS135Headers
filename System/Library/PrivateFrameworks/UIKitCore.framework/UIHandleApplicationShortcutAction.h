/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class SBSApplicationShortcutItem, UIApplicationShortcutItem;

@interface UIHandleApplicationShortcutAction : BSAction

@property (nonatomic,copy,readonly) SBSApplicationShortcutItem * sbsShortcutItem; 
@property (nonatomic,copy,readonly) UIApplicationShortcutItem * uiShortcutItem; 
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(SBSApplicationShortcutItem *)sbsShortcutItem;
-(UIApplicationShortcutItem *)uiShortcutItem;
-(id)initWithSBSShortcutItem:(id)arg1 ;
@end

