/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:41 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVPMusicNowPlayingInvalidationContext : NSObject {

	BOOL _queue;
	BOOL _playingItem;
	NSString* _playingItemChangeReason;

}

@property (assign,nonatomic) BOOL queue;                                    //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL playingItem;                              //@synthesize playingItem=_playingItem - In the implementation block
@property (nonatomic,copy) NSString * playingItemChangeReason;              //@synthesize playingItemChangeReason=_playingItemChangeReason - In the implementation block
-(id)description;
-(void)setQueue:(BOOL)arg1 ;
-(BOOL)queue;
-(BOOL)playingItem;
-(NSString *)playingItemChangeReason;
-(void)setPlayingItem:(BOOL)arg1 ;
-(void)setPlayingItemChangeReason:(NSString *)arg1 ;
@end
