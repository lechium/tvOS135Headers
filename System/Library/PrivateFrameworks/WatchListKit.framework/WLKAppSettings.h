/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLKAppSettings : NSObject <NSSecureCoding> {

	BOOL _obsolete;
	NSString* _channelID;
	NSString* _displayName;
	unsigned long long _accessStatus;
	NSString* _externalID;

}

@property (nonatomic,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) unsigned long long accessStatus;              //@synthesize accessStatus=_accessStatus - In the implementation block
@property (nonatomic,readonly) NSString * externalID;                      //@synthesize externalID=_externalID - In the implementation block
@property (assign,nonatomic) BOOL obsolete;                                //@synthesize obsolete=_obsolete - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isExternalID:(id)arg1 equalToExternalID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)obsolete;
-(void)setObsolete:(BOOL)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)channelID;
-(unsigned long long)accessStatus;
-(void)setAccessStatus:(unsigned long long)arg1 ;
-(id)initWithChannelID:(id)arg1 accessStatus:(unsigned long long)arg2 displayName:(id)arg3 externalID:(id)arg4 ;
-(BOOL)isEqualToAppSettings:(id)arg1 ;
-(id)_statusStrings;
-(id)JSONDictionary;
@end
