/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PARResultFactory;
@class NSString;

@interface PARSessionConfiguration : NSObject <NSSecureCoding> {

	BOOL _dontPreloadImages;
	BOOL _enablePersonalizedRanking;
	NSString* _identifier;
	NSString* _userAgent;
	id<PARResultFactory> _factory;

}

@property (copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * userAgent;                 //@synthesize userAgent=_userAgent - In the implementation block
@property (readonly) id<PARResultFactory> factory;              //@synthesize factory=_factory - In the implementation block
@property (assign) BOOL dontPreloadImages;                      //@synthesize dontPreloadImages=_dontPreloadImages - In the implementation block
@property (assign) BOOL enablePersonalizedRanking;              //@synthesize enablePersonalizedRanking=_enablePersonalizedRanking - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultSessionConfiguration;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)userAgent;
-(id<PARResultFactory>)factory;
-(id)initWithId:(id)arg1 userAgent:(id)arg2 ;
-(id)initWithId:(id)arg1 userAgent:(id)arg2 factory:(id)arg3 ;
-(BOOL)dontPreloadImages;
-(void)setDontPreloadImages:(BOOL)arg1 ;
-(BOOL)enablePersonalizedRanking;
-(void)setEnablePersonalizedRanking:(BOOL)arg1 ;
@end

