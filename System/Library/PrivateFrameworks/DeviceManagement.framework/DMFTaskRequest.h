/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@interface DMFTaskRequest : CATTaskRequest
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
+(BOOL)isPermittedOnPlatform:(unsigned long long)arg1 ;
+(BOOL)isPermittedOnCurrentPlatform;
@end

