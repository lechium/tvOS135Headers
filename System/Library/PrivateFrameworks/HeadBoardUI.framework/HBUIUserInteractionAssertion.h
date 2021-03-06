/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HeadBoardUI.framework/HeadBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_source;
@class HBUIUserInteractionManager, NSString, NSObject;

@interface HBUIUserInteractionAssertion : NSObject <BSInvalidatable> {

	AB _acquired;
	HBUIUserInteractionManager* _manager;
	NSString* _reason;
	NSObject*<OS_dispatch_source> _expirySource;

}

@property (nonatomic,__weak,readonly) HBUIUserInteractionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                   //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) AB acquired;                                              //@synthesize acquired=_acquired - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> expirySource;                 //@synthesize expirySource=_expirySource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(NSString *)reason;
-(HBUIUserInteractionManager *)manager;
-(void)_invalidateWithReason:(id)arg1 ;
-(AB)acquired;
-(void)setExpirySource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)expirySource;
-(id)initWithManager:(id)arg1 reason:(id)arg2 timeout:(double)arg3 ;
@end

