/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScreen, UITraitCollection;


@protocol _UISceneUIWindowHosting <NSObject>
@property (nonatomic,readonly) UIScreen * _screen; 
@property (nonatomic,readonly) long long _interfaceOrientation; 
@property (nonatomic,readonly) id<UICoordinateSpace> _coordinateSpace; 
@property (nonatomic,readonly) UITraitCollection * _traitCollection; 
@required
+(BOOL)_hostsWindows;
-(long long)_interfaceOrientation;
-(UIScreen *)_screen;
-(UITraitCollection *)_traitCollection;
-(id<UICoordinateSpace>)_coordinateSpace;
-(id)_allWindowsIncludingInternalWindows:(BOOL)arg1 onlyVisibleWindows:(BOOL)arg2;
-(void)_attachWindow:(id)arg1;
-(void)_detachWindow:(id)arg1;
-(void)_updateVisibleWindowOrderWithTest:(/*^block*/id)arg1;
-(void)_windowUpdatedVisibility:(id)arg1;
-(void)_windowUpdatedProperties:(id)arg1;

@end

