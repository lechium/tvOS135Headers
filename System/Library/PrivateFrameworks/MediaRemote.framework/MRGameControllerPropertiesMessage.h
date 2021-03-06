/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class _MRGameControllerPropertiesProtobuf;

@interface MRGameControllerPropertiesMessage : MRProtocolMessage

@property (nonatomic,readonly) _MRGameControllerPropertiesProtobuf * properties; 
@property (nonatomic,readonly) unsigned long long controllerID; 
-(unsigned long long)type;
-(_MRGameControllerPropertiesProtobuf *)properties;
-(unsigned long long)controllerID;
-(id)initWithGameControllerProperties:(id)arg1 controllerID:(unsigned long long)arg2 ;
@end

