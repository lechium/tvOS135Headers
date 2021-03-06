/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV7 maxFrameDuration; 
@property (readonly) SCD_Struct_AV7 minFrameDuration; 
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(double)maxFrameRate;
-(double)minFrameRate;
-(SCD_Struct_AV7)minFrameDuration;
-(BOOL)includesFrameDuration:(SCD_Struct_AV7)arg1 ;
-(SCD_Struct_AV7)maxFrameDuration;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameRate:(double)arg1 ;
@end

