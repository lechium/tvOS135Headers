/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceLazyVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	NSString* _preparedByAttachedMediaKey;
	/*^block*/id _videoFormatProvider;

}

@property (nonatomic,copy,readonly) NSString * preparedByAttachedMediaKey;              //@synthesize preparedByAttachedMediaKey=_preparedByAttachedMediaKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)initWithAttachedMediaKey:(id)arg1 preparedByAttachedMediaKey:(id)arg2 videoFormatProvider:(/*^block*/id)arg3 ;
-(id)initWithAttachedMediaKey:(id)arg1 videoFormat:(id)arg2 ;
-(NSString *)preparedByAttachedMediaKey;
-(id)initWithLazyVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(int)prepareForInputVideoFormat:(id)arg1 ;
@end
