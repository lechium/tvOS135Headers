/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRecognition/CoreRecognition-Structs.h>
#import <QuartzCore/CAReplicatorLayer.h>

@class CAShapeLayer, CATextLayer, NSMutableArray;

@interface CRBoxLayer : CAReplicatorLayer {

	BOOL _customInit;
	double _frameRatio;
	CAShapeLayer* _reticleLayer;
	CATextLayer* _codeLayer;
	NSMutableArray* _completionBlocks;
	double _demoSpeed;

}

@property (retain) CAShapeLayer * reticleLayer;                    //@synthesize reticleLayer=_reticleLayer - In the implementation block
@property (retain) CATextLayer * codeLayer;                        //@synthesize codeLayer=_codeLayer - In the implementation block
@property (retain) NSMutableArray * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (assign) double demoSpeed;                               //@synthesize demoSpeed=_demoSpeed - In the implementation block
@property (assign) BOOL customInit;                                //@synthesize customInit=_customInit - In the implementation block
@property (assign,nonatomic) double frameRatio;                    //@synthesize frameRatio=_frameRatio - In the implementation block
+(id)layer;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layoutSublayers;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)completionBlocks;
-(void)setCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setFrameRatio:(double)arg1 ;
-(void)positionForCodeBoxPoints:(id)arg1 ;
-(void)setString:(id)arg1 mirrored:(BOOL)arg2 inverted:(BOOL)arg3 ;
-(void)animatePulseColor:(id)arg1 ;
-(void)setDemoSpeed:(double)arg1 ;
-(id)initWithCodeFrameRatio:(double)arg1 ;
-(double)frameRatio;
-(CAShapeLayer *)reticleLayer;
-(void)setReticleLayer:(CAShapeLayer *)arg1 ;
-(CATextLayer *)codeLayer;
-(void)setCodeLayer:(CATextLayer *)arg1 ;
-(BOOL)customInit;
-(void)animateReveal;
-(void)animateConceal;
-(void)animateToPosition:(CGPoint)arg1 transform:(CATransform3D)arg2 opacity:(double)arg3 type:(long long)arg4 ;
-(double)demoSpeed;
-(void)setCustomInit:(BOOL)arg1 ;
@end

