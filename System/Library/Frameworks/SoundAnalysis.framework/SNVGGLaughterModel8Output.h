/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGLaughterModel8Output : NSObject <MLFeatureProvider> {

	MLMultiArray* _output1;

}

@property (nonatomic,retain) MLMultiArray * output1;              //@synthesize output1=_output1 - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithOutput1:(id)arg1 ;
-(MLMultiArray *)output1;
-(void)setOutput1:(MLMultiArray *)arg1 ;
@end
