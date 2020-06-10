/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, PKProtobufPaymentMethod;

@interface PKProtobufPaymentToken : PBCodable <NSCopying> {

	NSString* _instrumentName;
	NSString* _network;
	NSData* _paymentData;
	PKProtobufPaymentMethod* _paymentMethod;
	NSString* _redeemURL;
	NSString* _retryNonce;
	NSString* _transactionIdentifier;

}

@property (nonatomic,readonly) BOOL hasPaymentMethod; 
@property (nonatomic,retain) PKProtobufPaymentMethod * paymentMethod;              //@synthesize paymentMethod=_paymentMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasInstrumentName; 
@property (nonatomic,retain) NSString * instrumentName;                            //@synthesize instrumentName=_instrumentName - In the implementation block
@property (nonatomic,readonly) BOOL hasNetwork; 
@property (nonatomic,retain) NSString * network;                                   //@synthesize network=_network - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionIdentifier; 
@property (nonatomic,retain) NSString * transactionIdentifier;                     //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasPaymentData; 
@property (nonatomic,retain) NSData * paymentData;                                 //@synthesize paymentData=_paymentData - In the implementation block
@property (nonatomic,readonly) BOOL hasRedeemURL; 
@property (nonatomic,retain) NSString * redeemURL;                                 //@synthesize redeemURL=_redeemURL - In the implementation block
@property (nonatomic,readonly) BOOL hasRetryNonce; 
@property (nonatomic,retain) NSString * retryNonce;                                //@synthesize retryNonce=_retryNonce - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)network;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(PKProtobufPaymentMethod *)paymentMethod;
-(void)setPaymentMethod:(PKProtobufPaymentMethod *)arg1 ;
-(BOOL)hasPaymentMethod;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(NSString *)transactionIdentifier;
-(void)setNetwork:(NSString *)arg1 ;
-(NSData *)paymentData;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(BOOL)hasTransactionIdentifier;
-(NSString *)instrumentName;
-(void)setPaymentData:(NSData *)arg1 ;
-(NSString *)redeemURL;
-(void)setRedeemURL:(NSString *)arg1 ;
-(void)setInstrumentName:(NSString *)arg1 ;
-(BOOL)hasRetryNonce;
-(BOOL)hasNetwork;
-(BOOL)hasInstrumentName;
-(BOOL)hasPaymentData;
-(BOOL)hasRedeemURL;
@end

