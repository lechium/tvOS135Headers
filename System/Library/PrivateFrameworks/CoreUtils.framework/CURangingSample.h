/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface CURangingSample : NSObject {

	int _channel;
	int _rawRSSI;
	NSData* _deviceAddress;
	NSString* _deviceModel;

}

@property (assign,nonatomic) int channel;                       //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) int rawRSSI;                       //@synthesize rawRSSI=_rawRSSI - In the implementation block
-(id)description;
-(int)channel;
-(void)setChannel:(int)arg1 ;
-(int)rawRSSI;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setRawRSSI:(int)arg1 ;
@end

