/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADTransparencyDetails : PBCodable <NSCopying> {

	NSString* _transparencyDetailsUnavailableMessage;
	NSString* _transparencyRendererPayload;
	NSString* _transparencyRendererURL;

}

@property (nonatomic,readonly) BOOL hasTransparencyDetailsUnavailableMessage; 
@property (nonatomic,retain) NSString * transparencyDetailsUnavailableMessage;              //@synthesize transparencyDetailsUnavailableMessage=_transparencyDetailsUnavailableMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasTransparencyRendererPayload; 
@property (nonatomic,retain) NSString * transparencyRendererPayload;                        //@synthesize transparencyRendererPayload=_transparencyRendererPayload - In the implementation block
@property (nonatomic,readonly) BOOL hasTransparencyRendererURL; 
@property (nonatomic,retain) NSString * transparencyRendererURL;                            //@synthesize transparencyRendererURL=_transparencyRendererURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransparencyDetailsUnavailableMessage:(NSString *)arg1 ;
-(void)setTransparencyRendererPayload:(NSString *)arg1 ;
-(void)setTransparencyRendererURL:(NSString *)arg1 ;
-(BOOL)hasTransparencyDetailsUnavailableMessage;
-(BOOL)hasTransparencyRendererPayload;
-(BOOL)hasTransparencyRendererURL;
-(NSString *)transparencyDetailsUnavailableMessage;
-(NSString *)transparencyRendererPayload;
-(NSString *)transparencyRendererURL;
@end

