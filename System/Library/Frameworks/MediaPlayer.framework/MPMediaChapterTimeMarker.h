/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPTimeMarker.h>

@class NSArray;

@interface MPMediaChapterTimeMarker : MPTimeMarker {

	unsigned long long _chapterIndex;
	NSArray* _chapters;
	BOOL _hasArtworkAtPlaybackTime;

}

@property (assign,nonatomic) unsigned long long chapterIndex;              //@synthesize chapterIndex=_chapterIndex - In the implementation block
@property (nonatomic,retain) NSArray * chapters;                           //@synthesize chapters=_chapters - In the implementation block
@property (assign,nonatomic) BOOL hasArtworkAtPlaybackTime;                //@synthesize hasArtworkAtPlaybackTime=_hasArtworkAtPlaybackTime - In the implementation block
-(unsigned long long)chapterIndex;
-(BOOL)hasArtworkAtPlaybackTime;
-(NSArray *)chapters;
-(void)setChapterIndex:(unsigned long long)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(void)setHasArtworkAtPlaybackTime:(BOOL)arg1 ;
@end

