/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MRFrameManager : NSObject {

	NSMutableDictionary* mFrameSets;
	NSMutableDictionary* mFramePools;

}
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)cleanup;
-(void)releaseResources;
-(id)frameWithFrameID:(id)arg1 ;
-(void)recycleFrame:(id)arg1 ;
-(id)resourcePathForFrameID:(id)arg1 andResource:(id)arg2 ;
-(id)sizeScriptForFrameID:(id)arg1 ;
@end
