/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSString;

@interface MRSetDefaultSupportedCommandsMessage : MRProtocolMessage

@property (nonatomic,readonly) NSArray * supportedCommands; 
@property (nonatomic,readonly) NSString * bundleID; 
-(unsigned long long)type;
-(NSString *)bundleID;
-(NSArray *)supportedCommands;
-(id)initWithDefaultSupportedCommands:(id)arg1 forClient:(id)arg2 ;
@end

