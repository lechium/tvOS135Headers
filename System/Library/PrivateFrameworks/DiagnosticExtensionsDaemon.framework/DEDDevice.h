/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <libobjc.A.dylib/DEDDeviceUISupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSString, NSSet, SFDevice;

@interface DEDDevice : NSObject <DEDDeviceUISupport, NSSecureCoding, NSCopying, DEDSecureArchiving> {

	NSString* _address;
	NSString* _build;
	NSString* _color;
	NSString* _deviceClass;
	NSString* _enclosureColor;
	NSString* _identifier;
	NSString* _model;
	NSString* _name;
	NSString* _productType;
	NSString* _platform;
	NSSet* _capabilities;
	long long _status;
	long long _transport;
	long long _remoteTransport;
	SFDevice* _sfDevice;
	NSString* __hashingKey;

}

@property (nonatomic,retain) NSString * _hashingKey;                //@synthesize _hashingKey=__hashingKey - In the implementation block
@property (retain) NSSet * capabilities;                            //@synthesize capabilities=_capabilities - In the implementation block
@property (retain) NSString * address;                              //@synthesize address=_address - In the implementation block
@property (retain) NSString * build;                                //@synthesize build=_build - In the implementation block
@property (retain) NSString * color;                                //@synthesize color=_color - In the implementation block
@property (retain) NSString * deviceClass;                          //@synthesize deviceClass=_deviceClass - In the implementation block
@property (retain) NSString * enclosureColor;                       //@synthesize enclosureColor=_enclosureColor - In the implementation block
@property (retain) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * model;                                //@synthesize model=_model - In the implementation block
@property (retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (retain) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (retain) NSString * platform;                             //@synthesize platform=_platform - In the implementation block
@property (assign) long long status;                                //@synthesize status=_status - In the implementation block
@property (assign) long long transport;                             //@synthesize transport=_transport - In the implementation block
@property (assign) long long remoteTransport;                       //@synthesize remoteTransport=_remoteTransport - In the implementation block
@property (retain) SFDevice * sfDevice;                             //@synthesize sfDevice=_sfDevice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)currentDevice;
+(id)archivedClasses;
+(id)nilSafeDevice;
+(id)deviceClassForProductType:(id)arg1 ;
+(id)modelForProductType:(id)arg1 ;
+(id)deviceWithDictionary:(id)arg1 ;
+(id)_currentDeviceId;
+(id)deviceForSFDevice:(id)arg1 andStatus:(long long)arg2 ;
+(id)deviceForSFDevice:(id)arg1 systemInfo:(id)arg2 andStatus:(long long)arg3 ;
+(id)idsDeviceWithDevice:(id)arg1 address:(id)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)address;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(NSString *)build;
-(NSString *)productType;
-(NSString *)deviceClass;
-(id)imageData;
-(NSString *)model;
-(void)setStatus:(long long)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(long long)transport;
-(void)setTransport:(long long)arg1 ;
-(void)setDeviceClass:(NSString *)arg1 ;
-(void)setCapabilities:(NSSet *)arg1 ;
-(NSSet *)capabilities;
-(void)setPlatform:(NSString *)arg1 ;
-(NSString *)platform;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(id)publicLogDescription;
-(id)shortDescription;
-(NSString *)enclosureColor;
-(void)setEnclosureColor:(NSString *)arg1 ;
-(id)serialize;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(BOOL)hasCapabilities:(id)arg1 ;
-(void)setProductType:(NSString *)arg1 ;
-(BOOL)isCurrentDevice;
-(id)hashingKey;
-(long long)remoteTransport;
-(id)hashingKeyForTempDevice;
-(BOOL)isTemporaryDevice;
-(void)setBuild:(NSString *)arg1 ;
-(void)setRemoteTransport:(long long)arg1 ;
-(void)setSfDevice:(SFDevice *)arg1 ;
-(NSString *)_hashingKey;
-(void)set_hashingKey:(NSString *)arg1 ;
-(BOOL)isLikeDevice:(id)arg1 ;
-(BOOL)isMoreCompleteThan:(id)arg1 ;
-(SFDevice *)sfDevice;
-(id)imageURLForScale:(float)arg1 ;
-(id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(long long)arg4 variant:(long long)arg5 scale:(float)arg6 ;
-(void)fetchIconImageDataForScale:(float)arg1 completionCompletion:(/*^block*/id)arg2 ;
@end
