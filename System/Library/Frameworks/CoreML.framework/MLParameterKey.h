/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/MLKey.h>

@interface MLParameterKey : MLKey
+(id)seed;
+(id)weights;
+(id)biases;
+(id)learningRate;
+(id)beta1;
+(id)beta2;
+(id)shuffle;
+(id)momentum;
+(id)miniBatchSize;
+(id)eps;
+(id)epochs;
+(id)numberOfNeighbors;
+(id)linkedModelFileName;
+(id)linkedModelSearchPath;
-(id)initWithKeyName:(id)arg1 ;
-(id)scopedTo:(id)arg1 ;
-(id)deletingPrefixingScope:(id)arg1 ;
@end

