/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IMRuntimeTestRun;

@interface IMRuntimeTest : NSObject {

	IMRuntimeTestRun* _testRun;
	/*^block*/id _completion;

}

@property (retain) IMRuntimeTestRun * testRun;              //@synthesize testRun=_testRun - In the implementation block
@property (copy) id completion;                             //@synthesize completion=_completion - In the implementation block
+(id)logHandle;
+(id)testName;
+(void)testLog:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(id)logHandle;
-(void)tearDown;
-(void)setUp;
-(id)testName;
-(void)dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(Class)testRunClass;
-(IMRuntimeTestRun *)testRun;
-(void)testLog:(id)arg1 ;
-(void)setTestRun:(IMRuntimeTestRun *)arg1 ;
-(void)startTest;
-(void)finishTest;
-(void)runTest:(/*^block*/id)arg1 ;
-(void)finishTestAfterInterval:(double)arg1 ;
@end
