/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RETaggedFeatureValueArray : NSObject <NSCopying> {

	CFArrayRef _array;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long count; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)initWithValues:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)featureValueAtIndex:(unsigned long long)arg1 ;
-(void)enumerateFeatureValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)addFeatureValue:(unsigned long long)arg1 ;
-(id)initWithFeatureValues:(id)arg1 ;
-(unsigned long long)firstFeatureValue;
-(void)removeAllFeatureValues;
-(void)removeFeatureValueAtIndex:(unsigned long long)arg1 ;
-(void)insertFeatureValue:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)_locked_count;
-(unsigned long long)_locked_featureValueAtIndex:(unsigned long long)arg1 ;
-(void)replaceFeatureValueAtIndex:(unsigned long long)arg1 withValue:(unsigned long long)arg2 ;
-(unsigned long long)lastFeatureValue;
@end
