/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSMutableArray, NSData, Signature, PatConfigInclusionProof;

@interface PublicKeysResponse : GPBMessage

@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * appLeafsArray; 
@property (nonatomic,readonly) unsigned long long appLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * tltLeafsArray; 
@property (nonatomic,readonly) unsigned long long tltLeafsArray_Count; 
@property (nonatomic,retain) NSMutableArray * intermediatesArray; 
@property (nonatomic,readonly) unsigned long long intermediatesArray_Count; 
@property (nonatomic,copy) NSData * vrfKey; 
@property (nonatomic,retain) Signature * vrfSignature; 
@property (assign,nonatomic) BOOL hasVrfSignature; 
@property (nonatomic,copy) NSData * vrfPublicKey; 
@property (assign,nonatomic) unsigned long long tltBeginningMs; 
@property (nonatomic,retain) PatConfigInclusionProof * patConfigProof; 
@property (assign,nonatomic) BOOL hasPatConfigProof; 
+(id)descriptor;
@end

