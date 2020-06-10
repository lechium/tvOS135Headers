/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSMutableDictionary, NSObject;

@interface _UIRadiosityImageGenerator : NSObject {

	NSMutableArray* _surfaces;
	NSMutableDictionary* _outSurfaces;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(unsigned)_dimensionForSize:(CGSize)arg1 ;
-(void)_pushSurface:(id)arg1 ;
-(BOOL)shouldUseHardwareScaler;
-(CGSize)_surfaceSizeForImageSize:(CGSize)arg1 ;
-(id)_surfaceForImage:(CGImageRef)arg1 ;
-(id)_surfaceForSize:(CGSize)arg1 ;
-(id)_popSurfaceForSize:(CGSize)arg1 ;
-(void)imageWithImage:(CGImageRef)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

