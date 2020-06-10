/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPPlayableContentManagerContext : NSObject {

	BOOL _contentLimitsEnforced;
	BOOL _endpointAvailable;
	long long _enforcedContentItemsCount;
	long long _enforcedContentTreeDepth;

}

@property (assign,nonatomic) long long enforcedContentItemsCount;              //@synthesize enforcedContentItemsCount=_enforcedContentItemsCount - In the implementation block
@property (assign,nonatomic) long long enforcedContentTreeDepth;               //@synthesize enforcedContentTreeDepth=_enforcedContentTreeDepth - In the implementation block
@property (assign,nonatomic) BOOL contentLimitsEnforced;                       //@synthesize contentLimitsEnforced=_contentLimitsEnforced - In the implementation block
@property (assign,nonatomic) BOOL endpointAvailable;                           //@synthesize endpointAvailable=_endpointAvailable - In the implementation block
@property (nonatomic,readonly) BOOL contentLimitsEnabled; 
-(BOOL)contentLimitsEnabled;
-(long long)enforcedContentItemsCount;
-(void)setEnforcedContentItemsCount:(long long)arg1 ;
-(long long)enforcedContentTreeDepth;
-(void)setEnforcedContentTreeDepth:(long long)arg1 ;
-(BOOL)contentLimitsEnforced;
-(void)setContentLimitsEnforced:(BOOL)arg1 ;
-(BOOL)endpointAvailable;
-(void)setEndpointAvailable:(BOOL)arg1 ;
@end

