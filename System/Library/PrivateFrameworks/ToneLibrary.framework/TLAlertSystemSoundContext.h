/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TLAlertPlaybackObserver;
@class TLSystemSound, TLAlertPlaybackCompletionContext, NSString;

@interface TLAlertSystemSoundContext : NSObject {

	BOOL _hasPlaybackStarted;
	BOOL _beingInterrupted;
	BOOL _beingDeemphasized;
	BOOL _deemphasized;
	TLSystemSound* _sound;
	TLAlertPlaybackCompletionContext* _playbackCompletionContext;
	id<TLAlertPlaybackObserver> _playbackObserver;
	NSString* _toneIdentifierForDeemphasizingAlert;

}

@property (nonatomic,retain) TLSystemSound * sound;                                                     //@synthesize sound=_sound - In the implementation block
@property (nonatomic,retain) TLAlertPlaybackCompletionContext * playbackCompletionContext;              //@synthesize playbackCompletionContext=_playbackCompletionContext - In the implementation block
@property (assign,nonatomic,__weak) id<TLAlertPlaybackObserver> playbackObserver;                       //@synthesize playbackObserver=_playbackObserver - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackStarted;                                                   //@synthesize hasPlaybackStarted=_hasPlaybackStarted - In the implementation block
@property (assign,getter=isBeingInterrupted,nonatomic) BOOL beingInterrupted;                           //@synthesize beingInterrupted=_beingInterrupted - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifierForDeemphasizingAlert;                              //@synthesize toneIdentifierForDeemphasizingAlert=_toneIdentifierForDeemphasizingAlert - In the implementation block
@property (assign,getter=isBeingDeemphasized,nonatomic) BOOL beingDeemphasized;                         //@synthesize beingDeemphasized=_beingDeemphasized - In the implementation block
@property (assign,getter=isDeemphasized,nonatomic) BOOL deemphasized;                                   //@synthesize deemphasized=_deemphasized - In the implementation block
-(void)setSound:(TLSystemSound *)arg1 ;
-(TLSystemSound *)sound;
-(BOOL)isBeingInterrupted;
-(void)setBeingInterrupted:(BOOL)arg1 ;
-(id<TLAlertPlaybackObserver>)playbackObserver;
-(void)setToneIdentifierForDeemphasizingAlert:(NSString *)arg1 ;
-(void)setPlaybackCompletionContext:(TLAlertPlaybackCompletionContext *)arg1 ;
-(void)setPlaybackObserver:(id<TLAlertPlaybackObserver>)arg1 ;
-(void)setDeemphasized:(BOOL)arg1 ;
-(BOOL)hasPlaybackStarted;
-(void)setHasPlaybackStarted:(BOOL)arg1 ;
-(BOOL)isBeingDeemphasized;
-(void)setBeingDeemphasized:(BOOL)arg1 ;
-(TLAlertPlaybackCompletionContext *)playbackCompletionContext;
-(NSString *)toneIdentifierForDeemphasizingAlert;
-(BOOL)isDeemphasized;
@end

