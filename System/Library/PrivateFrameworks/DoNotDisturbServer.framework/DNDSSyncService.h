/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSSyncService <NSObject>
@property (assign,nonatomic,__weak) id<DNDSSyncServiceDelegate> delegate; 
@required
-(id<DNDSSyncServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)resume;
-(void)sendMessage:(id)arg1 withVersionNumber:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3;

@end

