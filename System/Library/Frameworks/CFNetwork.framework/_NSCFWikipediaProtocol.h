/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFWikipediaProtocol : NSURLProtocol {

	const void* _instance;
	const CFURLProtocolInstanceCallbacks* _callbacks;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)dealloc;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)scheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
-(void)unscheduleOnRunloop:(CFRunLoopRef)arg1 mode:(CFStringRef)arg2 ;
@end
