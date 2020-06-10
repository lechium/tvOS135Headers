/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVPlayerItemErrorLog, NSData, NSArray;

@interface MPMovieErrorLog : NSObject <NSCopying> {

	AVPlayerItemErrorLog* _errorLog;

}

@property (nonatomic,readonly) NSData * extendedLogData; 
@property (nonatomic,readonly) unsigned long long extendedLogDataStringEncoding; 
@property (nonatomic,readonly) NSArray * events; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)events;
-(NSData *)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(id)_initWithAVItemErrorLog:(id)arg1 ;
@end
