/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAUITransportButton : UIButton {

	int drawingStyle;
	CGColorRef fillColor;
	CGRect imageRect;

}

@property (assign) int drawingStyle; 
@property (assign) CGColorRef fillColor; 
+(Class)layerClass;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)flash;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGPathRef)newPathRefForStyle:(int)arg1 ;
-(void)setDrawingStyle:(int)arg1 ;
-(int)drawingStyle;
@end
