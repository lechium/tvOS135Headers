/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REMutableFeatureSet.h>

@class NSMutableSet;

@interface _REMutableFeatureSet : REMutableFeatureSet {

	NSMutableSet* _names;
	NSMutableSet* _features;

}
-(id)init;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE28*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithFeature:(id)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(void)addFeature:(id)arg1 ;
-(BOOL)containsFeature:(id)arg1 ;
-(void)removeFeature:(id)arg1 ;
-(void)removeAllFeatures;
@end

