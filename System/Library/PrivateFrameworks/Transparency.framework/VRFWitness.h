/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>
#import <Transparency/TransparencyVerifiable.h>

@class TransparencyVRFVerifier, NSData;

@interface VRFWitness : GPBMessage <TransparencyVerifiable>

@property (retain) TransparencyVRFVerifier * verifier; 
@property (retain) NSData * message; 
@property (retain) NSData * salt; 
@property (assign,nonatomic) int type; 
@property (nonatomic,copy) NSData * output; 
@property (nonatomic,copy) NSData * proof; 
+(id)descriptor;
-(NSData *)message;
-(void)setMessage:(NSData *)arg1 ;
-(NSData *)salt;
-(void)setSalt:(NSData *)arg1 ;
-(BOOL)verifyWithError:(id*)arg1 ;
-(TransparencyVRFVerifier *)verifier;
-(void)setVerifier:(TransparencyVRFVerifier *)arg1 ;
@end

