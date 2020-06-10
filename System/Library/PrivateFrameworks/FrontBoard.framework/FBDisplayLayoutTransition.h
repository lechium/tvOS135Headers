/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSInvalidatable;
@class FBMainDisplayLayoutPublisher, NSString;

@interface FBDisplayLayoutTransition : NSObject {

	FBMainDisplayLayoutPublisher* _publisher;
	NSString* _name;
	NSString* _transitionReason;
	long long _displayType;
	id<BSInvalidatable> _transition;
	long long _interfaceOrientation;
	long long _backlightLevel;

}

@property (nonatomic,readonly) long long displayType;                                  //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,copy) NSString * transitionReason;                                //@synthesize transitionReason=_transitionReason - In the implementation block
@property (assign,nonatomic) long long interfaceOrientation;                           //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) long long backlightLevel;                                 //@synthesize backlightLevel=_backlightLevel - In the implementation block
+(id)layoutForDisplayType:(long long)arg1 ;
+(void)flushLayoutForDisplayType:(long long)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(long long)displayType;
-(long long)backlightLevel;
-(void)setBacklightLevel:(long long)arg1 ;
-(BOOL)isTransitioning;
-(NSString *)transitionReason;
-(id)initWithDisplayType:(long long)arg1 name:(id)arg2 ;
-(void)beginTransition;
-(void)endTransition;
-(void)setTransitionReason:(NSString *)arg1 ;
@end
