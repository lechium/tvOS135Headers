/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFBackgroundAssertion.h>

@class NSString, BKSProcessAssertion;

@interface WFBKSBackgroundAssertion : WFBackgroundAssertion {

	NSString* _taskName;
	/*^block*/id _expirationHandler;
	BKSProcessAssertion* _assertion;
	id _observer;

}

@property (nonatomic,copy,readonly) NSString * taskName;                   //@synthesize taskName=_taskName - In the implementation block
@property (nonatomic,copy) id expirationHandler;                           //@synthesize expirationHandler=_expirationHandler - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * assertion;              //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,retain) id observer;                                  //@synthesize observer=_observer - In the implementation block
+(id)backgroundAssertionWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(id)observer;
-(void)end;
-(void)setObserver:(id)arg1 ;
-(BKSProcessAssertion *)assertion;
-(void)setAssertion:(BKSProcessAssertion *)arg1 ;
-(NSString *)taskName;
-(void)setExpirationHandler:(id)arg1 ;
-(id)expirationHandler;
-(id)initWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

