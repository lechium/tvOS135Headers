/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/_UIRootWindow.h>
#import <libobjc.A.dylib/FBSceneTransformTarget.h>

@class UIView, NSHashTable, CALayer, NSString;

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {

	UIView* _sceneContainerView;
	NSHashTable* _transforms;
	CALayer* _bezelLayer;
	CALayer* _maskLayer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecure;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithDisplay:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canBecomeKeyWindow;
-(void)transformDidInvalidate:(id)arg1 ;
-(void)transformDidUpdate:(id)arg1 ;
-(void)attachSceneTransform:(id)arg1 ;
-(void)removeSceneTransform:(id)arg1 ;
-(id)sceneContainerView;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(void)_updateTransforms;
-(id)initWithScreen:(id)arg1 ;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
@end
