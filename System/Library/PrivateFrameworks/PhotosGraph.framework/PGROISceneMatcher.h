/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PGROISceneMatcher : NSObject {

	NSMutableDictionary* _confidenceThresholdByWhitelistedSceneIdentifierByROILabel;
	NSMutableDictionary* _confidenceThresholdByBlacklistedSceneIdentifierByROILabel;

}
+(id)confidenceThresholdBySceneIdentifierWithSceneNames:(id)arg1 blacklisted:(BOOL)arg2 ;
+(id)blacklistedSceneNamesByROILabel;
+(id)whitelistedSceneNamesByROILabel;
+(id)sharedROISceneMatcher;
+(id)beachSceneNames;
+(id)mountainSceneNames;
+(id)natureSceneNames;
+(id)nonNatureSceneNames;
+(id)waterSceneNames;
+(id)nonWaterSceneNames;
+(id)urbanSceneNames;
-(id)confidenceThresholdByWhitelistedSceneIdentifierForROILabel:(id)arg1 ;
-(id)confidenceThresholdByBlacklistedSceneIdentifierForROILabel:(id)arg1 ;
@end

