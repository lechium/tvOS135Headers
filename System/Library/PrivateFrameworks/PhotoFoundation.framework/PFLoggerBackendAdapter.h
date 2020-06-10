/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <libobjc.A.dylib/PFLoggerBackend.h>

@protocol OS_os_transaction;
@class NSObject, NSString;

@interface PFLoggerBackendAdapter : NSObject <PFLoggerBackend> {

	AQ _pendingTransactionCount;
	NSObject*<OS_os_transaction> _transaction;
	BOOL _runningUnderDebugger;

}

@property (assign) BOOL runningUnderDebugger;                              //@synthesize runningUnderDebugger=_runningUnderDebugger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL allowsConcurrentAccess; 
@property (nonatomic,readonly) BOOL formatsMessage; 
@property (nonatomic,readonly) BOOL outputsToDebuggerConsole; 
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
+(id)pathWithoutParametersFromString:(id)arg1 ;
+(long long)fileSizeMaxBytesFromString:(id)arg1 ;
+(long long)allFileSizeMaxBytesFromString:(id)arg1 ;
+(long long)parseByteSizeValueForKey:(id)arg1 inString:(id)arg2 ;
-(id)init;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginTransaction;
-(void)endTransaction;
-(BOOL)allowsConcurrentAccess;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)formatsMessage;
-(BOOL)outputsToDebuggerConsole;
-(BOOL)runningUnderDebugger;
-(void)setRunningUnderDebugger:(BOOL)arg1 ;
@end
