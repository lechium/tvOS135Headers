/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSString;

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent {

	NSString* _insertAfterContextItemID;
	long long _destinationOffset;

}

@property (nonatomic,readonly) NSString * insertAfterContextItemID;              //@synthesize insertAfterContextItemID=_insertAfterContextItemID - In the implementation block
@property (nonatomic,readonly) long long destinationOffset;                      //@synthesize destinationOffset=_destinationOffset - In the implementation block
-(id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned)arg2 options:(id)arg3 ;
-(NSString *)insertAfterContextItemID;
-(long long)destinationOffset;
@end

