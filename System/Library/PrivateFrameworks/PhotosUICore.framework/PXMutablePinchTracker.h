/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXMutablePinchTracker <NSObject>
@property (assign,nonatomic) CGPoint pinchLocation1; 
@property (assign,nonatomic) CGPoint pinchLocation2; 
@property (assign,nonatomic) double time; 
@required
-(double)time;
-(void)setTime:(double)arg1;
-(CGPoint)pinchLocation1;
-(void)setPinchLocation1:(CGPoint)arg1;
-(CGPoint)pinchLocation2;
-(void)setPinchLocation2:(CGPoint)arg1;

@end
