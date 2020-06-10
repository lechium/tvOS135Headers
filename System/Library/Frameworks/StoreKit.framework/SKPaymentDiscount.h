/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSNumber;

@interface SKPaymentDiscount : NSObject {

	id _internal;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * keyIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * nonce; 
@property (nonatomic,copy,readonly) NSString * signature; 
@property (nonatomic,copy,readonly) NSNumber * timestamp; 
-(NSString *)identifier;
-(NSNumber *)timestamp;
-(NSString *)signature;
-(NSUUID *)nonce;
-(NSString *)keyIdentifier;
-(id)initWithIdentifier:(id)arg1 keyIdentifier:(id)arg2 nonce:(id)arg3 signature:(id)arg4 timestamp:(id)arg5 ;
@end

