/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETDataProvider.h>

@class NSArray, NSString;

@interface PHADataset : NSObject <ETDataProvider> {

	NSArray* _labeledDataSamples;
	NSString* _inputName;
	NSString* _labelName;

}

@property (nonatomic,readonly) NSArray * labeledDataSamples;              //@synthesize labeledDataSamples=_labeledDataSamples - In the implementation block
@property (nonatomic,readonly) NSString * inputName;                      //@synthesize inputName=_inputName - In the implementation block
@property (nonatomic,readonly) NSString * labelName;                      //@synthesize labelName=_labelName - In the implementation block
-(unsigned long long)numberOfDataPoints;
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(NSString *)inputName;
-(id)initWithLabeledFeatureVectors:(id)arg1 inputName:(id)arg2 labelName:(id)arg3 ;
-(NSArray *)labeledDataSamples;
-(NSString *)labelName;
@end

