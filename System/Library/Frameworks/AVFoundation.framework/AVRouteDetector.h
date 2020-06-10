/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVRouteDetectorInternal;

@interface AVRouteDetector : NSObject {

	AVRouteDetectorInternal* _routeDetectorInternal;

}

@property (getter=isRouteDetectionEnabled) BOOL routeDetectionEnabled; 
@property (readonly) BOOL multipleRoutesDetected; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)multipleRoutesDetected;
-(void)_updateMultipleRoutesDetected;
-(BOOL)isRouteDetectionEnabled;
-(void)setRouteDetectionEnabled:(BOOL)arg1 ;
@end

