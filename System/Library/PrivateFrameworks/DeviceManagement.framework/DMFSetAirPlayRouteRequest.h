/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFSetAirPlayRouteRequest : DMFTaskRequest {

	BOOL _suppressPasscodePrompt;
	NSString* _routeUID;
	NSString* _password;

}

@property (nonatomic,copy) NSString * routeUID;                        //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (assign,nonatomic) BOOL suppressPasscodePrompt;              //@synthesize suppressPasscodePrompt=_suppressPasscodePrompt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(NSString *)routeUID;
-(BOOL)suppressPasscodePrompt;
-(void)setSuppressPasscodePrompt:(BOOL)arg1 ;
@end

