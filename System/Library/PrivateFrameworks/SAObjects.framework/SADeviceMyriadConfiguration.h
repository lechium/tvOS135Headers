/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (assign,nonatomic) double deviceAdjustment; 
@property (assign,nonatomic) double deviceClass; 
@property (assign,nonatomic) double deviceDelay; 
@property (assign,nonatomic) double deviceTrumpDelay; 
+(id)deviceMyriadConfiguration;
+(id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)deviceClass;
-(void)setDeviceClass:(double)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(double)deviceAdjustment;
-(void)setDeviceAdjustment:(double)arg1 ;
-(double)deviceDelay;
-(void)setDeviceDelay:(double)arg1 ;
-(double)deviceTrumpDelay;
-(void)setDeviceTrumpDelay:(double)arg1 ;
@end

