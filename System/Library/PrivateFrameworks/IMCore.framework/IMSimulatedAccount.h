/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMAccount.h>

@class IMHandle;

@interface IMSimulatedAccount : IMAccount {

	IMHandle* _loginHandle;

}

@property (nonatomic,retain) IMHandle * loginHandle;              //@synthesize loginHandle=_loginHandle - In the implementation block
-(BOOL)isConnected;
-(BOOL)isOperational;
-(BOOL)supportsRegistration;
-(id)loginIMHandle;
-(void)setLoginHandle:(IMHandle *)arg1 ;
-(IMHandle *)loginHandle;
@end
