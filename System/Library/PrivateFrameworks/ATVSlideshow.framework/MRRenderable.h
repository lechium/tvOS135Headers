/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRRenderable
@property (nonatomic,readonly) BOOL isNative3D; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,readonly) BOOL isAlphaFriendly; 
@property (nonatomic,readonly) BOOL isInfinite; 
@required
-(BOOL)isOpaque;
-(BOOL)isInfinite;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)retainedByUserRenderedImageAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(id)patchworkAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3;
-(BOOL)isNative3D;
-(BOOL)isAlphaFriendly;

@end

