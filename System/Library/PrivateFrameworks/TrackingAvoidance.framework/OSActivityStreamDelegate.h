/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:52 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSActivityStreamDelegate <NSObject>
@optional
-(void)streamDidStart:(id)arg1;
-(void)streamDidStop:(id)arg1;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 error:(id)arg3;
-(void)streamDidFail:(id)arg1 error:(id)arg2;

@required
-(BOOL)activityStream:(id)arg1 results:(id)arg2;

@end

