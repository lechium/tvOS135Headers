/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _MROriginProtobuf;

@interface MROrigin : NSObject {

	long long _identifier;
	long long _type;
	NSString* _displayName;

}

@property (nonatomic,readonly) _MROriginProtobuf * protobuf; 
@property (nonatomic,readonly) long long identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (getter=isLocal,nonatomic,readonly) BOOL local; 
+(id)localOrigin;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(long long)identifier;
-(NSString *)displayName;
-(BOOL)isLocal;
-(_MROriginProtobuf *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithIdentifier:(long long)arg1 type:(long long)arg2 displayName:(id)arg3 ;
@end

