/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLNearestNeighborsIndex.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLNearestNeighborsLinearIndex : NSObject <MLNearestNeighborsIndex, NSSecureCoding> {

	vector<float, std::__1::allocator<float> >* vData;
	vector<float, std::__1::allocator<float> >* vDataL2Squared;
	unsigned long long _numDataPoints;
	unsigned long long _numDimensions;

}

@property (assign,nonatomic) unsigned long long numDataPoints;              //@synthesize numDataPoints=_numDataPoints - In the implementation block
@property (assign,nonatomic) unsigned long long numDimensions;              //@synthesize numDimensions=_numDimensions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(vector<std::__1::pair<unsigned long, float>, std::__1::allocator<std::__1::pair<unsigned long, float> > >*)findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const vector<float, std::__1::allocator<float> >*)arg2 ;
-(BOOL)updateWithData:(const vector<float, std::__1::allocator<float> >*)arg1 error:(id*)arg2 ;
-(unsigned long long)dataPointCount;
-(id)initWithDataset:(vector<float, std::__1::allocator<float> >*)arg1 numberOfDimensions:(unsigned long long)arg2 ;
-(unsigned long long)numDataPoints;
-(void)setNumDataPoints:(unsigned long long)arg1 ;
-(unsigned long long)numDimensions;
-(void)setNumDimensions:(unsigned long long)arg1 ;
@end
