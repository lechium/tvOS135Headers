/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray;

@interface _UIASCIIArtFramesRenderer : NSObject {

	NSArray* _frames;
	double _outputLineWidth;

}

@property (nonatomic,readonly) NSArray * frames; 
@property (nonatomic,readonly) double outputLineWidth; 
-(id)description;
-(NSArray *)frames;
-(id)visualDescription;
-(id)initWithFrames:(id)arg1 ;
-(id)_normalizeFrames:(id)arg1 ;
-(id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2 ;
-(id)renderedLines;
-(double)outputLineWidth;
-(CGRect)scaledRectForRect:(CGRect)arg1 scaleSize:(CGSize)arg2 ;
@end
