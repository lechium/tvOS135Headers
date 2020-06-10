/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/REMLFeatureProvider.h>

@class NSSet, REFeatureMap, NSString;

@interface _REFeatureMapWrapper : NSObject <REMLFeatureProvider> {

	REFeatureMap* _featureMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSSet * allFeatures; 
-(id)valueForFeature:(id)arg1 ;
-(id)initWithFeatureMap:(id)arg1 ;
-(NSSet *)allFeatures;
@end

