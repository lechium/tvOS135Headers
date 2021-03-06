/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSDictionary;

@interface GEOLocalizationRegionsInfo : NSObject {

	NSDictionary* _regions;
	os_unfair_lock_s _regionsLock;

}
-(id)init;
-(void)reset;
-(BOOL)needsLocalizationForKey:(const GEOTileKey*)arg1 language:(id)arg2 ;
@end

