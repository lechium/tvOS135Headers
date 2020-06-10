/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSDisplayObserving.h>
#import <libobjc.A.dylib/FBSDisplayLayoutPublisherObserving.h>

@class FBSDisplayLayoutPublisher, FBSDisplayLayout, NSString;

@interface FBMainDisplayLayoutPublisher : NSObject <FBSDisplayObserving, FBSDisplayLayoutPublisherObserving> {

	FBSDisplayLayoutPublisher* _publisher;
	int _displayBacklightToken;

}

@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,nonatomic) long long backlightLevel; 
@property (getter=isTransitioning,nonatomic,readonly) BOOL transitioning; 
@property (nonatomic,readonly) FBSDisplayLayout * currentLayout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(long long)interfaceOrientation;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)flush;
-(id)addElement:(id)arg1 ;
-(FBSDisplayLayout *)currentLayout;
-(id)_addElement:(id)arg1 forKey:(id)arg2 ;
-(void)publisher:(id)arg1 didUpdateLayout:(id)arg2 withTransition:(id)arg3 ;
-(long long)backlightLevel;
-(void)setBacklightLevel:(long long)arg1 ;
-(BOOL)isTransitioning;
-(id)transitionAssertionWithReason:(id)arg1 ;
-(void)displayMonitor:(id)arg1 didUpdateIdentity:(id)arg2 withConfiguration:(id)arg3 ;
-(id)_initWithPublisher:(id)arg1 ;
@end

