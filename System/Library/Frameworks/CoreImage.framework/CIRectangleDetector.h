/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIRectangleDetector : CIDetector {

	CIContext* context;
	double _width;
	double _height;
	NSMutableDictionary* featureOptions;
	OpaqueVTPixelTransferSessionRef pixelTransferSession;
	CVBufferRef interimScaleBuffer;
	CVBufferRef scaleBuffer;
	SCD_Struct_CI34* CVMLFuncs;
	float* _perMeshPtr;
	vImage_Buffer* _internalBuffer;

}

@property (nonatomic,retain) CIContext * context; 
-(void)dealloc;
-(void)finalize;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(void)releaseResources;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
@end
