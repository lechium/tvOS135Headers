/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, geo_isolater;

@interface GEOMapRequestManager : NSObject {

	NSMutableSet* _requests;
	geo_isolater* _isolater;

}
-(id)init;
-(void)dealloc;
-(void)trackRequest:(id)arg1 ;
-(void)requestComplete:(id)arg1 ;
@end
