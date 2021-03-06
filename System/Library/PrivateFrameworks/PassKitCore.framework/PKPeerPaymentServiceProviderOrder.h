/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKServiceProviderOrder.h>

@class NSString;

@interface PKPeerPaymentServiceProviderOrder : PKServiceProviderOrder {

	NSString* _sourceAccount;
	NSString* _targetAccount;
	NSString* _dpanIdentifier;

}

@property (nonatomic,copy) NSString * sourceAccount;               //@synthesize sourceAccount=_sourceAccount - In the implementation block
@property (nonatomic,copy) NSString * targetAccount;               //@synthesize targetAccount=_targetAccount - In the implementation block
@property (nonatomic,copy) NSString * dpanIdentifier;              //@synthesize dpanIdentifier=_dpanIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)dpanIdentifier;
-(id)serviceProviderData;
-(NSString *)sourceAccount;
-(void)setSourceAccount:(NSString *)arg1 ;
-(NSString *)targetAccount;
-(void)setTargetAccount:(NSString *)arg1 ;
-(void)setDpanIdentifier:(NSString *)arg1 ;
@end

