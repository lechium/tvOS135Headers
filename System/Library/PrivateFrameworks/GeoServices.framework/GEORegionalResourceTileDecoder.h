/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTileDecoder.h>

@class NSString;

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2 ;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
@end

