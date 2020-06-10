/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CardServices.framework/CardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CardServices/_CRSServiceBundle.h>
#import <libobjc.A.dylib/CRSCardServing.h>

@protocol CRSCardServing;
@class NSString;

@interface _CRSCardServiceBundle : _CRSServiceBundle <CRSCardServing> {

	id<CRSCardServing> _cardService;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)underlyingService;
-(BOOL)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_initializeCardServiceWithClass:(Class)arg1 ;
@end

