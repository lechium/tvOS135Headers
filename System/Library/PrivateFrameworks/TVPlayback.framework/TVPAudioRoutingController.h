/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPAudioRoutingControllerDelegate;
@class TVPAudioRoute, NSArray, TVPAudioRouteVolume, NSMutableArray;

@interface TVPAudioRoutingController : NSObject {

	BOOL _volumeControlAvailable;
	BOOL _alternateRoutesAvailable;
	BOOL _fetchingRoutes;
	TVPAudioRoute* _defaultRouteOrNull;
	TVPAudioRoute* _selectedRouteOrNull;
	NSArray* _availableRoutes;
	NSArray* _knownRoutes;
	NSArray* _otherRoutes;
	id<TVPAudioRoutingControllerDelegate> _delegate;
	long long _discoveryMode;
	TVPAudioRouteVolume* _selectedRouteVolume;
	NSMutableArray* _fetchCompletionHandlers;

}

@property (nonatomic,retain) TVPAudioRouteVolume * selectedRouteVolume;                          //@synthesize selectedRouteVolume=_selectedRouteVolume - In the implementation block
@property (assign,nonatomic) BOOL volumeControlAvailable;                                        //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (assign,nonatomic) BOOL alternateRoutesAvailable;                                      //@synthesize alternateRoutesAvailable=_alternateRoutesAvailable - In the implementation block
@property (assign,nonatomic) BOOL fetchingRoutes;                                                //@synthesize fetchingRoutes=_fetchingRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchCompletionHandlers;                           //@synthesize fetchCompletionHandlers=_fetchCompletionHandlers - In the implementation block
@property (assign,nonatomic,__weak) id<TVPAudioRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long discoveryMode;                                            //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableRoutes;                                   //@synthesize availableRoutes=_availableRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * knownRoutes;                                       //@synthesize knownRoutes=_knownRoutes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * otherRoutes;                                       //@synthesize otherRoutes=_otherRoutes - In the implementation block
@property (nonatomic,readonly) TVPAudioRoute * defaultRoute;                                     //@synthesize defaultRouteOrNull=_defaultRouteOrNull - In the implementation block
@property (nonatomic,readonly) TVPAudioRoute * selectedRoute;                                    //@synthesize selectedRouteOrNull=_selectedRouteOrNull - In the implementation block
+(void)_updateEffectiveDiscoveryMode;
+(id)_sharedSelectedRouteVolume;
+(unsigned)_MRDiscoveryModeForDiscoveryMode:(long long)arg1 ;
+(BOOL)automaticallyNotifiesObserversOfSelectedRouteVolume;
-(id)init;
-(void)dealloc;
-(id<TVPAudioRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<TVPAudioRoutingControllerDelegate>)arg1 ;
-(long long)discoveryMode;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)_registerForNotifications;
-(void)setVolumeControlAvailable:(BOOL)arg1 ;
-(BOOL)volumeControlAvailable;
-(TVPAudioRoute *)defaultRoute;
-(NSArray *)availableRoutes;
-(void)fetchAvailableRoutesWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)selectRoute:(id)arg1 withPassword:(id)arg2 ;
-(NSArray *)knownRoutes;
-(NSArray *)otherRoutes;
-(TVPAudioRoute *)selectedRoute;
-(void)_deregisterForNotifications;
-(void)_updateAudioRoutesFromRouteDescriptions:(id)arg1 ;
-(id)_knownRoutesFromAvailableRoutes:(id)arg1 ;
-(void)_updateKnownRoutesWithRoute:(id)arg1 ;
-(void)serverDied:(id)arg1 ;
-(void)routesChanged:(id)arg1 ;
-(void)setAlternateRoutesAvailable:(BOOL)arg1 ;
-(void)_updateVolumeControl;
-(TVPAudioRouteVolume *)selectedRouteVolume;
-(void)setSelectedRouteVolume:(TVPAudioRouteVolume *)arg1 ;
-(BOOL)alternateRoutesAvailable;
-(BOOL)fetchingRoutes;
-(void)setFetchingRoutes:(BOOL)arg1 ;
-(NSMutableArray *)fetchCompletionHandlers;
-(void)setFetchCompletionHandlers:(NSMutableArray *)arg1 ;
@end

