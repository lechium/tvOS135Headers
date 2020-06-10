/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject {

	CLLocation* _center;
	NSMutableArray* _locations;

}

@property (nonatomic,retain) CLLocation * center;                     //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)groupWithCenter:(id)arg1 ;
-(NSMutableArray *)locations;
-(void)setLocations:(NSMutableArray *)arg1 ;
-(CLLocation *)center;
-(void)setCenter:(CLLocation *)arg1 ;
@end

