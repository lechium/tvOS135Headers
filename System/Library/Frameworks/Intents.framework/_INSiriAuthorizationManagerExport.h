/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _INSiriAuthorizationManagerExport <NSObject,JSExport>
@required
+(long long)_siriAuthorizationStatusForAppID:(id)arg1;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN9)arg2;
+(BOOL)_isSiriAuthorizationRestricted;
-(id)init;

@end

