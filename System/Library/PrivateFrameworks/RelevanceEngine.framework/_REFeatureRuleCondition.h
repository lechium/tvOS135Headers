/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RECondition.h>
#import <libobjc.A.dylib/REAutomaticExportedInterface.h>

@class REFeature;

@interface _REFeatureRuleCondition : RECondition <REAutomaticExportedInterface> {

	REFeature* _firstFeature;
	long long _relation;
	REFeature* _secondFeature;

}

@property (nonatomic,readonly) REFeature * firstFeature;               //@synthesize firstFeature=_firstFeature - In the implementation block
@property (nonatomic,readonly) long long relation;                     //@synthesize relation=_relation - In the implementation block
@property (nonatomic,readonly) REFeature * secondFeature;              //@synthesize secondFeature=_secondFeature - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)relation;
-(id)_dependentFeatures;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 predictionSet:(id)arg2 explanation:(id*)arg3 ;
-(id)_inflectionFeatureValuePairs;
-(REFeature *)firstFeature;
-(REFeature *)secondFeature;
-(id)initWithFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
-(BOOL)_requiresTwoFeatures;
@end

