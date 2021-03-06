/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSMapTable, NSObject;

@interface CoreDAVLogging : NSObject {

	NSMutableDictionary* _logDelegates;
	NSMapTable* _primaryLogDelegate;
	NSObject*<OS_dispatch_queue> _delegateMuckingQueue;

}
+(id)sharedLogging;
-(id)init;
-(id)logHandleForAccountInfoProvider:(id)arg1 ;
-(void)_logOldMessageForAccountInfoProvider:(id)arg1 level:(unsigned char)arg2 format:(const char*)arg3 ;
-(id)_delegatesToLogForProvider:(id)arg1 ;
-(BOOL)shouldLogAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(BOOL)_shouldOutputAtLevel:(long long)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)addLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(void)removeLogDelegate:(id)arg1 forAccountInfoProvider:(id)arg2 ;
-(id)delegatesToLogTransmittedDataForAccountInfoProvider:(id)arg1 ;
-(void)logDiagnosticForProvider:(id)arg1 withLevel:(long long)arg2 format:(id)arg3 args:(char*)arg4 ;
@end

