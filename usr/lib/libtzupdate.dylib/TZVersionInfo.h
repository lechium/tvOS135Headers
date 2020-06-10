/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libtzupdate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSNumber, NSURL;

@interface TZVersionInfo : NSObject {

	NSString* _tzDataVersion;
	NSString* _bundleVersion;
	NSString* _icuTZSchemaVersion;
	NSArray* _changedFiles;
	NSDictionary* _alertZones;
	NSNumber* _shouldAlertAll;
	NSURL* _diskLocation;

}

@property (retain) NSString * tzDataVersion;                   //@synthesize tzDataVersion=_tzDataVersion - In the implementation block
@property (retain) NSString * bundleVersion;                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (retain) NSString * icuTZSchemaVersion;              //@synthesize icuTZSchemaVersion=_icuTZSchemaVersion - In the implementation block
@property (retain) NSArray * changedFiles;                     //@synthesize changedFiles=_changedFiles - In the implementation block
@property (retain) NSDictionary * alertZones;                  //@synthesize alertZones=_alertZones - In the implementation block
@property (retain) NSNumber * shouldAlertAll;                  //@synthesize shouldAlertAll=_shouldAlertAll - In the implementation block
@property (readonly) NSString * versionString; 
@property (retain) NSURL * diskLocation;                       //@synthesize diskLocation=_diskLocation - In the implementation block
+(id)versionInfoFromDefaultSystem;
+(id)versionInfoFromContainerDirectory:(id)arg1 ;
+(id)versionInfoWithDictionary:(id)arg1 isPartial:(BOOL)arg2 ;
+(BOOL)_verifyVersionInfoDictionary:(id)arg1 ;
+(id)blankVersionInfo;
+(id)_tzDataVersionFromZoneinfoDirectory:(id)arg1 withError:(id*)arg2 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)versionString;
-(void)setBundleVersion:(NSString *)arg1 ;
-(id)_initWithVersionInfoDictionary:(id)arg1 isPartial:(BOOL)arg2 ;
-(NSString *)tzDataVersion;
-(NSString *)icuTZSchemaVersion;
-(NSArray *)changedFiles;
-(NSDictionary *)alertZones;
-(NSNumber *)shouldAlertAll;
-(NSURL *)diskLocation;
-(BOOL)isBlank;
-(void)setTzDataVersion:(NSString *)arg1 ;
-(void)setIcuTZSchemaVersion:(NSString *)arg1 ;
-(void)setChangedFiles:(NSArray *)arg1 ;
-(void)setAlertZones:(NSDictionary *)arg1 ;
-(void)setShouldAlertAll:(NSNumber *)arg1 ;
-(void)setDiskLocation:(NSURL *)arg1 ;
@end

