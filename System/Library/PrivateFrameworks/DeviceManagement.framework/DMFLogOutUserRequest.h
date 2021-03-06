/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFLogOutUserRequest : DMFTaskRequest {

	BOOL _forceLogout;

}

@property (assign,nonatomic) BOOL forceLogout;              //@synthesize forceLogout=_forceLogout - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
+(BOOL)isPermittedOnUserConnection;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
@end

