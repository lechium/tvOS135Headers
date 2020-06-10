/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VCPProtoPoint;

@interface VCPProtoLine : PBCodable <NSCopying> {

	VCPProtoPoint* _end;
	VCPProtoPoint* _start;

}

@property (nonatomic,retain) VCPProtoPoint * start;              //@synthesize start=_start - In the implementation block
@property (nonatomic,retain) VCPProtoPoint * end;                //@synthesize end=_end - In the implementation block
+(id)lineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(VCPProtoPoint *)start;
-(VCPProtoPoint *)end;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setEnd:(VCPProtoPoint *)arg1 ;
-(void)setStart:(VCPProtoPoint *)arg1 ;
-(CGPoint)startPointValue;
-(CGPoint)endPointValue;
@end
