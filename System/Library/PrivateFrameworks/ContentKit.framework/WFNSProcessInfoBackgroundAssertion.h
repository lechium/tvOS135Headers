/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFBackgroundAssertion.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface WFNSProcessInfoBackgroundAssertion : WFBackgroundAssertion {

	NSObject*<OS_dispatch_semaphore> _semaphore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
+(id)backgroundAssertionWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)end;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end
