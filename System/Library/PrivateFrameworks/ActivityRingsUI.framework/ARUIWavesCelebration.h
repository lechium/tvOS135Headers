/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ARUICelebration.h>

@protocol MTLBuffer;
@class CAMediaTimingFunction;

@interface ARUIWavesCelebration : ARUICelebration {

	BOOL _active;
	CAMediaTimingFunction* _timingFunction;
	float _transitionDuration;
	float _completionBeginTime;
	float _completionEndTime;
	/*^block*/id _completion;
	float _revealPercent;
	unsigned _waveCount;
	unsigned _pointCount;
	unsigned _computeCount;
	id<MTLBuffer> _waveVertexBuffer;
	id<MTLBuffer> _waveIndexBuffer;
	unsigned long long _numWaveIndicies;
	id<MTLBuffer> _waveComputeUniforms;
	id<MTLBuffer> _wavePoints;
	id<MTLBuffer> _waveFragmentUniforms;

}

@property (nonatomic,readonly) id<MTLBuffer> waveVertexBuffer;                  //@synthesize waveVertexBuffer=_waveVertexBuffer - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveIndexBuffer;                   //@synthesize waveIndexBuffer=_waveIndexBuffer - In the implementation block
@property (nonatomic,readonly) unsigned long long numWaveIndicies;              //@synthesize numWaveIndicies=_numWaveIndicies - In the implementation block
@property (nonatomic,readonly) float revealPercent;                             //@synthesize revealPercent=_revealPercent - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveComputeUniforms;               //@synthesize waveComputeUniforms=_waveComputeUniforms - In the implementation block
@property (nonatomic,readonly) unsigned waveCount;                              //@synthesize waveCount=_waveCount - In the implementation block
@property (nonatomic,readonly) unsigned pointCount;                             //@synthesize pointCount=_pointCount - In the implementation block
@property (nonatomic,readonly) unsigned computeCount;                           //@synthesize computeCount=_computeCount - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> wavePoints;                        //@synthesize wavePoints=_wavePoints - In the implementation block
@property (nonatomic,readonly) id<MTLBuffer> waveFragmentUniforms;              //@synthesize waveFragmentUniforms=_waveFragmentUniforms - In the implementation block
-(id)init;
-(unsigned long long)type;
-(unsigned)pointCount;
-(void)update:(double)arg1 ;
-(unsigned)computeCount;
-(void)setTopColor:;
-(void)endWithCompletion:(/*^block*/id)arg1 ;
-(void)storeCelebration:(id)arg1 withRing:(id)arg2 ;
-(void)setBottomColor:;
-(void)setContrastColor:;
-(void)_setupWavePoints;
-(void)_updateComputeUniforms;
-(unsigned long long)waveComputeUniformsOffsetForType:(unsigned long long)arg1 ;
-(unsigned long long)wavePointsOffsetForWaveAtIndex:(unsigned)arg1 ;
-(unsigned long long)waveFragmentOffsetForWaveAtIndex:(unsigned)arg1 ;
-(id<MTLBuffer>)waveVertexBuffer;
-(id<MTLBuffer>)waveIndexBuffer;
-(unsigned long long)numWaveIndicies;
-(float)revealPercent;
-(id<MTLBuffer>)waveComputeUniforms;
-(unsigned)waveCount;
-(id<MTLBuffer>)wavePoints;
-(id<MTLBuffer>)waveFragmentUniforms;
@end

