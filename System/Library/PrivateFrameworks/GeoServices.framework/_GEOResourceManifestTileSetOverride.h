/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSURL;

@interface _GEOResourceManifestTileSetOverride : NSObject <NSSecureCoding> {

	int _style;
	int _size;
	int _scale;
	NSNumber* _version;
	NSURL* _baseURL;
	NSURL* _localizationURL;

}

@property (nonatomic,readonly) int style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) int scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSNumber * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                      //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSURL * localizationURL;              //@synthesize localizationURL=_localizationURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)baseURL;
-(int)size;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(int)scale;
-(int)style;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSURL *)localizationURL;
-(void)setLocalizationURL:(NSURL *)arg1 ;
-(id)initWithStyle:(int)arg1 size:(int)arg2 scale:(int)arg3 ;
@end

