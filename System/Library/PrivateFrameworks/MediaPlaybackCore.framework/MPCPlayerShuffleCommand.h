/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPCPlayerShuffleCommand <MPCPlayerCommand>
@property (nonatomic,readonly) NSArray * supportedShuffleTypes; 
@required
-(id)advance;
-(id)setShuffleType:(long long)arg1;
-(NSArray *)supportedShuffleTypes;

@end

