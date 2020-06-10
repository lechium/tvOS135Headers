/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTaskDispatcherDelegate.h>

@protocol OS_dispatch_queue;
@class AXMTaskDispatcher, AXMAudioSession, NSObject, AXMSoundComponent, AXMSpeechComponent, NSArray, NSString;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {

	AXMTaskDispatcher* _outputRequests;
	BOOL _usesPrivateAudioSession;
	AXMAudioSession* _audioSession;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	AXMSoundComponent* _queue_soundComponent;
	AXMSpeechComponent* _queue_speechComponent;
	NSArray* _queue_activeComponents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)disable;
-(void)playSound:(id)arg1 ;
-(void)dispatcher:(id)arg1 handleTask:(id)arg2 ;
-(id)dispatchRequest:(id)arg1 ;
-(id)initWithComponents:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)enableWithCompletion:(/*^block*/id)arg1 ;
-(void)speak:(id)arg1 ;
-(void)interrupt:(id)arg1 ;
-(void)interruptImmediately;
-(void)interruptPolitely;
-(id)playActiveSound:(id)arg1 ;
@end

