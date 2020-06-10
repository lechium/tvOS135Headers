/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * resource; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) SAMLEvidence * evidence; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(SAMLSignature *)signature;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(NSArray *)actions;
-(SAMLSubject *)subject;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(NSString *)resource;
-(void)addAction:(id)arg1 ;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setResource:(NSString *)arg1 ;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(SAMLEvidence *)evidence;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
@end

