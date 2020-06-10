/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface VUIStoreAcquisitionProperties : NSObject <NSCopying> {

	BOOL _ignoresForcedPasswordRestriction;
	NSString* _buyParams;
	NSString* _urlBagKey;
	NSString* _userAgent;
	NSNumber* _dsid;
	NSString* _strongToken;

}

@property (nonatomic,copy) NSString * buyParams;                                 //@synthesize buyParams=_buyParams - In the implementation block
@property (nonatomic,copy) NSString * urlBagKey;                                 //@synthesize urlBagKey=_urlBagKey - In the implementation block
@property (nonatomic,copy) NSString * userAgent;                                 //@synthesize userAgent=_userAgent - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * strongToken;                               //@synthesize strongToken=_strongToken - In the implementation block
@property (assign,nonatomic) BOOL ignoresForcedPasswordRestriction;              //@synthesize ignoresForcedPasswordRestriction=_ignoresForcedPasswordRestriction - In the implementation block
+(id)acquisitionPropertiesWithBuyParams:(id)arg1 urlbagKey:(id)arg2 ;
+(id)metricsAugumentedBuyParamsWithBuyParams:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(NSString *)userAgent;
-(BOOL)ignoresForcedPasswordRestriction;
-(void)setIgnoresForcedPasswordRestriction:(BOOL)arg1 ;
-(NSString *)strongToken;
-(NSString *)urlBagKey;
-(void)setStrongToken:(NSString *)arg1 ;
-(void)setUrlBagKey:(NSString *)arg1 ;
@end

