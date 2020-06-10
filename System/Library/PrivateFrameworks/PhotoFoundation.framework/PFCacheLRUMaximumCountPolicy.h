/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFCachePolicy.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableArray;

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy {

	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _maximumCount;
	NSMutableSet* _considerationSet;
	NSMutableArray* _orderedConsiderationList;

}
+(id)policyWithMaximumCount:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(void)didAddCacheEntry:(id)arg1 ;
-(void)didRemoveCacheEntry:(id)arg1 ;
-(id)willAddOrReplaceEntry:(id)arg1 add:(BOOL)arg2 contents:(id)arg3 ;
-(void)didGetCacheEntry:(id)arg1 ;
-(unsigned long long)capacityHint;
-(void)didRemoveAllCacheEntries;
-(void)_buildConsiderationSet:(id)arg1 ;
-(id)_keyToEvict:(id)arg1 ;
@end
