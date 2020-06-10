/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVOutputDeviceAuthorizedPeerInternal, NSString, NSData;

@interface AVOutputDeviceAuthorizedPeer : NSObject {

	AVOutputDeviceAuthorizedPeerInternal* _ivars;

}

@property (nonatomic,readonly) NSString * peerID; 
@property (nonatomic,readonly) NSData * publicKey; 
@property (nonatomic,readonly) BOOL hasAdministratorPrivileges; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)dealloc;
-(NSData *)publicKey;
-(id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(BOOL)arg3 ;
-(NSString *)peerID;
-(BOOL)hasAdministratorPrivileges;
@end
