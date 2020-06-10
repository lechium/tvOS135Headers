/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKVONotifier.h>

@protocol AVWeakObservable;
@class AVCallbackContextRegistry, NSObject, AVWeakReference, NSString;

@interface AVWeaklyObservedObjectClientBlockKVONotifier : NSObject <AVKVONotifier> {

	AVCallbackContextRegistry* _callbackContextRegistry;
	void* _callbackContextToken;
	NSObject* _observer;
	AVWeakReference* _weakReferenceToObject;
	NSObject*<AVWeakObservable> _unsafeUnretainedObject;
	NSString* _keyPath;
	unsigned long long _options;
	/*^block*/id _block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)start;
-(void)cancelCallbacks;
-(id)initWithCallbackContextRegistry:(id)arg1 observer:(id)arg2 object:(id)arg3 keyPath:(id)arg4 options:(unsigned long long)arg5 block:(/*^block*/id)arg6 ;
-(void)callbackDidFireWithChangeDictionary:(id)arg1 ;
@end

