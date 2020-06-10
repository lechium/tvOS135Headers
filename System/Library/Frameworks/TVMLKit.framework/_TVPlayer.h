/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/IKAppPlayer.h>
#import <TVMLKit/TVPlayerBridging.h>

@protocol IKAppPlaylist, TVPlaying;
@class IKAppPlayerBridge, NSNumber, NSDate, IKAppDocument, NSArray, NSDictionary, TVPMusicContextMenuData, UINavigationController, NSString;

@interface _TVPlayer : NSObject <IKAppPlayer, TVPlayerBridging> {

	TVPMusicContextMenuData* _playbackViewControllerContextMenuData;
	struct {
		BOOL hasUserInfo;
		BOOL hasScanRate;
		BOOL hasMuted;
		BOOL hasShowsResumeMenu;
		BOOL hasNextMediaItem;
		BOOL hasPreviousMediaItem;
		BOOL hasPause;
		BOOL hasNext;
		BOOL hasPrevious;
		BOOL hasChangeToMediaItemAtIndex;
		BOOL hasStartObservingEvent;
		BOOL hasStopObservingEvent;
		BOOL hasCurrentMediaItemHasVideoContent;
		BOOL hasPreventsSleepDuringVideoPlayback;
		BOOL hasUpdatesMediaRemoteInfoAutomatically;
		BOOL hasPausesOnHDCPProtectionDown;
		BOOL hasReset;
		BOOL hasPlaybackDate;
		BOOL hasAccessLogs;
		BOOL hasErrorLogs;
		BOOL hasResumeBehavior;
	}  _playerFlags;
	BOOL _interactiveOverlayDismissable;
	BOOL _presentsImplicitlyOnPlay;
	id<IKAppPlaylist> _playlist;
	IKAppDocument* _overlayDocument;
	IKAppDocument* _interactiveOverlayDocument;
	NSDictionary* _contextMenuData;
	IKAppPlayerBridge* _bridge;
	UINavigationController* _navigationController;
	id<TVPlaying> _playerImpl;

}

@property (nonatomic,retain) id<TVPlaying> playerImpl;                                          //@synthesize playerImpl=_playerImpl - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) IKAppPlayerBridge * bridge;                                        //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) BOOL isInternalPlayerImpl; 
@property (assign,nonatomic) BOOL presentsImplicitlyOnPlay;                                     //@synthesize presentsImplicitlyOnPlay=_presentsImplicitlyOnPlay - In the implementation block
@property (nonatomic,readonly) BOOL currentMediaItemHasVideoContent; 
@property (assign,nonatomic) BOOL preventsSleepDuringVideoPlayback; 
@property (assign,nonatomic) BOOL updatesMediaRemoteInfoAutomatically; 
@property (assign,nonatomic) BOOL pausesOnHDCPProtectionDown; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain) id<IKAppPlaylist> playlist;                                        //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (nonatomic,readonly) id<IKAppMediaItem> currentMediaItem; 
@property (nonatomic,readonly) double scanRate; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,readonly) id<IKAppMediaItem> nextMediaItem; 
@property (nonatomic,readonly) id<IKAppMediaItem> previousMediaItem; 
@property (nonatomic,retain) IKAppDocument * overlayDocument;                                   //@synthesize overlayDocument=_overlayDocument - In the implementation block
@property (nonatomic,retain) IKAppDocument * interactiveOverlayDocument;                        //@synthesize interactiveOverlayDocument=_interactiveOverlayDocument - In the implementation block
@property (assign,nonatomic) BOOL interactiveOverlayDismissable;                                //@synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable - In the implementation block
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData;                                      //@synthesize contextMenuData=_contextMenuData - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
-(void)dealloc;
-(NSDictionary *)userInfo;
-(long long)state;
-(void)stop;
-(void)cleanup;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)reset;
-(void)next;
-(void)previous;
-(void)present;
-(id)initWithPlayer:(id)arg1 ;
-(void)setElapsedTime:(double)arg1 ;
-(void)play;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)muted;
-(IKAppPlayerBridge *)bridge;
-(void)setBridge:(IKAppPlayerBridge *)arg1 ;
-(void)scan:(double)arg1 ;
-(double)scanRate;
-(id<IKAppPlaylist>)playlist;
-(void)setPlaylist:(id<IKAppPlaylist>)arg1 ;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1 ;
-(IKAppDocument *)overlayDocument;
-(void)setOverlayDocument:(IKAppDocument *)arg1 ;
-(IKAppDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(IKAppDocument *)arg1 ;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1 ;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(NSDictionary *)arg1 ;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2 ;
-(void)changeToMediaAtIndex:(long long)arg1 ;
-(void)stopObservingEvent:(id)arg1 ;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(id<IKAppMediaItem>)currentMediaItem;
-(id<IKAppMediaItem>)nextMediaItem;
-(id<IKAppMediaItem>)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;
-(void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPreventsSleepDuringVideoPlayback:(BOOL)arg1 ;
-(BOOL)preventsSleepDuringVideoPlayback;
-(void)setUpdatesMediaRemoteInfoAutomatically:(BOOL)arg1 ;
-(void)setPausesOnHDCPProtectionDown:(BOOL)arg1 ;
-(id<TVPlaying>)playerImpl;
-(BOOL)isInternalPlayerImpl;
-(BOOL)currentMediaItemHasVideoContent;
-(BOOL)updatesMediaRemoteInfoAutomatically;
-(BOOL)pausesOnHDCPProtectionDown;
-(void)presentWithAnimation:(BOOL)arg1 ;
-(id)initWithIKAppPlayer:(id)arg1 navigationController:(id)arg2 ;
-(void)setPresentsImplicitlyOnPlay:(BOOL)arg1 ;
-(void)_present:(BOOL)arg1 ;
-(BOOL)presentsImplicitlyOnPlay;
-(id)_ikMediaItemForPublicObj:(id)arg1 ;
-(void)setPlayerImpl:(id<TVPlaying>)arg1 ;
@end

