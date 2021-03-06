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

@interface ADAdVector : PBCodable <NSCopying> {

	SCD_Struct_AD9* _vectors;
	NSString* _version;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned long long vectorsCount; 
@property (nonatomic,readonly) double* vectors; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSString *)version;
-(void)setVersion:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(double*)vectors;
-(void)addVector:(double)arg1 ;
-(double)vectorAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vectorsCount;
-(void)clearVectors;
-(void)setVectors:(double*)arg1 count:(unsigned long long)arg2 ;
@end

