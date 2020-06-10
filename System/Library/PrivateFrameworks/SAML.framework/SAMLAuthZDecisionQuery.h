/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/XMLWrapperDoc.h>

@class SAMLAuthZDecisionQueryElement, NSString;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc {

	SAMLAuthZDecisionQueryElement* _requestElement;

}

@property (nonatomic,retain) SAMLAuthZDecisionQueryElement * requestElement;              //@synthesize requestElement=_requestElement - In the implementation block
@property (nonatomic,readonly) NSString * channelId; 
-(void)addAction:(id)arg1 ;
-(NSString *)channelId;
-(void)setResource:(id)arg1 ;
-(id)initWithData:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(id)initWithElement:(id)arg1 schema:(id)arg2 error:(id*)arg3 ;
-(SAMLAuthZDecisionQueryElement *)requestElement;
-(void)setSubjectFromResponse:(id)arg1 ;
-(void)setRequestElement:(SAMLAuthZDecisionQueryElement *)arg1 ;
@end
