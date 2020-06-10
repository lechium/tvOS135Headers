/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLPhotoAnalysisVisionServiceTaxonomyProtocol.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>
+(void)initialize;
-(void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)localizedLabelForSceneIdentifier:(unsigned)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperation:(id)arg1 ;
-(id)sceneTaxonomyHash;
@end

