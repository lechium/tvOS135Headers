/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, PKPaymentSetupProduct;

@interface PKPickerItem : NSObject {

	NSString* _title;
	PKPaymentSetupProduct* _product;
	/*^block*/id _selectionHandler;

}

@property (nonatomic,copy) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (nonatomic,copy) id selectionHandler;                            //@synthesize selectionHandler=_selectionHandler - In the implementation block
+(id)itemWithTitle:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
+(id)itemWithProduct:(id)arg1 selectionHandler:(/*^block*/id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(PKPaymentSetupProduct *)product;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setSelectionHandler:(id)arg1 ;
-(id)selectionHandler;
-(void)handleSelectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

