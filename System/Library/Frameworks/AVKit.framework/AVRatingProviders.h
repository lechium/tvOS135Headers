/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AVRatingProviders : NSObject {

	NSDictionary* _plist;
	NSDictionary* _mapForMovies;
	NSDictionary* _mapForTVShows;

}

@property (nonatomic,copy) NSDictionary * plist;                          //@synthesize plist=_plist - In the implementation block
@property (nonatomic,readonly) NSDictionary * mapForMovies;               //@synthesize mapForMovies=_mapForMovies - In the implementation block
@property (nonatomic,readonly) NSDictionary * mapForTVShows;              //@synthesize mapForTVShows=_mapForTVShows - In the implementation block
+(id)shared;
+(id)ratingProvidersWithName:(id)arg1 ;
-(id)init;
-(void)setPlist:(NSDictionary *)arg1 ;
-(id)initWithFileURL:(id)arg1 ;
-(NSDictionary *)plist;
-(void)_loadRatingsMaps;
-(void)_loadRatingMapsIfNeeded;
-(id)_movieMapForRating:(id)arg1 ;
-(id)_tvShowsMapForRating:(id)arg1 ;
-(id)findRatingString:(id)arg1 domain:(long long)arg2 country:(id)arg3 shouldPreferTVDomain:(BOOL)arg4 ;
-(id)findRatingString:(id)arg1 ;
-(NSDictionary *)mapForMovies;
-(NSDictionary *)mapForTVShows;
@end

