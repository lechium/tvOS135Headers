/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXTileAnimator.h>

@class NSString;

@interface PXBasicTileAnimator : NSObject <PXTileAnimator>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareTile:(id)arg1 withGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 ;
-(void)animateTile:(id)arg1 toGeometry:(PXTileGeometry*)arg2 userData:(id)arg3 withOptions:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)suspendAnimationsForTile:(id)arg1 ;
-(void)resumeAnimationsForTile:(id)arg1 ;
@end

