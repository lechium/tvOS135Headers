/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APLatencyVisualizationLayer : CALayer {

	double _dotOffset;
	double _dotDiameter;
	double _dotSpeed;
	double _dotSpeedX;
	double _dotSpeedY;
	void* _timeContext;
	/*function pointer*/void* _getAbsoluteTime;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)init:(/*function pointer*/void*)arg1 timeContext:(void*)arg2 zPosition:(int)arg3 ;
@end

