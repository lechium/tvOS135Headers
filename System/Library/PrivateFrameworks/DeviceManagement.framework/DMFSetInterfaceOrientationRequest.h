/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest {

	BOOL _lockOrientation;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) BOOL lockOrientation;                                 //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(BOOL)lockOrientation;
-(void)setLockOrientation:(BOOL)arg1 ;
@end
