/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/SHConfiguration.h>

@class NSString, NSDictionary, SHBag;

@interface SHPartnerConfiguration : SHConfiguration {

	NSString* _partnerName;
	NSDictionary* _locallyProvidedBag;
	SHBag* _bag;
	NSString* _installationID;

}

@property (nonatomic,retain) NSDictionary * locallyProvidedBag;              //@synthesize locallyProvidedBag=_locallyProvidedBag - In the implementation block
@property (nonatomic,retain) SHBag * bag;                                    //@synthesize bag=_bag - In the implementation block
@property (nonatomic,copy,readonly) NSString * installationID;               //@synthesize installationID=_installationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * partnerName;                  //@synthesize partnerName=_partnerName - In the implementation block
+(BOOL)validateAPIKey:(id)arg1 ;
+(BOOL)validatePartnerName:(id)arg1 ;
+(BOOL)validateInstallationID:(id)arg1 ;
-(SHBag *)bag;
-(void)setBag:(SHBag *)arg1 ;
-(NSString *)partnerName;
-(id)initWithPartnerName:(id)arg1 ;
-(void)loadBag:(/*^block*/id)arg1 ;
-(id)initWithPartnerName:(id)arg1 apiKey:(id)arg2 host:(id)arg3 ;
-(void)updateEndpoint:(id)arg1 withCountryCode:(id)arg2 ;
-(void)setLocallyProvidedBag:(NSDictionary *)arg1 ;
-(NSString *)installationID;
-(NSDictionary *)locallyProvidedBag;
-(id)initWithPartnerName:(id)arg1 endpoint:(id)arg2 apiKey:(id)arg3 ;
@end

