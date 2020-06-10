/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPrioritizedTileKeys : NSObject {

	void* _keysAndPriorities;

}

@property (nonatomic,readonly) unsigned highestPriority; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeKey:(const GEOTileKey*)arg1 ;
-(void)setPriority:(unsigned)arg1 forKey:(const GEOTileKey*)arg2 ;
-(unsigned)highestPriority;
-(BOOL)popHighestPriorityKey:(GEOTileKey*)arg1 priority:(unsigned*)arg2 ;
-(id)initWithKeys:(id)arg1 priorities:(id)arg2 ;
@end

