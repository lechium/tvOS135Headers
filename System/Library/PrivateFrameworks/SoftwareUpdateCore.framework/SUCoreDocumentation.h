/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSURL;

@interface SUCoreDocumentation : NSObject <NSSecureCoding> {

	NSData* _releaseNotesSummary;
	NSData* _releaseNotes;
	NSData* _licenseAgreement;
	NSString* _humanReadableUpdateName;
	NSNumber* _slaVersion;
	NSURL* _localBundleURL;
	NSURL* _serverAssetURL;
	NSData* _serverAssetMeasurement;
	NSString* _serverAssetAlgorithm;
	long long _serverAssetChunkSize;
	NSString* _language;
	NSString* _releaseNotesSummaryFileName;
	NSString* _releaseNotesFileName;
	NSString* _licenseAgreementFileName;

}

@property (nonatomic,retain) NSData * releaseNotesSummary;                        //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (nonatomic,retain) NSData * releaseNotes;                               //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) NSData * licenseAgreement;                           //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                  //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain) NSNumber * slaVersion;                               //@synthesize slaVersion=_slaVersion - In the implementation block
@property (nonatomic,retain) NSURL * localBundleURL;                              //@synthesize localBundleURL=_localBundleURL - In the implementation block
@property (nonatomic,retain) NSURL * serverAssetURL;                              //@synthesize serverAssetURL=_serverAssetURL - In the implementation block
@property (nonatomic,retain) NSData * serverAssetMeasurement;                     //@synthesize serverAssetMeasurement=_serverAssetMeasurement - In the implementation block
@property (nonatomic,retain) NSString * serverAssetAlgorithm;                     //@synthesize serverAssetAlgorithm=_serverAssetAlgorithm - In the implementation block
@property (assign,nonatomic) long long serverAssetChunkSize;                      //@synthesize serverAssetChunkSize=_serverAssetChunkSize - In the implementation block
@property (nonatomic,retain) NSString * language;                                 //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesSummaryFileName;              //@synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesFileName;                     //@synthesize releaseNotesFileName=_releaseNotesFileName - In the implementation block
@property (nonatomic,retain) NSString * licenseAgreementFileName;                 //@synthesize licenseAgreementFileName=_licenseAgreementFileName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)summary;
-(void)setReleaseNotes:(NSData *)arg1 ;
-(NSData *)releaseNotes;
-(void)setReleaseNotesSummary:(NSData *)arg1 ;
-(NSData *)releaseNotesSummary;
-(NSData *)licenseAgreement;
-(NSString *)humanReadableUpdateName;
-(id)extendProperties;
-(id)initWithDocumentationAsset:(id)arg1 ;
-(NSData *)serverAssetMeasurement;
-(NSString *)serverAssetAlgorithm;
-(NSURL *)localBundleURL;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(NSString *)releaseNotesSummaryFileName;
-(id)_resourceFromBundle:(CFBundleRef)arg1 forKey:(id)arg2 ;
-(NSString *)releaseNotesFileName;
-(NSString *)licenseAgreementFileName;
-(void)setLicenseAgreement:(NSData *)arg1 ;
-(NSNumber *)slaVersion;
-(NSURL *)serverAssetURL;
-(long long)serverAssetChunkSize;
-(void)setSlaVersion:(NSNumber *)arg1 ;
-(void)setLocalBundleURL:(NSURL *)arg1 ;
-(void)setServerAssetURL:(NSURL *)arg1 ;
-(void)setServerAssetMeasurement:(NSData *)arg1 ;
-(void)setServerAssetAlgorithm:(NSString *)arg1 ;
-(void)setServerAssetChunkSize:(long long)arg1 ;
-(void)setReleaseNotesSummaryFileName:(NSString *)arg1 ;
-(void)setReleaseNotesFileName:(NSString *)arg1 ;
-(void)setLicenseAgreementFileName:(NSString *)arg1 ;
@end
