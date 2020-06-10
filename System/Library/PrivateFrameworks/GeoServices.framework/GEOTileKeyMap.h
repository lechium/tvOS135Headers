/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTileKeyMap : NSObject <NSCopying> {

	long long _type;
	void* _map;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(const GEOTileKey*)arg1 ;
-(void)removeObjectForKey:(const GEOTileKey*)arg1 ;
-(void)setObject:(id)arg1 forKey:(const GEOTileKey*)arg2 ;
-(void)reserveCapacity:(unsigned long long)arg1 ;
-(id)initWithMapType:(long long)arg1 ;
-(id)contentsDescription;
@end

