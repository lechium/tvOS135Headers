/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BUAssertion.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface _BUCountingAssertion : NSObject <BUAssertion> {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithQueue:(id)arg1 block:(/*^block*/id)arg2 ;
@end

