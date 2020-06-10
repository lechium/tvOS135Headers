/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;
	PKPeerPaymentRecipient* _item;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentRecipient *)item;
-(BOOL)hasExpired;
-(id)initWithItem:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
@end

