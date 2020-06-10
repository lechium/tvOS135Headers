/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PFCanceler.h>

@protocol PFCanceler <NSObject>
@required
-(void)cancel;
-(BOOL)isCanceled;

@end


@protocol OS_dispatch_queue, PFCancelerObserverMulticaster;
@class NSObject, PFAsyncDispatchMulticaster, NSString;

@interface PFCanceler : NSObject <PFCanceler> {

	NSObject*<OS_dispatch_queue> _serializer;
	BOOL _isCanceled;
	PFAsyncDispatchMulticaster*<PFCancelerObserverMulticaster> _multicaster;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsNotifyOnCancel;
-(id)init;
-(void)cancel;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isCanceled;
@end

