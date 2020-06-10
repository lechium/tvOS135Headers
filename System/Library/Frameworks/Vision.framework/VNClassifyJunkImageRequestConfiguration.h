/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNClassifyJunkImageRequestConfiguration : VNImageBasedRequestConfiguration {

	unsigned long long _imageCropAndScaleOption;

}

@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
@end

