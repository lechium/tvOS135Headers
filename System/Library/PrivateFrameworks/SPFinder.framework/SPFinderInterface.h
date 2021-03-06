/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPAdvertisementCache;

@interface SPFinderInterface : NSObject {

	SPAdvertisementCache* _advertisementCache;

}

@property (nonatomic,retain) SPAdvertisementCache * advertisementCache;              //@synthesize advertisementCache=_advertisementCache - In the implementation block
-(id)stateManager;
-(SPAdvertisementCache *)advertisementCache;
-(id)beaconPayloadCache;
-(id)finderStateManager;
-(void)setAdvertisementCache:(SPAdvertisementCache *)arg1 ;
@end

