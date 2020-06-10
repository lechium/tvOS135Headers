/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/TDreamProgramWrapper.h>

@interface TDreamDistortionFX : TDreamProgramWrapper {

	int centerUniform;
	int modeUniform;
	float adjustUniform;
	int _mode;
	float _fine;
	CGPoint _center;

}

@property (assign,nonatomic) int mode;                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float fine;                  //@synthesize fine=_fine - In the implementation block
@property (assign,nonatomic) CGPoint center;              //@synthesize center=_center - In the implementation block
-(id)init;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(float)fine;
-(void)setFine:(float)arg1 ;
-(void)setUniforms;
@end
