/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ARUIRingGroupControllerDelegate.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class NSArray, CAMetalLayer, CADisplayLink, ARUIRingsViewRenderer, UIImage, ARUIRingGroupController, NSString;

@interface ARUIRingsView : UIView <ARUIRingGroupControllerDelegate, CALayerDelegate> {

	NSArray* _ringGroupControllers;
	BOOL _ringGroupControllersNeedRender;
	CAMetalLayer* _metalLayer;
	 _drawableSize;
	CADisplayLink* _displayLink;
	double _lastTickTime;
	BOOL _renderOnLayout;
	BOOL _shouldBypassApplicationStateChecking;
	BOOL _discardBackBuffers;
	BOOL _viewIsVisible;
	BOOL _paused;
	BOOL _synchronizesWithCA;
	float _screenScale;
	ARUIRingsViewRenderer* _renderer;
	long long _preferredFramesPerSecond;
	double _emptyRingAlpha;
	unsigned long long _iconTextureRows;
	unsigned long long _iconTextureColumns;
	UIImage* _iconSpriteImage;

}

@property (nonatomic,readonly) float screenScale;                                          //@synthesize screenScale=_screenScale - In the implementation block
@property (nonatomic,readonly) ARUIRingGroupController * ringGroupController; 
@property (nonatomic,readonly) ARUIRingsViewRenderer * renderer;                           //@synthesize renderer=_renderer - In the implementation block
@property (assign,nonatomic) BOOL shouldBypassApplicationStateChecking;                    //@synthesize shouldBypassApplicationStateChecking=_shouldBypassApplicationStateChecking - In the implementation block
@property (assign,nonatomic) BOOL discardBackBuffers;                                      //@synthesize discardBackBuffers=_discardBackBuffers - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;                           //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
@property (nonatomic,readonly) BOOL viewIsVisible;                                         //@synthesize viewIsVisible=_viewIsVisible - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                  //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL synchronizesWithCA;                                      //@synthesize synchronizesWithCA=_synchronizesWithCA - In the implementation block
@property (assign,nonatomic) double emptyRingAlpha;                                        //@synthesize emptyRingAlpha=_emptyRingAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureRows;                           //@synthesize iconTextureRows=_iconTextureRows - In the implementation block
@property (assign,nonatomic) unsigned long long iconTextureColumns;                        //@synthesize iconTextureColumns=_iconTextureColumns - In the implementation block
@property (nonatomic,retain) UIImage * iconSpriteImage;                                    //@synthesize iconSpriteImage=_iconSpriteImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ringsViewConfiguredForWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 renderer:(id)arg3 ;
+(id)ringsViewConfiguredForCompanionOfType:(long long)arg1 withRenderer:(id)arg2 ;
+(id)ringsViewConfiguredForThreeRingsOnWatch;
+(id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withRenderer:(id)arg2 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(long long)arg1 withIcon:(BOOL)arg2 ;
+(id)ringsViewConfiguredForThreeRingsOnCompanion;
+(id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForOneRingOnCompanionOfType:(long long)arg1 ;
+(void)clearSharedCaches;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPaused;
-(void)setOpaque:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setFrame:(CGRect)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)setBounds:(CGRect)arg1 ;
-(id)snapshot;
-(ARUIRingsViewRenderer *)renderer;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)screenScale;
-(id)displayLink;
-(void)layoutSubviews;
-(BOOL)viewIsVisible;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)_tick:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(id)metalLayer;
-(void)setRingBoundsDiameter:(float)arg1 ;
-(void)setSkewAdjustmentMatrix:(SCD_Struct_AR1)arg1 ;
-(unsigned long long)maximumRingCountForControllers:(id)arg1 ;
-(void)ringGroupControllerNeedsUpdate:(id)arg1 ;
-(id)initWithRingGroupControllers:(id)arg1 ;
-(void)ringGroupControllerWillAddCelebrationOfType:(unsigned long long)arg1 ;
-(void)setActiveEnergyPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setMovingHoursPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setBriskPercentage:(double)arg1 animated:(BOOL)arg2 ;
-(void)setActiveEnergyPercentage:(double)arg1 briskPercentage:(double)arg2 movingHoursPercentage:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(ARUIRingGroupController *)ringGroupController;
-(id)initWithRingGroupController:(id)arg1 renderer:(id)arg2 ;
-(id)initWithRingGroupControllers:(id)arg1 renderer:(id)arg2 ;
-(void)_pauseByNotification:(id)arg1 ;
-(void)_resumeByNotification:(id)arg1 ;
-(id)ringGroupControllers;
-(void)_updateDrawableSize;
-(void)_updateSkewAdjustment;
-(void)_updateMetalLayerProperties;
-(void)updateMetalLayerVisibility:(BOOL)arg1 ;
-(BOOL)_shouldAllowRendering;
-(void)updateRingGroupControllers;
-(void)drawIntoTexture:(id)arg1 withDrawable:(id)arg2 waitUntilCompleted:(BOOL)arg3 ;
-(void)updateDisplayLink;
-(void)_discardBackBuffersIfNoDisplayLink;
-(BOOL)_needsDisplayLink;
-(id)initWithRingGroupController:(id)arg1 ;
-(id)ringGroups;
-(void)setEmptyRingAlpha:(double)arg1 ;
-(void)setSynchronizesWithCA:(BOOL)arg1 ;
-(void)setShouldRenderOnLayout:(BOOL)arg1 ;
-(BOOL)shouldBypassApplicationStateChecking;
-(void)setShouldBypassApplicationStateChecking:(BOOL)arg1 ;
-(BOOL)discardBackBuffers;
-(void)setDiscardBackBuffers:(BOOL)arg1 ;
-(BOOL)synchronizesWithCA;
-(double)emptyRingAlpha;
-(unsigned long long)iconTextureRows;
-(void)setIconTextureRows:(unsigned long long)arg1 ;
-(unsigned long long)iconTextureColumns;
-(void)setIconTextureColumns:(unsigned long long)arg1 ;
-(UIImage *)iconSpriteImage;
-(void)setIconSpriteImage:(UIImage *)arg1 ;
@end

