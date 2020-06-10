/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {

	double _scale;
	os_unfair_lock_s _visibilityLock;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_environment;
	NSString* _visibilityLock_identifier;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	NSString* _visibilityProcessingLock_identifier;
	RBSAssertion* _visibilityProcessingLock_assertion;
	CGAffineTransform _additionalRootLayerAffineTransform;

}

@property (assign,setter=_setAdditionalRootLayerAffineTransform:,getter=_additionalRootLayerAffineTransform,nonatomic) CGAffineTransform additionalRootLayerAffineTransform;              //@synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilityEnvironment; 
-(void)dealloc;
-(id)_context;
-(id)initWithDisplay:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)_updateVisibility;
-(id)initWithScreen:(id)arg1 ;
-(id)_layerForCoordinateSpaceConversion;
-(SCD_Struct_UI28)_bindingDescription;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_wantsSceneAssociation;
-(void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3 ;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(void)_configureContextOptions:(id)arg1 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(id)_visibilityLock_environment;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(NSString *)visibilityEnvironment;
-(void)setVisibilityIdentifier:(id)arg1 ;
-(void)_setAdditionalRootLayerAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_additionalRootLayerAffineTransform;
@end

