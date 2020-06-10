/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneLayerHostContainerViewDataSource.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneHostView.h>

@protocol FBSceneHostViewDelegate;
@class FBScene, NSString, FBSceneLayerManager, FBSceneHostManager, FBSceneLayerHostContainerView, NSMapTable, NSMutableSet, UIColor, NSSet;

@interface FBSceneHostWrapperView : UIView <_FBSceneGeometryObserver, FBSceneLayerManagerObserver, FBSceneLayerHostContainerViewDataSource, BSDescriptionProviding, FBSceneHostView> {

	FBScene* _scene;
	NSString* _requester;
	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _manager;
	FBSceneLayerHostContainerView* _hostContainerView;
	NSMapTable* _layerAlphaMapTable;
	NSMutableSet* _hiddenLayers;
	unsigned long long _appearanceStyle;
	BOOL _usingDefaultClippingDisabled;
	BOOL _usingDefaultHostViewTransform;
	UIColor* _backgroundColorWhileNotHosting;
	UIColor* _backgroundColorWhileHosting;
	unsigned long long _hostedLayerTypes;
	BOOL _usingDefaultLayerTypes;
	unsigned long long _renderingMode;
	BOOL _usingDefaultRenderingMode;
	NSString* _minificationFilterName;
	BOOL _usingDefaultMinificationFilterName;
	BOOL _clippingDisabled;
	id<FBSceneHostViewDelegate> _delegate;
	CGAffineTransform _hostViewTransform;

}

@property (nonatomic,readonly) FBScene * scene;                                              //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * requester;                                    //@synthesize requester=_requester - In the implementation block
@property (nonatomic,readonly) NSSet * hiddenLayers;                                         //@synthesize hiddenLayers=_hiddenLayers - In the implementation block
@property (nonatomic,readonly) NSSet * hostingDisabledLayers; 
@property (nonatomic,retain) FBSceneLayerHostContainerView * hostContainerView;              //@synthesize hostContainerView=_hostContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled;                //@synthesize clippingDisabled=_clippingDisabled - In the implementation block
@property (assign,nonatomic) CGAffineTransform hostViewTransform;                            //@synthesize hostViewTransform=_hostViewTransform - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,retain) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long hostedLayerTypes;                            //@synthesize hostedLayerTypes=_hostedLayerTypes - In the implementation block
@property (assign,nonatomic) unsigned long long renderingMode;                               //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,copy) NSString * minificationFilterName;                                //@synthesize minificationFilterName=_minificationFilterName - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceStyle;                             //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (getter=isHosting,nonatomic,readonly) BOOL hosting; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) double level; 
@property (assign,nonatomic) id<FBSceneHostViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id<FBSceneHostViewDelegate>)delegate;
-(void)setDelegate:(id<FBSceneHostViewDelegate>)arg1 ;
-(double)level;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(CGRect)referenceFrame;
-(FBScene *)scene;
-(id)window;
-(unsigned long long)renderingMode;
-(NSString *)requester;
-(void)setRenderingMode:(unsigned long long)arg1 ;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(void)setDefaultClippingDisabled:(BOOL)arg1 ;
-(void)setDefaultHostViewTransform:(CGAffineTransform)arg1 ;
-(void)updateBackgroundColor;
-(void)setDefaultHostedLayerTypes:(unsigned long long)arg1 ;
-(void)setDefaultRenderingMode:(unsigned long long)arg1 ;
-(void)setDefaultMinificationFilterName:(id)arg1 ;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(void)setLayer:(id)arg1 alpha:(double)arg2 ;
-(void)setLayer:(id)arg1 hidden:(BOOL)arg2 ;
-(UIColor *)backgroundColorWhileHosting;
-(NSSet *)hiddenLayers;
-(NSSet *)hostingDisabledLayers;
-(id)initWithScene:(id)arg1 requester:(id)arg2 ;
-(void)setHostContainerView:(FBSceneLayerHostContainerView *)arg1 ;
-(BOOL)isHosting;
-(id)layersForHostContainerView:(id)arg1 ;
-(double)hostContainerView:(id)arg1 alphaForLayer:(id)arg2 ;
-(unsigned long long)contextHostRenderingModeForHostContainerView:(id)arg1 ;
-(id)layerMinificationFilterNameForHostContainerView:(id)arg1 ;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)setClippingDisabled:(BOOL)arg1 ;
-(BOOL)isClippingDisabled;
-(void)_setAppearanceStyle:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)_hostingStatusChanged;
-(void)_toggleBackgroundColorIfNecessary;
-(void)_updateFrameAndTransform;
-(BOOL)_isReallyHosting;
-(id)_backgroundColorWhileHosting;
-(id)_backgroundColorWhileNotHosting;
-(id)_stringForAppearanceStyle;
-(CGAffineTransform)hostViewTransform;
-(void)setHostViewTransform:(CGAffineTransform)arg1 ;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(UIColor *)backgroundColorWhileNotHosting;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(unsigned long long)hostedLayerTypes;
-(void)setHostedLayerTypes:(unsigned long long)arg1 ;
-(NSString *)minificationFilterName;
-(void)setMinificationFilterName:(NSString *)arg1 ;
-(unsigned long long)appearanceStyle;
-(FBSceneLayerHostContainerView *)hostContainerView;
@end

