/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BWSensorConfiguration : NSObject {

	NSString* _portType;
	NSString* _sensorIDString;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfo;

}

@property (nonatomic,readonly) NSString * portType;                            //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * sensorIDString;                      //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) NSDictionary * sensorIDDictionary;              //@synthesize sensorIDDictionary=_sensorIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraInfo;                      //@synthesize cameraInfo=_cameraInfo - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)portType;
-(id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4 ;
-(NSString *)sensorIDString;
-(NSDictionary *)sensorIDDictionary;
-(NSDictionary *)cameraInfo;
@end

