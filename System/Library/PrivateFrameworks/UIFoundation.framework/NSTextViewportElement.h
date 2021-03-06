/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextRange;


@protocol NSTextViewportElement <NSObject>
@property (readonly) NSTextRange * representedRange; 
@property (readonly) CGSize layoutSize; 
@property (assign) CGPoint layoutPoint; 
@required
-(CGSize)layoutSize;
-(void)drawAtPoint:(CGPoint)arg1 context:(CGContextRef)arg2;
-(id)representedRangeAtPoint:(CGPoint)arg1;
-(NSTextRange *)representedRange;
-(CGPoint)layoutPoint;
-(void)setLayoutPoint:(CGPoint)arg1;

@end

