/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSMutableArray, NSMapTable;

@interface VMUVMRegionIdentifier : NSObject {

	unsigned _task;
	int _pid;
	NSMutableArray* _regions;
	NSMapTable* _mallocZoneStatisticsMap;
	BOOL _hasFractionalPageSizes;

}
+(id)descriptionForRange:(VMURange)arg1 inSortedRegions:(id)arg2 options:(unsigned long long)arg3 ;
-(id)init;
-(id)initWithTask:(unsigned)arg1 ;
-(id)regions;
-(id)initWithTask:(unsigned)arg1 options:(unsigned long long)arg2 ;
-(int)_recordRegionsAroundAddress:(unsigned long long)arg1 regionDescriptionOptions:(unsigned long long)arg2 ;
-(id)initWithTask:(unsigned)arg1 pid:(int)arg2 options:(unsigned long long)arg3 ;
-(id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 maximumLength:(unsigned long long)arg3 memorySizeDivisor:(unsigned)arg4 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)descriptionForMallocZoneTotalsWithOptions:(unsigned long long)arg1 memorySizeDivisor:(unsigned)arg2 ;
-(id)initWithGraph:(id)arg1 options:(unsigned long long)arg2 ;
-(id)nonSubmapRegionContainingAddress:(unsigned long long)arg1 ;
-(BOOL)hasFractionalPageSizes;
-(id)descriptionForRange:(VMURange)arg1 ;
-(id)descriptionForRange:(VMURange)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionOfRegionsAroundAddress:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)descriptionForRegionTotalsWithOptions:(unsigned long long)arg1 ;
@end

