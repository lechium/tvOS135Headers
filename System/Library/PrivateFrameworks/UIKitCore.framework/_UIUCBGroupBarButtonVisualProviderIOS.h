/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIUCBBarButtonVisualProviderIOS.h>

@class _UIUCBKBSelectionBackground;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {

	_UIUCBKBSelectionBackground* _selectionBackgroundView;
	BOOL _lightKeyboard;

}

@property (assign,nonatomic) BOOL lightKeyboard;              //@synthesize lightKeyboard=_lightKeyboard - In the implementation block
+(id)lightKeyboardProvider;
+(id)darkKeyboardProvider;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)lightKeyboard;
-(void)updateButton:(id)arg1 forSelectedState:(BOOL)arg2 ;
-(void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(BOOL)arg2 ;
-(void)setLightKeyboard:(BOOL)arg1 ;
@end

