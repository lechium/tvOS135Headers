/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/MPNavigatorSupportInternal.h>
#import <libobjc.A.dylib/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MPAnimationSupport.h>
#import <libobjc.A.dylib/MPActionableSupport.h>
#import <libobjc.A.dylib/MPAudioSupport.h>
#import <libobjc.A.dylib/MPLayerableSupport.h>
#import <libobjc.A.dylib/MPNavigatorSupport.h>
#import <libobjc.A.dylib/MPGeometrySupport.h>
#import <libobjc.A.dylib/MPTimingSupport.h>
#import <libobjc.A.dylib/MPActionSupport.h>
#import <libobjc.A.dylib/MPAutomaticLayerSupport.h>
#import <libobjc.A.dylib/MPManualLayerSupport.h>

@class MPLayerGroupInternal, NSMutableArray, MCPlugParallel, MCContainerParallelizer, MPAudioPlaylist, NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {

	MPLayerGroupInternal* _internal;
	NSMutableArray* _userProvidedVideoPaths;
	NSMutableArray* _userProvidedAudioPaths;
	MCPlugParallel* _plug;
	MCContainerParallelizer* _parallelizer;
	MPAudioPlaylist* _audioPlaylist;
	NSMutableArray* _layers;
	NSMutableDictionary* _layerDictionary;
	id _parent;
	NSMutableDictionary* _authoringOptions;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;

}

@property (assign,nonatomic) unsigned long long loopingMode; 
@property (assign,nonatomic) CGColorRef backgroundCGColor; 
@property (nonatomic,copy) NSArray * videoPaths; 
@property (nonatomic,copy) NSArray * audioPaths; 
@property (assign,nonatomic) BOOL autoAdjustDuration; 
@property (nonatomic,readonly) NSString * uuid; 
@property (assign,nonatomic) NSDictionary * initialState; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)parent;
-(id)observer;
-(id)container;
-(void)setParent:(id)arg1 ;
-(void)setContainer:(id)arg1 ;
-(CGSize)size;
-(void)cleanup;
-(NSString *)uuid;
-(double)scale;
-(CGPoint)position;
-(double)duration;
-(id)objectID;
-(void)setScale:(double)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(id)actions;
-(id)layers;
-(double)opacity;
-(double)zPosition;
-(void)setZPosition:(double)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)addLayer:(id)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(id)allEffects;
-(double)videoDuration;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)removeActionForKey:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parentDocument;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(id)plugID;
-(void)copyActions:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)isTriggered;
-(void)setIsTriggered:(BOOL)arg1 ;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)phaseInDuration;
-(double)phaseOutDuration;
-(void)copyStruct:(id)arg1 ;
-(BOOL)autoAdjustDuration;
-(void)resetDuration;
-(unsigned long long)loopingMode;
-(void)setPlug:(id)arg1 ;
-(id)authoringOptions;
-(long long)countOfLayers;
-(NSArray *)videoPaths;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)audioPaths;
-(void)setAudioPaths:(NSArray *)arg1 ;
-(void)removeAllLayers;
-(void)addLayers:(id)arg1 ;
-(void)setUsedAllPaths:(BOOL)arg1 ;
-(void)setLastSlideUsed:(long long)arg1 ;
-(id)navigatorKey;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(id)authoredVersionInfo;
-(id)styleID;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(id)mainLayers;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)setAuthoredVersionInfo:(id)arg1 ;
-(void)reconnectAll;
-(void)reconfigureLoopingMode;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(void)setVideoPaths:(NSArray *)arg1 ;
-(BOOL)detectFacesInBackground;
-(id)orderedVideoPaths;
-(unsigned long long)setStyleID:(id)arg1 ;
-(void)setAuthoringOptions:(id)arg1 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(void)cachePaths;
-(id)allSlides:(BOOL)arg1 ;
-(void)addVideoPath:(id)arg1 ;
-(void)addVideoPaths:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)addAudioPaths:(id)arg1 ;
-(void)removePath:(id)arg1 ;
-(void)removePaths:(id)arg1 ;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)layerForKey:(id)arg1 ;
-(id)plug;
-(CGColorRef)backgroundCGColor;
-(id)keyedLayers;
-(id)allEffectContainers;
-(id)allSongs;
-(double)posterTime;
-(void)setIsDocumentLayerGroup:(BOOL)arg1 ;
-(id)absoluteVideoPaths;
-(BOOL)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(BOOL)layersCanPositionZIndex;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(double)xRotationAngle;
-(double)yRotationAngle;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(double)timeIn;
-(BOOL)startsPaused;
-(id)layerKeyDictionary;
-(id)layerKey;
-(double)durationPadding;
-(id)liveLock;
-(void)setAutoAdjustDuration:(BOOL)arg1 ;
-(void)copyLayers:(id)arg1 ;
-(void)copyLayerDictionary:(id)arg1 ;
-(long long)lastSlideUsed;
@end

