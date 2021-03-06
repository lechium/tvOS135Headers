/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSMutableDictionary;

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet {

	NSMutableDictionary* _fetchDictionariesByWorkerType;

}

@property (nonatomic,readonly) NSMutableDictionary * fetchDictionariesByWorkerType;              //@synthesize fetchDictionariesByWorkerType=_fetchDictionariesByWorkerType - In the implementation block
+(id)entityName;
+(id)propertiesToFetch;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(int)analysisStateForWorkerType:(short)arg1 outLastIgnoreDate:(id*)arg2 outIgnoreUntilDate:(id*)arg3 ;
-(NSMutableDictionary *)fetchDictionariesByWorkerType;
@end

