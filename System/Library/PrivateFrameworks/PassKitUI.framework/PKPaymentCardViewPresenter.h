/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationViewPresenting.h>

@class NSString;

@interface PKPaymentCardViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)presentCell:(id)arg1 withDataItem:(id)arg2 shouldShowSeperator:(BOOL)arg3 forPaymentRequest:(id)arg4 cellProvider:(/*^block*/id)arg5 ;
+(id)_billingValueInCell:(id)arg1 forItem:(id)arg2 type:(unsigned long long)arg3 ;
@end
