/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:19 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class NSDictionary, NSDate, _MRNowPlayingPlayerPathProtobuf;

@interface MRSendCommandMessage : MRProtocolMessage {

	NSDictionary* _options;
	NSDate* _serializationDate;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate;                                //@synthesize serializationDate=_serializationDate - In the implementation block
@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath; 
@property (nonatomic,readonly) unsigned appOptions; 
-(NSDictionary *)options;
-(unsigned long long)type;
-(unsigned)command;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(unsigned)appOptions;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 playerPath:(id)arg3 ;
-(NSDate *)serializationDate;
@end

