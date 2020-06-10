/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIInterfaceActionVisualStyle;


@protocol UIInterfaceActionGroupDisplaying <NSObject>
@property (nonatomic,readonly) UIInterfaceActionVisualStyle * visualStyle; 
@property (assign,nonatomic,__weak) id<UIInterfaceActionVisualStyleProviding> visualStyleProvider; 
@required
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)setVisualStyleProvider:(id)arg1;
-(void)reloadVisualStyle;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;
-(id<UIInterfaceActionVisualStyleProviding>)visualStyleProvider;

@end
