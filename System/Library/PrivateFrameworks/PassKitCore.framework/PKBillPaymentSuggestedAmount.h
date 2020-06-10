/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber;

@interface PKBillPaymentSuggestedAmount : NSObject {

	NSString* _title;
	NSString* _message;
	unsigned long long _category;
	NSDecimalNumber* _amount;
	long long _priority;
	long long _merchantCategory;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long merchantCategory;               //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (assign,nonatomic) long long priority;                       //@synthesize priority=_priority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(unsigned long long)category;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSDecimalNumber *)amount;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithAmount:(id)arg1 category:(unsigned long long)arg2 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
@end

