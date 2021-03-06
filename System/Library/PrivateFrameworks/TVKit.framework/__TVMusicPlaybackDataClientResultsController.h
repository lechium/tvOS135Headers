/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/__TVMusicDataClientResultsController.h>

@class TVCKDataCollection, NSString;

@interface __TVMusicPlaybackDataClientResultsController : __TVMusicDataClientResultsController {

	TVCKDataCollection* _album;
	TVCKDataCollection* _artistOrComposer;
	BOOL _isComposer;
	NSString* _genreName;

}
-(id)queryForController:(id)arg1 ;
-(id)initWithArtist:(id)arg1 genre:(id)arg2 ;
-(id)initWithAlbum:(id)arg1 genre:(id)arg2 ;
-(id)initWithComposer:(id)arg1 genre:(id)arg2 ;
@end

