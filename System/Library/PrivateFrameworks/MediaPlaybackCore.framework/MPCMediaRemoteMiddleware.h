/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCResponseMediaRemoteControllerChaining.h>
#import <libobjc.A.dylib/MPCPlayerResponseBuilder.h>
#import <libobjc.A.dylib/MPCPlayerSessionResponseBuilder.h>
#import <libobjc.A.dylib/_MPCStateDumpPropertyListTransformable.h>
#import <libobjc.A.dylib/MPMiddleware.h>

@protocol MPCSupportedCommands;
@class NSArray, MPCFuture, MPCMediaRemoteController, MPSectionedCollection, NSIndexPath, NSString;

@interface MPCMediaRemoteMiddleware : NSObject <MPCResponseMediaRemoteControllerChaining, MPCPlayerResponseBuilder, MPCPlayerSessionResponseBuilder, _MPCStateDumpPropertyListTransformable, MPMiddleware> {

	BOOL _skippedMetadata;
	NSArray* _invalidationObservers;
	MPCFuture* _controllerFuture;
	MPCMediaRemoteController* _controller;
	MPSectionedCollection* _queueContentItems;
	MPSectionedCollection* _queueModelObjects;
	id<MPCSupportedCommands> _supportedCommands;
	NSIndexPath* _playingIndexPath;
	NSString* _queueIdentifier;
	long long _playerState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL skippedMetadata;                                  //@synthesize skippedMetadata=_skippedMetadata - In the implementation block
@property (nonatomic,retain) MPCFuture * controllerFuture;                            //@synthesize controllerFuture=_controllerFuture - In the implementation block
@property (nonatomic,retain) MPCMediaRemoteController * controller;                   //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueContentItems;               //@synthesize queueContentItems=_queueContentItems - In the implementation block
@property (nonatomic,retain) MPSectionedCollection * queueModelObjects;               //@synthesize queueModelObjects=_queueModelObjects - In the implementation block
@property (nonatomic,retain) id<MPCSupportedCommands> supportedCommands;              //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) NSIndexPath * playingIndexPath;                            //@synthesize playingIndexPath=_playingIndexPath - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                                //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (assign,nonatomic) long long playerState;                                   //@synthesize playerState=_playerState - In the implementation block
@property (nonatomic,retain) NSArray * invalidationObservers;                         //@synthesize invalidationObservers=_invalidationObservers - In the implementation block
-(id)init;
-(void)setController:(MPCMediaRemoteController *)arg1 ;
-(id<MPCSupportedCommands>)supportedCommands;
-(void)setSupportedCommands:(id<MPCSupportedCommands>)arg1 ;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
-(MPCMediaRemoteController *)controller;
-(id)_stateDumpObject;
-(NSArray *)invalidationObservers;
-(id)operationsForRequest:(id)arg1 ;
-(void)setInvalidationObservers:(NSArray *)arg1 ;
-(MPCFuture *)controllerFuture;
-(NSIndexPath *)playingIndexPath;
-(void)setPlayingIndexPath:(NSIndexPath *)arg1 ;
-(void)setQueueContentItems:(MPSectionedCollection *)arg1 ;
-(void)setQueueModelObjects:(MPSectionedCollection *)arg1 ;
-(MPSectionedCollection *)queueModelObjects;
-(MPSectionedCollection *)queueContentItems;
-(id)controller:(id)arg1 chain:(id)arg2 ;
-(long long)sessionNumberOfPlayerPaths:(long long)arg1 chain:(id)arg2 ;
-(long long)sessionNumberOfSessions:(long long)arg1 forPlayerPathAtIndex:(long long)arg2 chain:(id)arg3 ;
-(id)sessionPlayerPath:(id)arg1 atIndex:(long long)arg2 chain:(id)arg3 ;
-(id)sessionMetadataObject:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(void)setPlayerState:(long long)arg1 ;
-(long long)playerState:(long long)arg1 chain:(id)arg2 ;
-(id)tracklistUniqueIdentifier:(id)arg1 chain:(id)arg2 ;
-(long long)playerRepeatType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerShuffleType:(long long)arg1 chain:(id)arg2 ;
-(long long)playerQueueEndAction:(long long)arg1 chain:(id)arg2 ;
-(long long)playerLastChangeDirection:(long long)arg1 chain:(id)arg2 ;
-(long long)playerUpNextItemCount:(long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfSections:(unsigned long long)arg1 chain:(id)arg2 ;
-(unsigned long long)playerNumberOfItems:(unsigned long long)arg1 inSection:(unsigned long long)arg2 chain:(id)arg3 ;
-(SCD_Struct_MP8)playerItemDuration:(SCD_Struct_MP8)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerItemLocalizedDurationString:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerItemExplicitBadge:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(long long)playerItemEditingStyleFlags:(long long)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(BOOL)playerItemIsPlaceholder:(BOOL)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerModelObject:(id)arg1 propertySet:(id)arg2 atIndexPath:(id)arg3 chain:(id)arg4 ;
-(id)playerPlayingItemIndexPath:(id)arg1 chain:(id)arg2 ;
-(long long)playerPlayingItemGlobalIndex:(long long)arg1 chain:(id)arg2 ;
-(long long)playerGlobalItemCount:(long long)arg1 chain:(id)arg2 ;
-(id)playerItemLanguageOptionGroups:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(id)playerItemCurrentLanguageOptions:(id)arg1 atIndexPath:(id)arg2 chain:(id)arg3 ;
-(BOOL)playerCommandSupported:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(BOOL)playerCommandEnabled:(BOOL)arg1 command:(unsigned)arg2 chain:(id)arg3 ;
-(id)playerCommandOptionValue:(id)arg1 forKey:(id)arg2 command:(unsigned)arg3 chain:(id)arg4 ;
-(id)operationsForPlayerRequest:(id)arg1 ;
-(void)setControllerFuture:(MPCFuture *)arg1 ;
-(id)operationsForSessionRequest:(id)arg1 ;
-(long long)playerState;
-(BOOL)skippedMetadata;
-(id)_supportedCommands:(unsigned)arg1 infoValueForKey:(id)arg2 ;
-(float)_playbackRateForContentItem:(id)arg1 ;
@end

