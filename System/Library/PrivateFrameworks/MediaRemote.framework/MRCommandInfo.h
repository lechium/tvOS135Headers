/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, _MRCommandInfoProtobuf, NSData;

@interface MRCommandInfo : NSObject {

	BOOL _hasCommand;
	BOOL _enabled;
	BOOL _hasEnabled;
	unsigned _command;
	NSDictionary* _options;

}

@property (nonatomic,readonly) _MRCommandInfoProtobuf * protobuf; 
@property (assign,nonatomic) unsigned command;                                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) BOOL hasCommand;                                  //@synthesize hasCommand=_hasCommand - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL hasEnabled;                                  //@synthesize hasEnabled=_hasEnabled - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSData * data; 
@property (nonatomic,copy,readonly) NSData * propertyListData; 
+(id)commandInfosFromData:(id)arg1 ;
+(id)dataFromCommandInfos:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)options;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)isEnabled;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(void)setCommand:(unsigned)arg1 ;
-(void)setHasCommand:(BOOL)arg1 ;
-(BOOL)hasCommand;
-(unsigned)command;
-(_MRCommandInfoProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(NSData *)propertyListData;
@end

