/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PKCloudStoreCoding.h>

@class NSString, NSURL, PKMapsMerchant, PKMapsBrand;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {

	BOOL _useRawMerchantData;
	NSString* _displayName;
	NSURL* _originURL;
	NSString* _webMerchantIdentifier;
	NSString* _webMerchantName;
	long long _adamIdentifier;
	long long _industryCode;
	NSString* _industryCategory;
	NSString* _name;
	NSString* _rawName;
	NSString* _merchantIdentifier;
	NSString* _rawCANL;
	NSString* _rawCity;
	NSString* _rawState;
	NSString* _rawCountry;
	NSString* _city;
	NSString* _state;
	NSString* _zip;
	long long _cleanConfidenceLevel;
	long long _fallbackcategory;
	NSString* _fallbackDetailedCategory;
	PKMapsMerchant* _mapsMerchant;
	PKMapsBrand* _mapsBrand;

}

@property (nonatomic,copy) NSURL * originURL;                                //@synthesize originURL=_originURL - In the implementation block
@property (nonatomic,copy) NSString * webMerchantIdentifier;                 //@synthesize webMerchantIdentifier=_webMerchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * webMerchantName;                       //@synthesize webMerchantName=_webMerchantName - In the implementation block
@property (assign,nonatomic) long long adamIdentifier;                       //@synthesize adamIdentifier=_adamIdentifier - In the implementation block
@property (assign,nonatomic) long long industryCode;                         //@synthesize industryCode=_industryCode - In the implementation block
@property (nonatomic,copy) NSString * industryCategory;                      //@synthesize industryCategory=_industryCategory - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * rawName;                               //@synthesize rawName=_rawName - In the implementation block
@property (nonatomic,copy) NSString * merchantIdentifier;                    //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,copy) NSString * rawCANL;                               //@synthesize rawCANL=_rawCANL - In the implementation block
@property (nonatomic,copy) NSString * rawCity;                               //@synthesize rawCity=_rawCity - In the implementation block
@property (nonatomic,copy) NSString * rawState;                              //@synthesize rawState=_rawState - In the implementation block
@property (nonatomic,copy) NSString * rawCountry;                            //@synthesize rawCountry=_rawCountry - In the implementation block
@property (nonatomic,copy) NSString * city;                                  //@synthesize city=_city - In the implementation block
@property (nonatomic,copy) NSString * state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * zip;                                   //@synthesize zip=_zip - In the implementation block
@property (assign,nonatomic) long long cleanConfidenceLevel;                 //@synthesize cleanConfidenceLevel=_cleanConfidenceLevel - In the implementation block
@property (assign,nonatomic) BOOL useRawMerchantData;                        //@synthesize useRawMerchantData=_useRawMerchantData - In the implementation block
@property (assign,nonatomic) long long fallbackcategory;                     //@synthesize fallbackcategory=_fallbackcategory - In the implementation block
@property (nonatomic,copy) NSString * fallbackDetailedCategory;              //@synthesize fallbackDetailedCategory=_fallbackDetailedCategory - In the implementation block
@property (nonatomic,retain) PKMapsMerchant * mapsMerchant;                  //@synthesize mapsMerchant=_mapsMerchant - In the implementation block
@property (nonatomic,retain) PKMapsBrand * mapsBrand;                        //@synthesize mapsBrand=_mapsBrand - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL hasMapsMatch; 
@property (nonatomic,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * detailedCategory; 
@property (nonatomic,readonly) NSURL * heroImageURL; 
@property (nonatomic,readonly) NSString * heroImageAttribution; 
@property (nonatomic,readonly) NSURL * logoImageURL; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSURL * businessChatURL; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)uniqueIdentifier;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(long long)category;
-(NSString *)phoneNumber;
-(NSString *)displayName;
-(unsigned long long)itemType;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(long long)industryCode;
-(void)setIndustryCode:(long long)arg1 ;
-(NSString *)industryCategory;
-(void)setIndustryCategory:(NSString *)arg1 ;
-(NSString *)zip;
-(void)setZip:(NSString *)arg1 ;
-(long long)adamIdentifier;
-(void)setAdamIdentifier:(long long)arg1 ;
-(NSURL *)heroImageURL;
-(id)jsonDictionaryRepresentation;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)encodeWithCloudStoreCoder:(id)arg1 ;
-(id)initWithCloudStoreCoder:(id)arg1 ;
-(id)recordTypesAndNamesIncludingServerData:(BOOL)arg1 ;
-(void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1 ;
-(void)setRawName:(NSString *)arg1 ;
-(BOOL)hasCloudArchivableDeviceData;
-(BOOL)hasMapsMatch;
-(BOOL)isCloudArchivableDeviceDataEqual:(id)arg1 ;
-(NSString *)detailedCategory;
-(NSURL *)businessChatURL;
-(NSString *)rawState;
-(PKMapsMerchant *)mapsMerchant;
-(NSString *)rawCity;
-(long long)cleanConfidenceLevel;
-(NSString *)rawCANL;
-(NSString *)rawName;
-(NSString *)webMerchantIdentifier;
-(NSString *)webMerchantName;
-(NSURL *)originURL;
-(void)setFallbackcategory:(long long)arg1 ;
-(void)setMapsMerchant:(PKMapsMerchant *)arg1 ;
-(void)setMapsBrand:(PKMapsBrand *)arg1 ;
-(BOOL)useRawMerchantData;
-(PKMapsBrand *)mapsBrand;
-(void)_regenerateDisplayName;
-(NSString *)rawCountry;
-(long long)fallbackcategory;
-(NSString *)fallbackDetailedCategory;
-(BOOL)isEqualToMerchant:(id)arg1 ;
-(void)setUseRawMerchantData:(BOOL)arg1 ;
-(NSURL *)logoImageURL;
-(NSString *)heroImageAttribution;
-(void)setOriginURL:(NSURL *)arg1 ;
-(void)setWebMerchantIdentifier:(NSString *)arg1 ;
-(void)setWebMerchantName:(NSString *)arg1 ;
-(void)setRawCANL:(NSString *)arg1 ;
-(void)setRawCity:(NSString *)arg1 ;
-(void)setRawState:(NSString *)arg1 ;
-(void)setRawCountry:(NSString *)arg1 ;
-(void)setCleanConfidenceLevel:(long long)arg1 ;
-(void)setFallbackDetailedCategory:(NSString *)arg1 ;
@end

