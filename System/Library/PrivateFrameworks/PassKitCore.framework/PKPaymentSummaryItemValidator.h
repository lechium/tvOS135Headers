/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentValidating.h>

@class PKPaymentSummaryItem, NSString;

@interface PKPaymentSummaryItemValidator : NSObject <PKPaymentValidating> {

	PKPaymentSummaryItem* _item;

}

@property (nonatomic,readonly) PKPaymentSummaryItem * item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validatorWithObject:(id)arg1 ;
+(Class)validatedClass;
-(PKPaymentSummaryItem *)item;
-(BOOL)isValidWithError:(id*)arg1 ;
-(BOOL)isValidWithAPIType:(unsigned long long)arg1 withError:(id*)arg2 ;
-(id)initWithPaymentSummaryItem:(id)arg1 ;
@end

