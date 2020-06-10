/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying> {

	NSString* _impressionType;
	NSString* _recoAlgoId;

}

@property (nonatomic,readonly) BOOL hasImpressionType; 
@property (nonatomic,retain) NSString * impressionType;              //@synthesize impressionType=_impressionType - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoAlgoId; 
@property (nonatomic,retain) NSString * recoAlgoId;                  //@synthesize recoAlgoId=_recoAlgoId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setImpressionType:(NSString *)arg1 ;
-(void)setRecoAlgoId:(NSString *)arg1 ;
-(BOOL)hasImpressionType;
-(BOOL)hasRecoAlgoId;
-(NSString *)impressionType;
-(NSString *)recoAlgoId;
@end

