/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPSecureChannelProxy.h>

@class CDPContext, NSString;

@interface CDPPiggybackingChannel : NSObject <CDPSecureChannelProxy> {

	CDPContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)sendPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)approverBackupRecordsExist;
-(unsigned long long)approveriCloudKeychainState;
-(id)_replyContextWithPakeData:(id)arg1 ;
@end
