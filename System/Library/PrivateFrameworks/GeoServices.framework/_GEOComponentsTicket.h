/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class NSDictionary, GEOMapItemIdentifier, NSString;

@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {

	NSDictionary* _components;
	GEOMapItemIdentifier* _identifier;
	int _resultProviderID;
	NSString* _contentProvider;

}
-(id)description;
-(SCD_Struct_GE2)dataRequestKind;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(/*^block*/id)arg4 ;
-(id)initWithTraits:(id)arg1 ;
-(id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5 ;
@end
