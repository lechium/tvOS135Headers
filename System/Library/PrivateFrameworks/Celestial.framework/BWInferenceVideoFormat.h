/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWVideoFormat, NSDictionary;

@interface BWInferenceVideoFormat : NSObject <NSCopying> {

	BWVideoFormat* _underlyingVideoFormat;
	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) unsigned long long extendedWidth; 
@property (nonatomic,readonly) unsigned long long extendedHeight; 
@property (nonatomic,readonly) int colorSpaceProperties; 
@property (nonatomic,readonly) BOOL deviceOriented; 
@property (nonatomic,readonly) NSDictionary * pixelBufferAttributes; 
@property (nonatomic,readonly) BWVideoFormat * underlyingVideoFormat; 
@property (nonatomic,readonly) long long videoContentMode; 
@property (nonatomic,readonly) BOOL includesInvalidContent; 
+(id)formatByResolvingRequirements:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned)pixelFormat;
-(int)colorSpaceProperties;
-(NSDictionary *)pixelBufferAttributes;
-(BOOL)deviceOriented;
-(unsigned long long)extendedWidth;
-(unsigned long long)extendedHeight;
-(BWVideoFormat *)underlyingVideoFormat;
-(BOOL)includesInvalidContent;
-(long long)videoContentMode;
-(id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(BOOL)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(BOOL)arg4 ;
@end

