/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableData, NSData;

@interface PHAMutableFloatArray : NSObject <NSCopying, NSMutableCopying> {

	NSMutableData* _data;

}

@property (nonatomic,retain,readonly) NSMutableData * mutableData; 
@property (nonatomic,readonly) float* mutableFloats; 
@property (nonatomic,retain,readonly) NSData * data; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) const float* floats; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithArray:(id)arg1 ;
-(id)array;
-(id)initWithData:(id)arg1 ;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(NSData *)data;
-(void)appendFloat:(float)arg1 ;
-(void)appendArray:(id)arg1 ;
-(NSMutableData *)mutableData;
-(float)floatAtIndex:(unsigned long long)arg1 ;
-(id)initWithFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)appendFloats:(const float*)arg1 count:(unsigned long long)arg2 ;
-(void)appendDoubles:(const double*)arg1 count:(unsigned long long)arg2 ;
-(void)appendNSArray:(id)arg1 ;
-(const float*)floats;
-(float*)mutableFloats;
-(void)subtract:(id)arg1 ;
-(id)floatArrayBySubtracting:(id)arg1 ;
-(float)sum;
-(float)sumOfSquares;
-(void)setFloat:(float)arg1 atIndex:(unsigned long long)arg2 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 epsilon:(float)arg2 ;
-(BOOL)isApproximatelyEqualTo:(id)arg1 ;
-(id)initWithDataTensor:(id)arg1 ;
@end
