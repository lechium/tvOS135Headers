/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVOutputDeviceImpl;
@class NSString, NSData;

@interface AVOutputDeviceInternal : NSObject {

	id<AVOutputDeviceImpl> impl;
	NSString* name;
	NSString* ID;
	long long deviceType;
	long long deviceSubType;
	NSString* manufacturer;
	NSString* modelID;
	NSString* serialNumber;
	NSString* firmwareVersion;
	NSData* MACAddress;
	unsigned long long deviceFeatures;

}
@end
