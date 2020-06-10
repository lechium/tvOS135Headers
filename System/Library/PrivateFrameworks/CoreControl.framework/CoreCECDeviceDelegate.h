/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreControl.framework/CoreControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>
@optional
-(void)cecDeviceShouldAssertActiveSource:(id)arg1;
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;

@end

