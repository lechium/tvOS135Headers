/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CAContext, CALayer;

@interface CARenderer : NSObject {

	CARendererPriv* _priv;

}

@property (retain) CAContext * context; 
@property (__weak) id<CARendererDelegate> delegate; 
@property (retain) CALayer * layer; 
@property (assign) CGRect bounds; 
+(id)rendererWithMTLTexture:(id)arg1 options:(id)arg2 ;
+(id)rendererWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(id<CARendererDelegate>)delegate;
-(void)setDelegate:(id<CARendererDelegate>)arg1 ;
-(CAContext *)context;
-(void)setContext:(CAContext *)arg1 ;
-(void)setDestination:(id)arg1 ;
-(CGRect)bounds;
-(id)_initWithOptions:(id)arg1 ;
-(CALayer *)layer;
-(void)setBounds:(CGRect)arg1 ;
-(void)setLayer:(CALayer *)arg1 ;
-(id)_initWithMTLTexture:(id)arg1 options:(id)arg2 ;
-(id)_initWithEAGLContext:(id)arg1 options:(id)arg2 ;
-(void)beginFrameAtTime:(double)arg1 timeStamp:(SCD_Struct_CA28*)arg2 ;
-(CGRect)updateBounds;
-(void)addUpdateRect:(CGRect)arg1 ;
-(double)nextFrameTime;
-(BOOL)hasMissingContent;
-(void)render;
-(void)endFrame;
@end

