/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNBoundingVolume <NSObject>
@required
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2;

@end
