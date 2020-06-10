/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>

@class FBProcess, BSWatchdog, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {

	FBProcess* _process;
	double _timeout;
	BSWatchdog* _watchdog;

}

@property (nonatomic,readonly) FBProcess * process;                 //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(void)_begin;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_didComplete;
-(FBProcess *)process;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)initWithProcess:(id)arg1 ;
@end
