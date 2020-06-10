/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSString;

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic,readonly) unsigned capabilities; 
@property (nonatomic,readonly) NSString * endpointUID; 
@property (nonatomic,readonly) NSString * outputDeviceUID; 
-(unsigned long long)type;
-(unsigned)capabilities;
-(NSString *)outputDeviceUID;
-(NSString *)endpointUID;
-(id)initWithCapabilities:(unsigned)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3 ;
@end

