/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSCountedSet, NSArray;

@interface PXVideoSessionManager : PXObservable {

	NSMutableDictionary* _sessionsByIdentifier;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSCountedSet* _sessionCounts;

}

@property (nonatomic,readonly) NSArray * activeSessions; 
+(id)sharedInstance;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)mutableChangeObject;
-(id)checkOutSessionWithContentProvider:(id)arg1 ;
-(void)checkInVideoSession:(id)arg1 ;
-(NSArray *)activeSessions;
-(id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 ;
-(id)videoSessionForAsset:(id)arg1 mediaProvider:(id)arg2 livePhotosLoopCrossfadeDuration:(double)arg3 loopTimeRange:(SCD_Struct_PX9)arg4 ;
@end

