/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGGraphNode.h>

@class NSSet, NSNumber, NSString;

@interface PGGraphMusicTrackNode : PGGraphNode

@property (nonatomic,readonly) NSSet * albumNodes; 
@property (nonatomic,readonly) NSSet * genreNodes; 
@property (nonatomic,readonly) NSSet * artistNodes; 
@property (nonatomic,readonly) NSNumber * durationInSeconds; 
@property (nonatomic,readonly) NSString * title; 
+(id)musicTrackTitleSortDescriptors;
-(id)description;
-(NSString *)title;
-(NSNumber *)durationInSeconds;
-(void)enumerateAlbumNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateGenreNodesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateArtistNodesUsingBlock:(/*^block*/id)arg1 ;
-(NSSet *)albumNodes;
-(NSSet *)genreNodes;
-(NSSet *)artistNodes;
@end

