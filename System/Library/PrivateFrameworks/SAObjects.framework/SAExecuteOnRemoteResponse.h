/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SARemoteDevice, NSString;

@interface SAExecuteOnRemoteResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SARemoteDevice * remoteDevice; 
@property (assign,nonatomic) BOOL responseFromRemote; 
@property (nonatomic,retain) id<SAAceCommand> result; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)executeOnRemoteResponse;
+(id)executeOnRemoteResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id<SAAceCommand>)result;
-(id)groupIdentifier;
-(void)setResult:(id<SAAceCommand>)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SARemoteDevice *)remoteDevice;
-(void)setRemoteDevice:(SARemoteDevice *)arg1 ;
-(BOOL)responseFromRemote;
-(void)setResponseFromRemote:(BOOL)arg1 ;
@end

