/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUIStateMachineDelegate;
@class NSMutableDictionary;

@interface AFUIStateMachine : NSObject {

	id<AFUIStateMachineDelegate> _delegate;
	long long _state;
	NSMutableDictionary* _endStatesByEventByStartState;

}

@property (assign,setter=_setState:,nonatomic) long long state;                                                                    //@synthesize state=_state - In the implementation block
@property (getter=_endStatesByEventByStartState,nonatomic,retain) NSMutableDictionary * endStatesByEventByStartState;              //@synthesize endStatesByEventByStartState=_endStatesByEventByStartState - In the implementation block
@property (assign,nonatomic,__weak) id<AFUIStateMachineDelegate> delegate;                                                         //@synthesize delegate=_delegate - In the implementation block
-(id<AFUIStateMachineDelegate>)delegate;
-(void)setDelegate:(id<AFUIStateMachineDelegate>)arg1 ;
-(long long)state;
-(void)_setState:(long long)arg1 ;
-(id)_descriptionForEvent:(long long)arg1 ;
-(id)initWithInitialState:(long long)arg1 ;
-(void)addTransitionFromState:(long long)arg1 toState:(long long)arg2 forEvent:(long long)arg3 ;
-(void)performTransitionForEvent:(long long)arg1 ;
-(id)_endStatesByEventByStartState;
-(id)_endStateNumberFromDictionary:(id)arg1 forEvent:(long long)arg2 ;
-(void)_setState:(long long)arg1 forEvent:(long long)arg2 ;
-(void)setEndStatesByEventByStartState:(NSMutableDictionary *)arg1 ;
@end

