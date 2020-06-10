/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFCacheStatistics : NSObject {

	unsigned long long _hits;
	unsigned long long _misses;
	unsigned long long _evictions;

}

@property (readonly) unsigned long long hits;                   //@synthesize hits=_hits - In the implementation block
@property (readonly) unsigned long long misses;                 //@synthesize misses=_misses - In the implementation block
@property (readonly) unsigned long long evictions;              //@synthesize evictions=_evictions - In the implementation block
-(id)description;
-(unsigned long long)hits;
-(void)recordEvictions:(unsigned long long)arg1 ;
-(void)recordMiss;
-(void)recordHit;
-(void)accumulate:(id)arg1 ;
-(unsigned long long)misses;
-(unsigned long long)evictions;
@end

