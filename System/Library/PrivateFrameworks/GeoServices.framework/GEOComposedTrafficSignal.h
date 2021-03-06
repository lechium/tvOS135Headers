/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOComposedEnrouteNotice.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GEOTrafficSignal;

@interface GEOComposedTrafficSignal : GEOComposedEnrouteNotice <NSSecureCoding> {

	GEOTrafficSignal* _trafficSignal;

}

@property (nonatomic,readonly) int type; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(int)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)position;
-(id)initWithEnrouteNotice:(id)arg1 trafficSignal:(id)arg2 onRoute:(id)arg3 ;
@end

