/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilSignalObserverDelegate.h>
#import <libobjc.A.dylib/_CNObservableSkipUntilInputObserverDelegate.h>

@protocol CNCancelable;
@class CNObservable, NSString;

@interface _CNObservableSkipUntilOperator : CNObservable <_CNObservableSkipUntilSignalObserverDelegate, _CNObservableSkipUntilInputObserverDelegate> {

	BOOL _active;
	CNObservable* _input;
	CNObservable* _signal;
	id<CNCancelable> _inputToken;
	id<CNCancelable> _signalToken;

}

@property (readonly) CNObservable * input;                          //@synthesize input=_input - In the implementation block
@property (readonly) CNObservable * signal;                         //@synthesize signal=_signal - In the implementation block
@property (getter=isActive) BOOL active;                            //@synthesize active=_active - In the implementation block
@property (retain) id<CNCancelable> inputToken;                     //@synthesize inputToken=_inputToken - In the implementation block
@property (retain) id<CNCancelable> signalToken;                    //@synthesize signalToken=_signalToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)cancel;
-(BOOL)isActive;
-(CNObservable *)signal;
-(void)setActive:(BOOL)arg1 ;
-(CNObservable *)input;
-(id)subscribe:(id)arg1 ;
-(BOOL)shouldMirrorEvents;
-(void)inputDidTerminate;
-(id)initWithInput:(id)arg1 signal:(id)arg2 ;
-(void)setSignalToken:(id<CNCancelable>)arg1 ;
-(void)setInputToken:(id<CNCancelable>)arg1 ;
-(id<CNCancelable>)inputToken;
-(id<CNCancelable>)signalToken;
-(void)signalDidGenerateEvent;
@end
