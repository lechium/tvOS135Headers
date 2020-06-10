/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSEventListenerObject.h>

@protocol IKJSEventListenerObject <JSExport>
@required
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3;
-(void)removeEventListener:(id)arg1 :(id)arg2;

@end


@class NSMutableDictionary;

@interface IKJSEventListenerObject : IKJSObject <IKJSEventListenerObject> {

	NSMutableDictionary* _eventListenersMap;

}

@property (nonatomic,retain) NSMutableDictionary * eventListenersMap;              //@synthesize eventListenersMap=_eventListenersMap - In the implementation block
-(void)addEventListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(BOOL)invokeListeners:(id)arg1 extraInfo:(id)arg2 ;
-(void)removeEventListener:(id)arg1 :(id)arg2 ;
-(id)_eventInformationForType:(id)arg1 extraInfo:(id)arg2 ;
-(BOOL)invokeSingleListener:(id)arg1 extraInfo:(id)arg2 return:(id*)arg3 ;
-(BOOL)_searchEventListener:(id)arg1 key:(id)arg2 destroy:(BOOL)arg3 ;
-(NSMutableDictionary *)eventListenersMap;
-(void)setEventListenersMap:(NSMutableDictionary *)arg1 ;
-(BOOL)invokeMethod:(id)arg1 withArguments:(id)arg2 thenDispatchEvent:(id)arg3 extraInfo:(id)arg4 ;
@end

