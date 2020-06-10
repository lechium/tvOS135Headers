/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCameraViewfinder.h>
#import <libobjc.A.dylib/FigCaptureSessionObserver.h>

@class NSDictionary, FigCameraViewfinderSessionLocal, NSString;

@interface FigCameraViewfinderLocal : FigCameraViewfinder <FigCaptureSessionObserver> {

	BOOL _observing;
	NSDictionary* _options;
	FigCameraViewfinderSessionLocal* _activeViewfinderSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int photoThumbnailMaxDimension; 
@property (readonly) BOOL photoThumbnailQualitySpecified; 
@property (readonly) float photoThumbnailQuality; 
+(void)initialize;
+(id)cameraViewfinder;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)startWithOptions:(id)arg1 ;
-(void)_updateActiveViewfinderSession:(id)arg1 ;
-(void)captureSessionDidStart:(id)arg1 ;
-(void)captureSessionDidStop:(long long)arg1 ;
-(void)captureSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4 ;
-(int)photoThumbnailMaxDimension;
-(BOOL)photoThumbnailQualitySpecified;
-(float)photoThumbnailQuality;
@end

