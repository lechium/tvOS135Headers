/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink;

@interface ISDisplayLink : NSObject {

	long long _preferredFramesPerSecond;
	/*^block*/id _updateHandler;
	/*^block*/id _completionHandler;
	CADisplayLink* _displayLink;

}

@property (nonatomic,copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,copy) id completionHandler;                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;                     //@synthesize displayLink=_displayLink - In the implementation block
@property (assign,nonatomic) long long preferredFramesPerSecond;              //@synthesize preferredFramesPerSecond=_preferredFramesPerSecond - In the implementation block
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)_update:(id)arg1 ;
-(void)setUpdateHandler:(id)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(long long)preferredFramesPerSecond;
-(CADisplayLink *)displayLink;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(id)updateHandler;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_callUpdateHandler;
@end
