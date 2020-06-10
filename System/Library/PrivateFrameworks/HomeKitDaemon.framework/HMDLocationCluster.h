/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CLLocation;

@interface HMDLocationCluster : NSObject {

	NSArray* _groups;
	CLLocation* _homeLocation;
	NSArray* _locations;
	unsigned long long _numOfClusters;

}

@property (nonatomic,copy) NSArray * locations;                             //@synthesize locations=_locations - In the implementation block
@property (assign,nonatomic) unsigned long long numOfClusters;              //@synthesize numOfClusters=_numOfClusters - In the implementation block
@property (nonatomic,readonly) NSArray * groups;                            //@synthesize groups=_groups - In the implementation block
@property (nonatomic,readonly) CLLocation * homeLocation;                   //@synthesize homeLocation=_homeLocation - In the implementation block
-(NSArray *)groups;
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(CLLocation *)homeLocation;
-(id)initWithLocations:(id)arg1 ;
-(void)startGrouping;
-(void)setNumOfClusters:(unsigned long long)arg1 ;
-(void)startKMeans;
-(void)calculateHomeLocationFromGroups;
-(unsigned long long)numOfClusters;
-(void)clusterWithGroups:(id)arg1 ;
-(id)generateNewGroupsFromGroups:(id)arg1 ;
-(void)printGroups:(id)arg1 ;
@end

