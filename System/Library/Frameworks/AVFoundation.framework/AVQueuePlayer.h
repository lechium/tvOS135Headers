/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVPlayer.h>

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {

	AVQueuePlayerInternal* _queuePlayer;

}
+(void)initialize;
+(id)queuePlayerWithItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeAllItems;
-(id)items;
-(void)removeItem:(id)arg1 ;
-(void)setActionAtItemEnd:(long long)arg1 ;
-(void)insertItem:(id)arg1 afterItem:(id)arg2 ;
-(id)initWithItems:(id)arg1 ;
-(long long)_defaultActionAtItemEnd;
-(void)advanceToNextItem;
-(BOOL)canInsertItem:(id)arg1 afterItem:(id)arg2 ;
-(BOOL)canOverlapPlaybackFromPlayerItem:(id)arg1 toPlayerItem:(id)arg2 ;
@end
