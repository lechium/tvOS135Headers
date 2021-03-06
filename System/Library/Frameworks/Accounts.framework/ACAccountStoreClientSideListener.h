/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACAccountStoreProtocol.h>

@class NSString;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClientSideListener;
-(void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1 ;
-(void)accountDidChange:(id)arg1 forType:(id)arg2 ;
@end

