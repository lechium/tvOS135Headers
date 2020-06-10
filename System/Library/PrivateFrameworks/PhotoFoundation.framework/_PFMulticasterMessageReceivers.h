/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFMulticasterDistributionList.h>

@class _PFMulticasterReceiverList;

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {

	_PFMulticasterReceiverList* _strongReceivers;
	_PFMulticasterReceiverList* _weakReceivers;

}
-(unsigned long long)count;
-(void)enumerateReceiversWithBlock:(/*^block*/id)arg1 ;
-(id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2 ;
@end

