/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageThresholdBinaryInverse : MPSUnaryImageKernel {

	SCD_Struct_MP18 filterInfo;

}

@property (nonatomic,readonly) float thresholdValue; 
@property (nonatomic,readonly) float maximumValue; 
@property (nonatomic,readonly) const float* transform; 
+(const MPSLibraryInfo*)libraryInfo;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(const float*)transform;
-(id)initWithDevice:(id)arg1 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(float)maximumValue;
-(id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 maximumValue:(float)arg3 linearGrayColorTransform:(const float*)arg4 ;
-(float)thresholdValue;
@end

