/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSXPCConnection, NSString;


@protocol PLTrackableRequest
@property (readonly) NSXPCConnection * clientConnection; 
@property (readonly) NSString * taskIdentifier; 
@property (__weak) id<PLTrackableRequestDelegate> delegate; 
@property (assign,nonatomic) unsigned long long signpostID; 
@required
-(id<PLTrackableRequestDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(NSString *)taskIdentifier;
-(unsigned long long)signpostID;
-(void)setSignpostID:(unsigned long long)arg1;
-(NSXPCConnection *)clientConnection;
-(void)runDaemonSide;

@end
