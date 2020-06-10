/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property (nonatomic,readonly) unsigned long long stationID; 
@property (nonatomic,readonly) double groundRadius; 
@property (nonatomic,readonly) unsigned char entranceExitType; 
@property (nonatomic,readonly) unsigned short accessType; 
@required
-(unsigned short)accessType;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)stationID;
-(double)groundRadius;
-(unsigned char)entranceExitType;

@end

