/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RunningBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol RBSServiceLocalProtocol;
@class NSHashTable, RBSAssertionDescriptor, RBSAssertionIdentifier, NSString, RBSTarget, NSArray;

@interface RBSAssertion : NSObject <BSDescriptionProviding> {

	NSHashTable* _observers;
	/*^block*/id _invalidationHandler;
	/*^block*/id _warningHandler;
	os_unfair_lock_s _lock;
	RBSAssertionDescriptor* _descriptor;
	unsigned long long _state;
	id<RBSServiceLocalProtocol> _service;

}

@property (nonatomic,copy,readonly) RBSAssertionIdentifier * identifier; 
@property (nonatomic,copy,readonly) RBSAssertionDescriptor * descriptor; 
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,copy,readonly) NSString * explanation; 
@property (nonatomic,readonly) RBSTarget * target; 
@property (nonatomic,copy,readonly) NSArray * attributes; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(oneway void)invalidate;
-(BOOL)isValid;
-(RBSTarget *)target;
-(RBSAssertionIdentifier *)identifier;
-(id)_observers;
-(unsigned long long)state;
-(void)removeObserver:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSArray *)attributes;
-(RBSAssertionDescriptor *)descriptor;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)initWithExplanation:(id)arg1 target:(id)arg2 attributes:(id)arg3 ;
-(BOOL)acquireWithError:(out id*)arg1 ;
-(BOOL)invalidateWithError:(out id*)arg1 ;
-(NSString *)explanation;
-(id)_initWithDescriptor:(id)arg1 service:(id)arg2 ;
-(BOOL)_clientInvalidateWithError:(out id*)arg1 ;
-(oneway void)acquireWithInvalidationHandler:(/*^block*/id)arg1 ;
-(void)setExpirationWarningHandler:(/*^block*/id)arg1 ;
-(id)_initWithServerValidatedDescriptor:(id)arg1 ;
-(void)_serverInvalidateWithError:(id)arg1 ;
-(void)_serverWillInvalidate;
-(void)_serverDidChangeIdentifier:(id)arg1 ;
@end

