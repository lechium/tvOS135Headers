/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIPlatterMenuPanningTransformerDelegate <NSObject>
@required
-(void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(CGPoint)arg2;
-(void)panningTransformer:(id)arg1 didPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 touchPosition:(CGPoint)arg4 velocity:(CGVector)arg5 didChangeAxis:(BOOL)arg6 axisLock:(unsigned long long)arg7;
-(void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(CGPoint)arg2 offsetFromPrevious:(CGVector)arg3 velocity:(CGVector)arg4;
-(void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(CGPoint)arg2;

@end

