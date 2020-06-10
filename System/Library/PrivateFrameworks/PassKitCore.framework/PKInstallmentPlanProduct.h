/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet, NSDictionary;

@interface PKInstallmentPlanProduct : NSObject <NSSecureCoding, NSCopying> {

	BOOL _upgradeEligible;
	NSString* _identifier;
	NSString* _model;
	NSString* _capacity;
	NSString* _color;
	unsigned long long _warrantyYears;
	NSSet* _features;
	NSString* _serialNumber;
	NSDictionary* _iconURLs;
	NSDictionary* _splashImageURLs;

}

@property (nonatomic,copy) NSDictionary * iconURLs;                                      //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,copy) NSDictionary * splashImageURLs;                               //@synthesize splashImageURLs=_splashImageURLs - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * model;                                             //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * capacity;                                          //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,copy) NSString * color;                                             //@synthesize color=_color - In the implementation block
@property (assign,getter=isUpgradeEligible,nonatomic) BOOL upgradeEligible;              //@synthesize upgradeEligible=_upgradeEligible - In the implementation block
@property (assign,nonatomic) unsigned long long warrantyYears;                           //@synthesize warrantyYears=_warrantyYears - In the implementation block
@property (nonatomic,copy) NSSet * features;                                             //@synthesize features=_features - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                                      //@synthesize serialNumber=_serialNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)capacity;
-(NSString *)model;
-(void)setCapacity:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(NSSet *)features;
-(NSString *)color;
-(void)setColor:(NSString *)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSDictionary *)iconURLs;
-(void)setIconURLs:(NSDictionary *)arg1 ;
-(void)setFeatures:(NSSet *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(id)_imageURLFromImageURLs:(id)arg1 forScale:(double)arg2 suffix:(id)arg3 ;
-(BOOL)isEqualToInstallmentPlanProduct:(id)arg1 ;
-(id)iconURLForScale:(double)arg1 suffix:(id)arg2 ;
-(id)splashImageURLForScale:(double)arg1 suffix:(id)arg2 ;
-(BOOL)isUpgradeEligible;
-(void)setUpgradeEligible:(BOOL)arg1 ;
-(unsigned long long)warrantyYears;
-(void)setWarrantyYears:(unsigned long long)arg1 ;
-(NSDictionary *)splashImageURLs;
-(void)setSplashImageURLs:(NSDictionary *)arg1 ;
@end
