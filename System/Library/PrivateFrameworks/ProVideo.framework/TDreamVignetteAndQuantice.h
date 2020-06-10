/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamVignetteAndQuantice : TDreamProgramWrapper {

	int modeUniform;
	int vignetteCenterUniform;
	int vignetteColorUniform;
	int vignetteStartUniform;
	int vignetteEndUniform;
	int numLevelsUniform;
	int recipNumLevelsUniform;
	float numLevels;
	float recipNumLevels;
	int _mode;
	double _vignetteEnd;
	double _vignetteStart;
	TDColor3 _vignetteColor;
	CGPoint _vignetteCenter;

}

@property (assign,nonatomic) int mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) CGPoint vignetteCenter;              //@synthesize vignetteCenter=_vignetteCenter - In the implementation block
@property (assign,nonatomic) TDColor3 vignetteColor;              //@synthesize vignetteColor=_vignetteColor - In the implementation block
@property (assign,nonatomic) double vignetteStart;                //@synthesize vignetteStart=_vignetteStart - In the implementation block
@property (assign,nonatomic) double vignetteEnd;                  //@synthesize vignetteEnd=_vignetteEnd - In the implementation block
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setUniforms;
-(void)setNumLevels:(unsigned)arg1 ;
-(void)setVignetteStart:(double)arg1 ;
-(void)setVignetteEnd:(double)arg1 ;
-(void)setVignetteColor:(TDColor3)arg1 ;
-(void)setVignetteCenter:(CGPoint)arg1 ;
-(CGPoint)vignetteCenter;
-(TDColor3)vignetteColor;
-(double)vignetteStart;
-(double)vignetteEnd;
@end

