/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface TVLJavaScriptContext : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueJSContextRef _globalContext;
	NSMutableArray* _postEvalCommandBlocks;
	NSMutableDictionary* _classesByName;
	NSMutableArray* _protectionArray;
	BOOL _isDestroyed;

}

@property (nonatomic,copy) NSString * JSContextName; 
@property (nonatomic,readonly) BOOL isDestroyed;                  //@synthesize isDestroyed=_isDestroyed - In the implementation block
+(id)contextFromJSContext:(OpaqueJSContextRef)arg1 ;
-(void)dealloc;
-(void)evaluate:(/*^block*/id)arg1 ;
-(void)setRemoteInspectionEnabled:(BOOL)arg1 ;
-(void)addPostEvaluateBlock:(/*^block*/id)arg1 ;
-(void)evaluate:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setClass:(OpaqueJSClassRef)arg1 forName:(id)arg2 ;
-(OpaqueJSClassRef)classForName:(id)arg1 ;
-(void)evaluateScript:(id)arg1 sourceURL:(id)arg2 ;
-(void)callFunction:(id)arg1 withArguments:(id)arg2 ;
-(BOOL)_makeProtectionPoolIfNecessary:(OpaqueJSContextRef)arg1 ;
-(void)_drainProtectionPool:(OpaqueJSContextRef)arg1 ;
-(void)_evaluateNowWithBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)evaluate:(/*^block*/id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDebugLabel:(id)arg1 ;
-(void)destroy:(/*^block*/id)arg1 ;
-(void)_addToProtectionPool:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 ;
-(NSString *)JSContextName;
-(void)setJSContextName:(NSString *)arg1 ;
-(BOOL)evaluateSynchronously:(/*^block*/id)arg1 ;
-(BOOL)isDestroyed;
-(void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)callFunction:(id)arg1 withArguments:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)callSynchronousFunction:(id)arg1 withArguments:(id)arg2 retainedReturnValue:(id*)arg3 ;
-(void)callFunction:(id)arg1 withArguments:(id)arg2 expectedNumberOfCallbackArguments:(unsigned long long)arg3 returnValueCallbackArg:(/*^block*/id)arg4 ;
@end

