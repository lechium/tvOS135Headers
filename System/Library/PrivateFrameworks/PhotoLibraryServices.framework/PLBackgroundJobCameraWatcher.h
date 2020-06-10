/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/FigCameraViewfinderDelegate.h>
#import <libobjc.A.dylib/FigCameraViewfinderSessionDelegate.h>

@protocol PLBackgroundJobCameraWatcherDelegate;
@class FigCameraViewfinder, NSString;

@interface PLBackgroundJobCameraWatcher : NSObject <FigCameraViewfinderDelegate, FigCameraViewfinderSessionDelegate> {

	FigCameraViewfinder* _viewFinder;
	BOOL _isCameraRunning;
	id<PLBackgroundJobCameraWatcherDelegate> _delegate;

}

@property (__weak,readonly) id<PLBackgroundJobCameraWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PLBackgroundJobCameraWatcherDelegate>)delegate;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidEnd:(id)arg2 ;
-(void)cameraViewfinder:(id)arg1 viewfinderSessionDidBegin:(id)arg2 ;
-(id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2 ;
-(BOOL)isCameraRunning;
@end

