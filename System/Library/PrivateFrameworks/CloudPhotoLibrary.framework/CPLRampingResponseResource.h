/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable <NSCopying> {

	long long _retryAfterMillis;
	NSString* _resource;
	BOOL _allowed;
	SCD_Struct_CP1 _has;

}

@property (nonatomic,readonly) BOOL hasResource; 
@property (nonatomic,retain) NSString * resource;                     //@synthesize resource=_resource - In the implementation block
@property (assign,nonatomic) BOOL hasAllowed; 
@property (assign,nonatomic) BOOL allowed;                            //@synthesize allowed=_allowed - In the implementation block
@property (assign,nonatomic) BOOL hasRetryAfterMillis; 
@property (assign,nonatomic) long long retryAfterMillis;              //@synthesize retryAfterMillis=_retryAfterMillis - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)resource;
-(void)setResource:(NSString *)arg1 ;
-(BOOL)hasResource;
-(void)setAllowed:(BOOL)arg1 ;
-(void)setHasAllowed:(BOOL)arg1 ;
-(BOOL)hasAllowed;
-(void)setRetryAfterMillis:(long long)arg1 ;
-(void)setHasRetryAfterMillis:(BOOL)arg1 ;
-(BOOL)hasRetryAfterMillis;
-(BOOL)allowed;
-(long long)retryAfterMillis;
@end

