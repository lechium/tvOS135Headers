/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSOperationQueue;

@interface HMFScheduler : HMFObject {

	NSOperationQueue* _operationQueue;

}
+(id)defaultScheduler;
+(id)mainScheduler;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(id)performBlock:(/*^block*/id)arg1 ;
-(id)performOperation:(id)arg1 ;
-(id)performWithQualityOfService:(long long)arg1 block:(/*^block*/id)arg2 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4 ;
@end

