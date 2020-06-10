/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFUnfairLock.h>

@interface __HMFOSUnfairRecursiveLock : HMFUnfairLock {

	os_unfair_recursive_lock_s _internal;
	unsigned _internalOptions;

}
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)lock;
-(void)unlock;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)assertOwner;
-(void)assertNotOwner;
@end

