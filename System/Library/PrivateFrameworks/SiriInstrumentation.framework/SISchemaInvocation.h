/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaViewContainer, NSData;

@interface SISchemaInvocation : PBCodable {

	int _invocationAction;
	int _invocationSource;
	SISchemaViewContainer* _viewContainer;

}

@property (assign,nonatomic) int invocationAction;                               //@synthesize invocationAction=_invocationAction - In the implementation block
@property (assign,nonatomic) int invocationSource;                               //@synthesize invocationSource=_invocationSource - In the implementation block
@property (nonatomic,retain) SISchemaViewContainer * viewContainer;              //@synthesize viewContainer=_viewContainer - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewContainer:(SISchemaViewContainer *)arg1 ;
-(void)setInvocationSource:(int)arg1 ;
-(void)setInvocationAction:(int)arg1 ;
-(int)invocationAction;
-(int)invocationSource;
-(SISchemaViewContainer *)viewContainer;
@end

