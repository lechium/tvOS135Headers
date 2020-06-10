/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUINowPlayingTimeBoundFeature.h>

@protocol VUINowPlayingTimeBoundFeature <VUINowPlayingFeature>
@property (assign,nonatomic) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isSkippable,nonatomic) BOOL skippable; 
@required
-(double)startTime;
-(void)setStartTime:(double)arg1;
-(double)duration;
-(BOOL)isSkippable;
-(void)setSkippable:(BOOL)arg1;

@end


@class NSString;

@interface VUINowPlayingTimeBoundFeature : NSObject <VUINowPlayingTimeBoundFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _skippable;
	double _startTime;
	double _duration;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (assign,nonatomic) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isSkippable,nonatomic) BOOL skippable;                    //@synthesize skippable=_skippable - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(double)startTime;
-(void)setUserInfo:(id)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(double)duration;
-(BOOL)isSkippable;
-(void)setSkippable:(BOOL)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3 ;
@end

