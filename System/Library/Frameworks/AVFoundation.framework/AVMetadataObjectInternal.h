/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureInput, AVMetadataObject;

@interface AVMetadataObjectInternal : NSObject {

	SCD_Struct_AV7 _time;
	SCD_Struct_AV7 _duration;
	CGRect _bounds;
	NSString* _type;
	AVCaptureInput* _input;
	AVMetadataObject* _originalMetadataObject;

}

@property (assign) SCD_Struct_AV7 time;                                    //@synthesize time=_time - In the implementation block
@property (assign) SCD_Struct_AV7 duration;                                //@synthesize duration=_duration - In the implementation block
@property (assign) CGRect bounds;                                          //@synthesize bounds=_bounds - In the implementation block
@property (retain) NSString * type;                                        //@synthesize type=_type - In the implementation block
@property (retain) AVCaptureInput * input;                                 //@synthesize input=_input - In the implementation block
@property (retain) AVMetadataObject * originalMetadataObject;              //@synthesize originalMetadataObject=_originalMetadataObject - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(SCD_Struct_AV7)duration;
-(AVCaptureInput *)input;
-(SCD_Struct_AV7)time;
-(void)setDuration:(SCD_Struct_AV7)arg1 ;
-(CGRect)bounds;
-(void)setInput:(AVCaptureInput *)arg1 ;
-(void)setTime:(SCD_Struct_AV7)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(AVMetadataObject *)originalMetadataObject;
-(void)setOriginalMetadataObject:(AVMetadataObject *)arg1 ;
@end

