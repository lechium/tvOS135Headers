/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKMerchant, PKCurrencyAmount, NSArray;

@interface PKPaymentTransactionGroup : NSObject <NSSecureCoding> {

	unsigned long long _type;
	NSDate* _startDate;
	NSDate* _endDate;
	long long _merchantCategory;
	PKMerchant* _merchant;
	unsigned long long _transactionCount;
	PKCurrencyAmount* _totalAmount;
	NSArray* _transactions;

}

@property (assign,nonatomic) unsigned long long type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                               //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                 //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) long long merchantCategory;                       //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (nonatomic,retain) PKMerchant * merchant;                            //@synthesize merchant=_merchant - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;              //@synthesize transactionCount=_transactionCount - In the implementation block
@property (nonatomic,retain) PKCurrencyAmount * totalAmount;                   //@synthesize totalAmount=_totalAmount - In the implementation block
@property (nonatomic,retain) NSArray * transactions;                           //@synthesize transactions=_transactions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(NSArray *)transactions;
-(void)setTransactions:(NSArray *)arg1 ;
-(PKMerchant *)merchant;
-(PKCurrencyAmount *)totalAmount;
-(void)setTotalAmount:(PKCurrencyAmount *)arg1 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
-(void)setMerchant:(PKMerchant *)arg1 ;
@end

