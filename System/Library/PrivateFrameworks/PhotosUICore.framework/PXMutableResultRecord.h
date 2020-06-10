/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXResultRecord.h>

@class PHFetchResult, NSPredicate, NSSet;

@interface PXMutableResultRecord : PXResultRecord {

	PHFetchResult* _filteredFetchResult;
	NSPredicate* _inclusionPredicate;
	BOOL _filteredFetchResultIsValid;
	BOOL _inclusionPredicateIsValid;
	BOOL _reverseSortOrder;
	BOOL _wantsCuration;
	BOOL _preloadAssetTypeCounts;
	NSSet* _excludedOids;
	NSSet* _includedOids;
	NSSet* _curatedOids;
	PHFetchResult* _fetchResult;
	PHFetchResult* _curatedFetchResult;
	PHFetchResult* _keyAssetsFetchResult;
	long long _keyAssetIndex;

}

@property (nonatomic,readonly) NSSet * excludedOids;                             //@synthesize excludedOids=_excludedOids - In the implementation block
@property (nonatomic,readonly) NSSet * includedOids;                             //@synthesize includedOids=_includedOids - In the implementation block
@property (nonatomic,readonly) NSSet * curatedOids;                              //@synthesize curatedOids=_curatedOids - In the implementation block
@property (nonatomic,readonly) NSPredicate * inclusionPredicate; 
@property (nonatomic,readonly) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) BOOL reverseSortOrder;                            //@synthesize reverseSortOrder=_reverseSortOrder - In the implementation block
@property (nonatomic,retain) PHFetchResult * curatedFetchResult;                 //@synthesize curatedFetchResult=_curatedFetchResult - In the implementation block
@property (nonatomic,retain) PHFetchResult * keyAssetsFetchResult;               //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (assign,nonatomic) long long keyAssetIndex;                            //@synthesize keyAssetIndex=_keyAssetIndex - In the implementation block
@property (assign,nonatomic) BOOL wantsCuration;                                 //@synthesize wantsCuration=_wantsCuration - In the implementation block
@property (nonatomic,readonly) BOOL isCurated; 
@property (nonatomic,readonly) PHFetchResult * filteredFetchResult; 
@property (nonatomic,readonly) PHFetchResult * exposedFetchResult; 
@property (assign,nonatomic) BOOL preloadAssetTypeCounts;                        //@synthesize preloadAssetTypeCounts=_preloadAssetTypeCounts - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(PHFetchResult *)fetchResult;
-(BOOL)isCurated;
-(BOOL)reverseSortOrder;
-(void)setReverseSortOrder:(BOOL)arg1 ;
-(PHFetchResult *)keyAssetsFetchResult;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)setKeyAssetsFetchResult:(PHFetchResult *)arg1 ;
-(PHFetchResult *)exposedFetchResult;
-(void)setCuratedFetchResult:(PHFetchResult *)arg1 ;
-(PHFetchResult *)curatedFetchResult;
-(void)setFetchResult:(id)arg1 reverseSortOrder:(BOOL)arg2 ;
-(BOOL)wantsCuration;
-(void)stopExcludingOids:(id)arg1 ;
-(NSSet *)excludedOids;
-(void)excludeOids:(id)arg1 ;
-(void)stopIncludingAllOids;
-(NSSet *)includedOids;
-(void)includeOids:(id)arg1 ;
-(NSSet *)curatedOids;
-(long long)keyAssetIndex;
-(void)setWantsCuration:(BOOL)arg1 ;
-(void)setPreloadAssetTypeCounts:(BOOL)arg1 ;
-(void)invalidateFetchResultAssetCache;
-(void)_setIncludeOids:(id)arg1 ;
-(void)_invalidateInclusionPredicate;
-(NSPredicate *)inclusionPredicate;
-(void)_invalidateKeyAssetIndex;
-(PHFetchResult *)filteredFetchResult;
-(id)_exposedFetchResultBeforeFiltering;
-(void)_invalidateFilteredFetchResult;
-(void)_updateFilteredFetchResultIfNeeded;
-(void)setKeyAssetIndex:(long long)arg1 ;
-(BOOL)preloadAssetTypeCounts;
@end

