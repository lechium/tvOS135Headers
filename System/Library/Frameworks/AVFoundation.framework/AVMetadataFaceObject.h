/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {

	AVMetadataFaceObjectInternal* _internal;

}

@property (readonly) long long faceID; 
@property (readonly) BOOL hasRollAngle; 
@property (readonly) double rollAngle; 
@property (readonly) BOOL hasYawAngle; 
@property (readonly) double yawAngle; 
+(id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(BOOL)hasLeftEyeBounds;
-(BOOL)hasRightEyeBounds;
-(BOOL)hasRollAngle;
-(double)rollAngle;
-(BOOL)hasYawAngle;
-(double)yawAngle;
-(long long)faceID;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV7)arg6 duration:(SCD_Struct_AV7)arg7 bounds:(CGRect)arg8 ;
-(id)initWithType:(id)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6 ;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(BOOL)hasLeftEyeClosedConfidence;
-(int)leftEyeClosedConfidence;
-(BOOL)hasRightEyeClosedConfidence;
-(int)rightEyeClosedConfidence;
-(BOOL)hasSmileConfidence;
-(int)smileConfidence;
-(CGRect)leftEyeBounds;
-(CGRect)rightEyeBounds;
-(id)initWithFaceID:(long long)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(double)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(double)arg5 time:(SCD_Struct_AV7)arg6 duration:(SCD_Struct_AV7)arg7 bounds:(CGRect)arg8 optionalInfoDict:(id)arg9 originalMetadataObject:(id)arg10 sourceCaptureInput:(id)arg11 ;
-(id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2 ;
@end

