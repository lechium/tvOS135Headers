/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROHandlerProtocol
@required
-(int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
-(int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
-(int)handleGetValue:(id*)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;

@end

