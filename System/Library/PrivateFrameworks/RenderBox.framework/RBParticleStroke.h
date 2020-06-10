/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBParticleStroke <RBStroke>
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) float imageScale; 
@property (nonatomic,readonly) int imageCount; 
@property (nonatomic,readonly) BOOL rotatesImage; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) long long seed; 
@required
-(long long)seed;
-(int)imageCount;
-(CGImageRef)image;
-(int)blendMode;
-(float)imageScale;
-(BOOL)rotatesImage;

@end
