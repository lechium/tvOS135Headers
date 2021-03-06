/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_PARSilhouette.h>
@class NSArray, NSData;


@protocol _PARSilhouette <NSObject>
@property (assign,nonatomic) int portraitVersion; 
@property (nonatomic,copy) NSArray * topics; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(int)portraitVersion;
-(NSArray *)topics;
-(void)clearTopics;
-(void)addTopics:(id)arg1;
-(id)topicsAtIndex:(unsigned long long)arg1;
-(void)setTopics:(id)arg1;
-(unsigned long long)topicsCount;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)setPortraitVersion:(int)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _PARSilhouette : PBCodable <_PARSilhouette, NSSecureCoding> {

	int _portraitVersion;
	NSArray* _topics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int portraitVersion;                   //@synthesize portraitVersion=_portraitVersion - In the implementation block
@property (nonatomic,copy) NSArray * topics;                        //@synthesize topics=_topics - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)portraitVersion;
-(NSArray *)topics;
-(void)clearTopics;
-(void)addTopics:(id)arg1 ;
-(id)topicsAtIndex:(unsigned long long)arg1 ;
-(void)setTopics:(NSArray *)arg1 ;
-(unsigned long long)topicsCount;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setPortraitVersion:(int)arg1 ;
@end

