/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_PARSearchResponse_Correction.h>
@class NSString, NSData;


@protocol _PARSearchResponse_Correction <NSObject>
@property (nonatomic,copy) NSString * prefix; 
@property (nonatomic,copy) NSString * completion; 
@property (assign,nonatomic) float score; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(NSString *)completion;
-(void)setCompletion:(id)arg1;
-(float)score;
-(void)setScore:(float)arg1;
-(NSString *)prefix;
-(void)setPrefix:(id)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _PARSearchResponse_Correction : PBCodable <_PARSearchResponse_Correction, NSSecureCoding> {

	float _score;
	NSString* _prefix;
	NSString* _completion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * prefix;                       //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * completion;                   //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) float score;                           //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)completion;
-(void)setCompletion:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(float)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setScore:(float)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
@end

