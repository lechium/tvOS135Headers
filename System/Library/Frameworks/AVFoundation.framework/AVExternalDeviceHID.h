/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVExternalDeviceHIDInternal, NSString;

@interface AVExternalDeviceHID : NSObject {

	AVExternalDeviceHIDInternal* _externalDeviceHID;

}

@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * screenID; 
@property (assign,nonatomic) long long inputMode; 
-(void)dealloc;
-(NSString *)UUID;
-(NSString *)screenID;
-(long long)inputMode;
-(id)_externalDevice;
-(id)_figEndpointHIDInputMode;
-(id)initWithExternalDeviceAndHIDDictionary:(id)arg1 hidDictionary:(id)arg2 ;
-(void)setInputMode:(long long)arg1 ;
@end

