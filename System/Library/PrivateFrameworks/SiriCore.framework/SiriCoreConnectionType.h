/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SiriCoreConnectionType : NSObject {

	long long _technology;

}
-(id)description;
-(long long)technology;
-(id)initWithTechnology:(long long)arg1 ;
-(BOOL)isWWAN;
-(BOOL)isEdge;
-(BOOL)canUseWiFiDirectly;
-(long long)diagnosticConnectionType;
-(unsigned long long)aggregatorConnectionType;
@end

