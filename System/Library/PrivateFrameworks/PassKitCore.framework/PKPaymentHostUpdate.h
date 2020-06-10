/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKContact, PKShippingMethod, PKPaymentMethod;

@interface PKPaymentHostUpdate : NSObject <NSSecureCoding> {

	PKContact* _shippingContact;
	PKShippingMethod* _shippingMethod;
	PKPaymentMethod* _paymentMethod;

}

@property (nonatomic,readonly) PKContact * shippingContact;                    //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,readonly) PKShippingMethod * shippingMethod;              //@synthesize shippingMethod=_shippingMethod - In the implementation block
@property (nonatomic,readonly) PKPaymentMethod * paymentMethod;                //@synthesize paymentMethod=_paymentMethod - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)paymentUpdateWithProtobuf:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPaymentMethod *)paymentMethod;
-(id)protobuf;
-(id)initWithContact:(id)arg1 shippingMethod:(id)arg2 paymentMethod:(id)arg3 ;
-(PKContact *)shippingContact;
-(PKShippingMethod *)shippingMethod;
@end
