/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSQuery.h>

@class NSString;

@interface LSExtensionPointQuery : _LSQuery {

	NSString* _identifier;
	NSString* _version;
	unsigned _platform;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * version;                 //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) unsigned platform;                  //@synthesize platform=_platform - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)extensionPointQueryForIdentifier:(id)arg1 platform:(unsigned)arg2 version:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)version;
-(unsigned)platform;
-(id)_initWithIdentifier:(id)arg1 platform:(unsigned)arg2 version:(id)arg3 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
@end
