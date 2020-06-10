/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary, NSMutableDictionary;

@interface ML3ArtworkConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSDictionary* _artworkConfigurationDictionary;
	NSMutableDictionary* _supportedSizesCache;
	double _mainScreenScale;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessQueue;                   //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * artworkConfigurationDictionary;              //@synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supportedSizesCache;                  //@synthesize supportedSizesCache=_supportedSizesCache - In the implementation block
@property (assign,nonatomic) double mainScreenScale;                                     //@synthesize mainScreenScale=_mainScreenScale - In the implementation block
+(id)systemConfiguration;
-(id)description;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)sizesToAutogenerateForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)initWithConfigurationDictionaries:(id)arg1 ;
-(NSMutableDictionary *)supportedSizesCache;
-(id)_supportedSizeKeysForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(id)supportedSizesForMediaType:(unsigned)arg1 artworkType:(long long)arg2 ;
-(NSDictionary *)artworkConfigurationDictionary;
-(void)setArtworkConfigurationDictionary:(NSDictionary *)arg1 ;
-(void)setSupportedSizesCache:(NSMutableDictionary *)arg1 ;
-(double)mainScreenScale;
-(void)setMainScreenScale:(double)arg1 ;
@end

