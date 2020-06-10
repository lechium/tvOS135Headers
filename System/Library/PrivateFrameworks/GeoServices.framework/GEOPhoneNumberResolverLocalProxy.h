/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOPhoneNumberResolving.h>

@class GEOPNRReadersCache, NSString;

@interface GEOPhoneNumberResolverLocalProxy : NSObject <GEOPhoneNumberResolving> {

	GEOPNRReadersCache* _readersCache;

}

@property (nonatomic,retain,readonly) GEOPNRReadersCache * readersCache;              //@synthesize readersCache=_readersCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(id)resolvedStringForCC:(id)arg1 inCountry:(id)arg2 locationIndex:(unsigned)arg3 error:(id*)arg4 ;
-(id)resolveUnknownFormatPhoneNumber:(id)arg1 inCountry:(id)arg2 withError:(id*)arg3 ;
-(void)resolvePhoneNumbers:(id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(GEOPNRReadersCache *)readersCache;
@end

