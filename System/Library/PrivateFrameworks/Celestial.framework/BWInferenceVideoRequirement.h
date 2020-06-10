/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceMediaRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoFormat;

@interface BWInferenceVideoRequirement : BWInferenceMediaRequirement <NSCopying> {

	BWInferenceVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWInferenceVideoFormat * videoFormat;              //@synthesize videoFormat=_videoFormat - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(BWInferenceVideoFormat *)videoFormat;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(id)initWithVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(BOOL)isSatisfiedByRequirement:(id)arg1 ;
-(unsigned long long)satisfactionHash;
@end

