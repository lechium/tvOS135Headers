/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIWindow;


@protocol UIWindowSceneDelegate <UISceneDelegate>
@property (nonatomic,retain) UIWindow * window; 
@optional
-(UIWindow *)window;
-(void)setWindow:(id)arg1;
-(void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
-(void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)windowScene:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;

@end
