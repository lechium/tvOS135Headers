/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface SISchemaViewContainer : PBCodable {

	NSString* _viewID;
	NSString* _snippetClass;
	NSString* _dialogIdentifier;
	NSString* _dialogPhase;

}

@property (nonatomic,copy) NSString * viewID;                        //@synthesize viewID=_viewID - In the implementation block
@property (nonatomic,copy) NSString * snippetClass;                  //@synthesize snippetClass=_snippetClass - In the implementation block
@property (nonatomic,copy) NSString * dialogIdentifier;              //@synthesize dialogIdentifier=_dialogIdentifier - In the implementation block
@property (nonatomic,copy) NSString * dialogPhase;                   //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogPhase;
-(void)setDialogPhase:(NSString *)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)setViewID:(NSString *)arg1 ;
-(void)setSnippetClass:(NSString *)arg1 ;
-(NSString *)viewID;
-(NSString *)snippetClass;
@end
