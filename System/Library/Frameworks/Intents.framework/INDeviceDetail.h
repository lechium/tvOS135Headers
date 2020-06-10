/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INSpeakableString, INPerson;

@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	INSpeakableString* _deviceName;
	long long _deviceClass;
	INSpeakableString* _productName;
	INSpeakableString* _category;
	INPerson* _deviceOwner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long deviceClass;                             //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * productName;              //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) INPerson * deviceOwner;                       //@synthesize deviceOwner=_deviceOwner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(INSpeakableString *)category;
-(INSpeakableString *)productName;
-(long long)deviceClass;
-(INSpeakableString *)deviceName;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INPerson *)deviceOwner;
-(id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(long long)arg3 productName:(id)arg4 category:(id)arg5 deviceOwner:(id)arg6 ;
@end

