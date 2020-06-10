/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MRLayer.h>

@class MCContainerSerializer, NSMutableArray, NSMutableDictionary, MRLayer, MRTransition, NSArray;

@interface MRLayerSerializer : MRLayer {

	MCContainerSerializer* mContainer;
	NSMutableArray* mSublayers;
	NSMutableDictionary* mSublayersForPlugs;
	MRLayer* mCurrentSublayer;
	MRLayer* mNextSublayer;
	MRTransition* mCurrentTransition;
	MRLayer* mSublayerForTransition;
	MRLayer* mSublayerToPrecompute;
	id mPrecomputingTarget;
	unsigned long long mPrecomputingType;
	MRLayer* mLiveSourceSublayer;
	MRLayer* mLiveTargetSublayer;
	BOOL mLiveTransitionIsBackwards;
	BOOL mIsTransitioning;
	BOOL mNeedsToUpdateSublayersTiming;
	BOOL mNeedsToUpdateTransitionAttributes;
	BOOL mHasWarnedDelegateAboutNearingEnd;

}

@property (readonly) NSArray * sublayers; 
-(void)cleanup;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isOpaque;
-(void)deactivate;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)_currentState;
-(NSArray *)sublayers;
-(BOOL)hasAudio;
-(BOOL)isLoadedForTime:(double)arg1 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(void)beginMorphingToAspectRatio:(double)arg1 withDuration:(double)arg2 ;
-(void)endMorphing;
-(BOOL)supportsDynamicExpansion;
-(void)_unobservePlug;
-(void)depreactivate:(BOOL)arg1 ;
-(id)initWithPlug:(id)arg1 andParameters:(id)arg2 inSuperlayer:(id)arg3 ;
-(void)_observePlugOnPreactivate;
-(void)_unobservePlugOnDepreactivate;
-(BOOL)_isNative3D;
-(void)synchronizeTime;
-(void)_renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)hasSomethingToRender;
-(id)_retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)actionHitAtPoint:(CGPoint)arg1 layer:(id*)arg2 ;
-(id)actionForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(id)_dumpLayerWithOptions:(unsigned long long)arg1 ;
-(void)_observePlug;
-(void)_setNeedsToRequestRebuildAudio:(BOOL)arg1 ;
-(void)_unobserveSublayer:(id)arg1 ;
-(void)_deleteSublayer:(id)arg1 ;
-(void)endTransitionToSublayer;
-(void)_executeLayerCommandQueue;
-(void)_prerenderSublayersAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_preprecomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(id)sublayerHitAtPoint:(CGPoint)arg1 onlyIfHitElement:(BOOL)arg2 localPoint:(CGPoint*)arg3 ;
-(id)sublayerForPlugObjectID:(id)arg1 recursive:(BOOL)arg2 ;
-(id)_createSublayerForPlug:(id)arg1 ;
-(void)_observeSublayer:(id)arg1 ;
-(void)_precomputeAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)_unobserveSublayerOnDepreactivate:(id)arg1 ;
-(void)_observeSublayerOnPreactivate:(id)arg1 ;
-(void)_updateSublayersTiming;
-(double)transitionToSublayerAtIndex:(unsigned long long)arg1 ;
-(id)sublayerAtIndex:(unsigned long long)arg1 ;
-(double)transitionToNextSublayer;
-(double)transitionToPreviousSublayer;
@end

