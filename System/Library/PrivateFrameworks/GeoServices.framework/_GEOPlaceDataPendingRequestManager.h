/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _GEOPlaceDataPendingRequestManager : NSObject {

	NSMutableDictionary* _requestHandlersPending;

}
-(id)init;
-(id)_finished:(id)arg1 withResult:(id)arg2 error:(id)arg3 ;
-(void)_cleanUpFinishedHandlers:(id)arg1 ;
-(void)failedToResolveIdentifiers:(id)arg1 withError:(id)arg2 ;
-(void)willUpdateExpiredIdentifiers:(id)arg1 ;
-(id)identifiersRequested:(id)arg1 forHandler:(/*^block*/id)arg2 ;
-(void)didResolveItems:(id)arg1 forIdentifiers:(id)arg2 ;
-(void)_failAllPendingRequests;
@end

