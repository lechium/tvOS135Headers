/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject {

	AVInternalDeviceList* _internalList;

}

@property (nonatomic,copy) id changeListener; 
+(id)currentInputDevice;
+(BOOL)setInputDevice:(id)arg1 ;
+(id)defaultInputDevice;
+(id)defaultOutputDevice;
+(id)deviceForUID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)devices;
-(id)outputDevices;
-(id)inputDevices;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end

