/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:13:16 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FSUserFontServicesManager : NSObject
+(void)GSFontRegisterPersistentURLs:(id)arg1 enabled:(BOOL)arg2 forProfileFonts:(BOOL)arg3 withReply:(/*^block*/id)arg4 ;
+(void)GSFontUnregisterPersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
+(void)GSFontEnableOrDisablePersistentURLs:(id)arg1 forProfileFonts:(BOOL)arg2 enabled:(BOOL)arg3 suspend:(BOOL)arg4 withReply:(/*^block*/id)arg5 ;
+(id)_UserFontServicesConnection;
@end
