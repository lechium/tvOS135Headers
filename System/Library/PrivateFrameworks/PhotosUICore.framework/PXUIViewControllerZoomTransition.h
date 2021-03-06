/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIViewControllerTransition.h>

@interface PXUIViewControllerZoomTransition : PXUIViewControllerTransition
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)supportsEdgeSwipeBackGesture;
-(long long)transitionIdentifierForTransitionMode:(unsigned long long)arg1 ;
-(void)animateZoomTransition:(id)arg1 withInitialVelocity:(PXDisplayVelocity)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

