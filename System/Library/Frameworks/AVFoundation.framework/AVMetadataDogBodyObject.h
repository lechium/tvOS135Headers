/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataBodyObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVMetadataDogBodyObject : AVMetadataBodyObject <NSCopying>
+(id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 ;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7 ;
-(id)initWithBodyID:(long long)arg1 time:(SCD_Struct_AV7)arg2 duration:(SCD_Struct_AV7)arg3 bounds:(CGRect)arg4 ;
@end

