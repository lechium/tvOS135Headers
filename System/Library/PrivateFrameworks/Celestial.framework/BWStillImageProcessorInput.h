/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureStillImageSettings, BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, NSString;

@interface BWStillImageProcessorInput : NSObject {

	FigCaptureStillImageSettings* _settings;
	BWStillImageCaptureSettings* _captureSettings;
	BWStillImageCaptureStreamSettings* _captureStreamSettings;

}

@property (nonatomic,readonly) FigCaptureStillImageSettings * settings; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings; 
@property (nonatomic,readonly) BWStillImageCaptureStreamSettings * captureStreamSettings; 
@property (nonatomic,readonly) BOOL isMaster; 
@property (nonatomic,readonly) NSString * portType; 
-(id)description;
-(void)dealloc;
-(FigCaptureStillImageSettings *)settings;
-(BOOL)isMaster;
-(NSString *)portType;
-(BWStillImageCaptureStreamSettings *)captureStreamSettings;
-(BWStillImageCaptureSettings *)captureSettings;
-(id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3 ;
@end
