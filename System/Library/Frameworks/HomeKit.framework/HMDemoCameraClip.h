/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMCameraClip.h>

@class NSURL;

@interface HMDemoCameraClip : HMCameraClip {

	NSURL* _clipURL;

}

@property (copy,readonly) NSURL * clipURL;              //@synthesize clipURL=_clipURL - In the implementation block
-(id)initWithClipURL:(id)arg1 startDate:(id)arg2 duration:(double)arg3 significantEvents:(id)arg4 ;
-(id)initWithCameraProfile:(id)arg1 clipURL:(id)arg2 startDate:(id)arg3 duration:(double)arg4 significantEvents:(id)arg5 ;
-(NSURL *)clipURL;
@end

