/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/VEiOSSharedObject.h>

@class NSCache;

@interface MiroVPAnalysisHelpers : VEiOSSharedObject {

	NSCache* _analysisInfos;

}
+(id)sharedHelpers;
+(unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1 ;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2 ;
-(id)init;
-(void)clearCaches;
-(int)fetchAnalysisInfoWithAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processResults:(id)arg1 forAssets:(id)arg2 intoInfos:(id)arg3 ;
-(int)fetchAnalysisInfoWithAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

