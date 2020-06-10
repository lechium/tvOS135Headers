/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSIndexSet;

@interface _CPLEngineScopeCache : NSObject {

	NSMutableDictionary* _scopeCache;
	NSMutableDictionary* _scopeByLocalIndex;
	NSMutableDictionary* _scopeByCloudIndex;
	NSMutableDictionary* _scopeByStableIndex;
	NSIndexSet* _validLocalIndexes;
	NSIndexSet* _validCloudIndexes;

}
-(id)init;
-(id)scopeWithIdentifier:(id)arg1 ;
-(void)cacheValidCloudIndexes:(id)arg1 ;
-(id)validCloudIndexes;
-(void)cacheValidLocalIndexes:(id)arg1 ;
-(id)validLocalIndexes;
-(id)scopeWithStableIndex:(long long)arg1 ;
-(id)scopeWithCloudIndex:(long long)arg1 ;
-(id)scopeWithLocalIndex:(long long)arg1 ;
-(void)cacheScope:(id)arg1 forScopeStorage:(id)arg2 ;
@end

