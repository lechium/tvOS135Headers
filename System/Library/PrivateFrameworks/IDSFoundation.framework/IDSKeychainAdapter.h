/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSKeychainAdapter <NSObject>
@required
-(BOOL)setKeychainData:(id)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 allowSync:(BOOL)arg5 error:(int*)arg6;
-(BOOL)getKeychainData:(id*)arg1 service:(id)arg2 account:(id)arg3 accessGroup:(id)arg4 error:(int*)arg5;
-(BOOL)removeKeychainDataOnService:(id)arg1 account:(id)arg2 error:(int*)arg3;

@end

