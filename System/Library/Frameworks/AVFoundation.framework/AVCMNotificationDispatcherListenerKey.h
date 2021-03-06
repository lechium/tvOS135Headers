/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVWeakReference, NSString;

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying> {

	AVWeakReference* _weakReferenceToListener;
	/*function pointer*/void* _callback;
	NSString* _name;
	const void* _object;

}
+(id)listenerKeyWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(id)arg3 object:(const void*)arg4 ;
@end

