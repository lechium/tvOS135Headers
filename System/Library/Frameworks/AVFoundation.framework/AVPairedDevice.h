/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject {

	AVPairedDeviceInternal* _ivars;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * pairedDeviceID; 
@property (nonatomic,readonly) NSString * modelID; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (nonatomic,readonly) NSString * productName; 
+(id)pairedDevicesConnectedToOutputDevice:(id)arg1 ;
-(NSString *)name;
-(void)dealloc;
-(NSString *)productName;
-(id)ID;
-(BOOL)isPlaying;
-(NSString *)modelID;
-(NSString *)pairedDeviceID;
-(id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(BOOL)arg4 productName:(id)arg5 ;
@end

