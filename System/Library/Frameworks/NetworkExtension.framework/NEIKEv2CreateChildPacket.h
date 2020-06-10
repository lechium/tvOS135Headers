/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEIKEv2Packet.h>

@class NEIKEv2IKESAPayload, NEIKEv2ChildSAPayload, NEIKEv2KeyExchangePayload, NEIKEv2NoncePayload, NEIKEv2ConfigPayload, NEIKEv2InitiatorTrafficSelectorPayload, NEIKEv2ResponderTrafficSelectorPayload, NSArray;

@interface NEIKEv2CreateChildPacket : NEIKEv2Packet {

	NEIKEv2IKESAPayload* _ikeSA;
	NEIKEv2ChildSAPayload* _childSA;
	NEIKEv2KeyExchangePayload* _ke;
	NEIKEv2NoncePayload* _nonce;
	NEIKEv2ConfigPayload* _config;
	NEIKEv2InitiatorTrafficSelectorPayload* _tsi;
	NEIKEv2ResponderTrafficSelectorPayload* _tsr;
	NSArray* _vendorIDs;

}

@property (readonly) BOOL isRekeyIKE; 
@property (readonly) BOOL isRekeyChild; 
@property (retain) NEIKEv2IKESAPayload * ikeSA;                               //@synthesize ikeSA=_ikeSA - In the implementation block
@property (retain) NEIKEv2ChildSAPayload * childSA;                           //@synthesize childSA=_childSA - In the implementation block
@property (retain) NEIKEv2KeyExchangePayload * ke;                            //@synthesize ke=_ke - In the implementation block
@property (retain) NEIKEv2NoncePayload * nonce;                               //@synthesize nonce=_nonce - In the implementation block
@property (retain) NEIKEv2ConfigPayload * config;                             //@synthesize config=_config - In the implementation block
@property (retain) NEIKEv2InitiatorTrafficSelectorPayload * tsi;              //@synthesize tsi=_tsi - In the implementation block
@property (retain) NEIKEv2ResponderTrafficSelectorPayload * tsr;              //@synthesize tsr=_tsr - In the implementation block
@property (retain) NSArray * vendorIDs;                                       //@synthesize vendorIDs=_vendorIDs - In the implementation block
+(id)copyTypeDescription;
+(id)createChildSAForInitiatorChildSA:(id)arg1 ;
+(id)createChildSAResponse:(id)arg1 childSA:(id)arg2 ;
+(id)createRekeyChildSAForInitiator:(id)arg1 ;
+(id)createRekeyResponse:(id)arg1 childSA:(id)arg2 ;
+(id)createRekeyIKESAForInitiator:(id)arg1 ;
+(id)createRekeyResponse:(id)arg1 ikeSA:(id)arg2 ;
+(id)createChildSAResponse:(id)arg1 errorCode:(unsigned long long)arg2 errorData:(id)arg3 ;
+(unsigned long long)exchangeType;
-(NEIKEv2ConfigPayload *)config;
-(void)setConfig:(NEIKEv2ConfigPayload *)arg1 ;
-(NEIKEv2NoncePayload *)nonce;
-(void)setNonce:(NEIKEv2NoncePayload *)arg1 ;
-(void)setIkeSA:(NEIKEv2IKESAPayload *)arg1 ;
-(NEIKEv2IKESAPayload *)ikeSA;
-(void)setChildSA:(NEIKEv2ChildSAPayload *)arg1 ;
-(NEIKEv2ChildSAPayload *)childSA;
-(void)setKe:(NEIKEv2KeyExchangePayload *)arg1 ;
-(NEIKEv2KeyExchangePayload *)ke;
-(void)setTsi:(NEIKEv2InitiatorTrafficSelectorPayload *)arg1 ;
-(NEIKEv2InitiatorTrafficSelectorPayload *)tsi;
-(void)setTsr:(NEIKEv2ResponderTrafficSelectorPayload *)arg1 ;
-(NEIKEv2ResponderTrafficSelectorPayload *)tsr;
-(BOOL)validateCreateChildAsInitiator:(id)arg1 ;
-(BOOL)validateCreateChildAsResponder:(id)arg1 ;
-(BOOL)validateRekeyChildSA:(id)arg1 ;
-(BOOL)validateResponderRekeyChildSA:(id)arg1 sendInvalidKE:(BOOL*)arg2 ;
-(BOOL)validateRekeyIKESA:(id)arg1 ;
-(BOOL)validateResponderRekeyIKESA:(id)arg1 sendInvalidKE:(BOOL*)arg2 ;
-(NSArray *)vendorIDs;
-(void)setVendorIDs:(NSArray *)arg1 ;
-(void)gatherPayloads;
-(void)filloutPayloads;
-(BOOL)isRekeyIKE;
-(BOOL)isRekeyChild;
@end

