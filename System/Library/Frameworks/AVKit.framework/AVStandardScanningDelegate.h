/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVScanningDelegate.h>

@class AVTimeRangeCollection, AVPlayer, AVKeyValueObserverCollection, CADisplayLink, NSString;

@interface AVStandardScanningDelegate : NSObject <AVScanningDelegate> {

	BOOL _scanningActive;
	BOOL _canPlayerServiceScan;
	BOOL _playerServicingScan;
	BOOL _starting;
	AVTimeRangeCollection* _interstitialTimeRangeCollection;
	AVPlayer* _player;
	AVKeyValueObserverCollection* _kvo;
	/*^block*/id _imageBlock;
	CADisplayLink* _displayLink;
	double _elapsedDisplayTimeWhenScanStarted;
	double _clockTimeWhenScanStarted;
	double _rate;
	double _minTime;
	double _maxTime;

}

@property (nonatomic,retain) AVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVKeyValueObserverCollection * kvo;                                   //@synthesize kvo=_kvo - In the implementation block
@property (assign,getter=isScanningActive,nonatomic) BOOL scanningActive;                          //@synthesize scanningActive=_scanningActive - In the implementation block
@property (nonatomic,copy) id imageBlock;                                                          //@synthesize imageBlock=_imageBlock - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                                          //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) double elapsedDisplayTimeWhenScanStarted;                             //@synthesize elapsedDisplayTimeWhenScanStarted=_elapsedDisplayTimeWhenScanStarted - In the implementation block
@property (assign,nonatomic) double clockTimeWhenScanStarted;                                      //@synthesize clockTimeWhenScanStarted=_clockTimeWhenScanStarted - In the implementation block
@property (assign,nonatomic) double rate;                                                          //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) BOOL canPlayerServiceScan;                                            //@synthesize canPlayerServiceScan=_canPlayerServiceScan - In the implementation block
@property (assign,getter=isPlayerServicingScan,nonatomic) BOOL playerServicingScan;                //@synthesize playerServicingScan=_playerServicingScan - In the implementation block
@property (assign,nonatomic) double minTime;                                                       //@synthesize minTime=_minTime - In the implementation block
@property (assign,nonatomic) double maxTime;                                                       //@synthesize maxTime=_maxTime - In the implementation block
@property (nonatomic,readonly) double _clockTimeElapsed; 
@property (nonatomic,readonly) double _currentScanningTimeInterval; 
@property (assign,getter=isStarting,nonatomic) BOOL starting;                                      //@synthesize starting=_starting - In the implementation block
@property (nonatomic,retain) AVTimeRangeCollection * interstitialTimeRangeCollection;              //@synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(double)maxTime;
-(AVTimeRangeCollection *)interstitialTimeRangeCollection;
-(void)setInterstitialTimeRangeCollection:(AVTimeRangeCollection *)arg1 ;
-(AVKeyValueObserverCollection *)kvo;
-(void)setKvo:(AVKeyValueObserverCollection *)arg1 ;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(void)startDisplayLink;
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_AV1)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4 ;
-(void)stopScanningPlayerViewController:(id)arg1 ;
-(void)setImageBlock:(id)arg1 ;
-(double)_clockTimeElapsed;
-(void)_updateMinMaxTimes;
-(double)_currentScanningTimeInterval;
-(void)setElapsedTimeWhenScanStarted:(SCD_Struct_AV1)arg1 ;
-(void)_didFireDisplayLink:(id)arg1 ;
-(BOOL)isScanningActive;
-(void)setScanningActive:(BOOL)arg1 ;
-(id)imageBlock;
-(double)elapsedDisplayTimeWhenScanStarted;
-(void)setElapsedDisplayTimeWhenScanStarted:(double)arg1 ;
-(double)clockTimeWhenScanStarted;
-(void)setClockTimeWhenScanStarted:(double)arg1 ;
-(BOOL)canPlayerServiceScan;
-(void)setCanPlayerServiceScan:(BOOL)arg1 ;
-(BOOL)isPlayerServicingScan;
-(void)setPlayerServicingScan:(BOOL)arg1 ;
-(BOOL)isStarting;
-(void)setStarting:(BOOL)arg1 ;
@end

