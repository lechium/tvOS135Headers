/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class IKAppPlayerBridge, NSNumber, NSDate, IKAppDocument, NSArray, NSDictionary;


@protocol IKAppPlayer <NSObject>
@property (nonatomic,readonly) IKAppPlayerBridge * bridge; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain) id<IKAppPlaylist> playlist; 
@property (nonatomic,readonly) NSNumber * currentMediaItemDuration; 
@property (nonatomic,readonly) NSDate * currentMediaItemDate; 
@property (nonatomic,readonly) id<IKAppMediaItem> currentMediaItem; 
@property (nonatomic,readonly) double scanRate; 
@property (assign,nonatomic) BOOL muted; 
@property (assign,nonatomic) BOOL showsResumeMenu; 
@property (nonatomic,readonly) id<IKAppMediaItem> nextMediaItem; 
@property (nonatomic,readonly) id<IKAppMediaItem> previousMediaItem; 
@property (nonatomic,retain) IKAppDocument * overlayDocument; 
@property (nonatomic,retain) IKAppDocument * interactiveOverlayDocument; 
@property (assign,nonatomic) BOOL interactiveOverlayDismissable; 
@property (nonatomic,readonly) NSArray * currentMediaItemAccessLogs; 
@property (nonatomic,readonly) NSArray * currentMediaItemErrorLogs; 
@property (nonatomic,copy) NSDictionary * contextMenuData; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@required
-(NSDictionary *)userInfo;
-(long long)state;
-(void)stop;
-(void)cleanup;
-(void)setUserInfo:(id)arg1;
-(void)pause;
-(void)next;
-(void)previous;
-(void)present;
-(void)setElapsedTime:(double)arg1;
-(void)play;
-(void)setMuted:(BOOL)arg1;
-(BOOL)muted;
-(IKAppPlayerBridge *)bridge;
-(void)scan:(double)arg1;
-(double)scanRate;
-(id<IKAppPlaylist>)playlist;
-(void)setPlaylist:(id)arg1;
-(BOOL)showsResumeMenu;
-(void)setShowsResumeMenu:(BOOL)arg1;
-(IKAppDocument *)overlayDocument;
-(void)setOverlayDocument:(id)arg1;
-(IKAppDocument *)interactiveOverlayDocument;
-(void)setInteractiveOverlayDocument:(id)arg1;
-(BOOL)interactiveOverlayDismissable;
-(void)setInteractiveOverlayDismissable:(BOOL)arg1;
-(NSDictionary *)contextMenuData;
-(void)setContextMenuData:(id)arg1;
-(void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
-(void)changeToMediaAtIndex:(long long)arg1;
-(void)stopObservingEvent:(id)arg1;
-(NSNumber *)currentMediaItemDuration;
-(NSDate *)currentMediaItemDate;
-(id<IKAppMediaItem>)currentMediaItem;
-(id<IKAppMediaItem>)nextMediaItem;
-(id<IKAppMediaItem>)previousMediaItem;
-(NSArray *)currentMediaItemAccessLogs;
-(NSArray *)currentMediaItemErrorLogs;

@end

