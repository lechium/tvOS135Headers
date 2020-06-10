/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFObservable.h>
#import <libobjc.A.dylib/MFConnectableObservable.h>

@protocol MFObservable;
@class MFCancelationToken, NSLock, NSMapTable, NSString;

@interface _MFConnectableObservable : MFObservable <MFConnectableObservable> {

	id<MFObservable> _observable;
	MFCancelationToken* _cancelable;
	NSLock* _lock;
	NSMapTable* _observersToCancelable;
	BOOL _connected;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)connect;
-(id)subscribe:(id)arg1 ;
-(id)initWithObservable:(id)arg1 ;
@end

