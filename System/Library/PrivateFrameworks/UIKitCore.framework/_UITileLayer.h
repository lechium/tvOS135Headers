/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIBezierPath;

@interface _UITileLayer : CALayer {

	UIBezierPath* maskPath;
	AB pendingDeferredOffscreenSetNeedsDisplay;

}
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplay;
-(id)actionForKey:(id)arg1 ;
@end

