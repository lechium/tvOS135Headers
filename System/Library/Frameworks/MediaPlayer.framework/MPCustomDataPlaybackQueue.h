/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString, NSData;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSData *)data;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 ;
@end
