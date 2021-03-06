/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLDataCluster : NSObject {

	NSArray* _objects;
	double _diameter;
	id _clustroid;
	double _score;

}

@property (nonatomic,retain) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
@property (assign,nonatomic) double diameter;                //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) id clustroid;                   //@synthesize clustroid=_clustroid - In the implementation block
@property (assign,nonatomic) double score;                   //@synthesize score=_score - In the implementation block
+(id)clusterWithObjects:(id)arg1 ;
+(id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3 ;
-(id)description;
-(id)init;
-(double)score;
-(NSArray *)objects;
-(id)locations;
-(void)setScore:(double)arg1 ;
-(void)setObjects:(NSArray *)arg1 ;
-(id)approximateRegionWithMaximumRadius:(double)arg1 ;
-(void)setClustroid:(id)arg1 ;
-(id)meanRegion:(double)arg1 ;
-(id)universalDates;
-(id)meanUniversalDate;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)clustroid;
@end

