/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BWInferenceMediaRequirement : BWInferenceDataRequirement <NSCopying> {

	NSString* _attachedMediaKey;

}

@property (nonatomic,copy,readonly) NSString * attachedMediaKey;              //@synthesize attachedMediaKey=_attachedMediaKey - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)attachedMediaKey;
-(id)initWithAttachedMediaKey:(id)arg1 ;
-(id)initWithMediaRequirement:(id)arg1 ;
@end

