/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MSVBloomFilter : NSObject <NSSecureCoding> {

	CFBitVectorRef _vector;
	long long _vectorCapacity;
	unsigned long long _murmurSeed;
	long long _hashCount;
	float _falsePositiveTolerance;
	long long _capacity;

}

@property (nonatomic,readonly) long long capacity;                          //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) float falsePositiveTolerance;                //@synthesize falsePositiveTolerance=_falsePositiveTolerance - In the implementation block
@property (nonatomic,readonly) float falsePositiveProbability; 
@property (nonatomic,readonly) long long estimatedCount; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)capacity;
-(float)falsePositiveProbability;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 ;
-(id)_vectorIndexSetForObject:(id)arg1 ;
-(unsigned long long)_fnvHashObject:(id)arg1 ;
-(unsigned long long)_murmur2HashObject:(id)arg1 ;
-(id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3 ;
-(long long)estimatedCount;
-(float)falsePositiveTolerance;
@end

