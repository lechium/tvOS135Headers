/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMBatteryStatusTestDelegate;
@interface IMBatteryStatus : NSObject {

	id<IMBatteryStatusTestDelegate> _testDelegate;

}

@property (assign,nonatomic,__weak) id<IMBatteryStatusTestDelegate> testDelegate;              //@synthesize testDelegate=_testDelegate - In the implementation block
@property (getter=isCharging,readonly) BOOL charging; 
-(BOOL)isCharging;
-(id<IMBatteryStatusTestDelegate>)testDelegate;
-(void)setTestDelegate:(id<IMBatteryStatusTestDelegate>)arg1 ;
@end
