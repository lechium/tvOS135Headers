/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface _PBSAssertionManager : NSObject {

	Class _assertionClass;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableSet* _activeAssertionIdentifiers;

}

@property (nonatomic,readonly) Class assertionClass;                                   //@synthesize assertionClass=_assertionClass - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activeAssertionIdentifiers;              //@synthesize activeAssertionIdentifiers=_activeAssertionIdentifiers - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)deregisterAssertion:(id)arg1 ;
-(void)registerAssertion:(id)arg1 ;
-(id)initWithAssertionClass:(Class)arg1 ;
-(NSMutableSet *)activeAssertionIdentifiers;
-(Class)assertionClass;
@end

