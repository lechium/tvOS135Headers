/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTUnsafePromise.h>

@interface CUTPromise : CUTUnsafePromise
+(id)failedPromiseWithError:(id)arg1 ;
+(id)fulfilledPromiseWithValue:(id)arg1 ;
+(id)all:(id)arg1 ;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
@end
