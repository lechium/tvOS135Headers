/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CATRemoteConnectionSendContext <NSObject>
@property (nonatomic,readonly) id userInfo; 
@property (nonatomic,readonly) BOOL hasBytesRemaining; 
@property (assign,nonatomic) unsigned long long bytesWritten; 
@property (nonatomic,readonly) unsigned long long clientBytesWritten; 
@required
-(id)userInfo;
-(unsigned long long)bytesWritten;
-(void)setBytesWritten:(unsigned long long)arg1;
-(BOOL)hasBytesRemaining;
-(id)bufferedDataWithError:(id*)arg1;
-(unsigned long long)clientBytesWritten;

@end

