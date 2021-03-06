/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPBeaconPayloadCaching <NSObject>
@required
-(void)saveBeaconPayloads:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconPayloadsForSearchCriteria:(id)arg1 completion:(/*^block*/id)arg2;
-(void)beaconAdvertisementAtFileURL:(id)arg1 beaconIdentifier:(id)arg2 scanDate:(id)arg3 completion:(/*^block*/id)arg4;
-(void)markBeaconPayloadsProcessed:(id)arg1 completion:(/*^block*/id)arg2;

@end

