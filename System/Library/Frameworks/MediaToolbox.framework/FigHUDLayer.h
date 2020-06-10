/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@interface FigHUDLayer : CALayer {

	CTFontRef _Font;
	double _FontSize;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _LabelColors;
	CFArrayRef _ValueColors;

}
-(id)init;
-(void)dealloc;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(long long)addLine:(CFStringRef)arg1 withLabelColorIndex:(int)arg2 withValueColorIndex:(int)arg3 ;
-(void)setFont:(CFStringRef)arg1 withPointSize:(double)arg2 ;
-(void)resetLines;
-(long long)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(CFArrayRef)getValues;
-(CFArrayRef)getLabels;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
@end

