/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKRequest.h>

@interface SKProductsRequest : SKRequest {

	id _productsRequestInternal;

}

@property (assign,nonatomic,__weak) id<SKProductsRequestDelegate> delegate; 
-(id)init;
-(void)_start;
-(id)_newResponseForProducts:(id)arg1 invalidIdentifiers:(id)arg2 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
@end

