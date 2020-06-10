/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PBSMigrationContext : NSObject {

	NSString* _fromVersion;
	NSString* _fromBuild;
	NSString* _toVersion;
	NSString* _toBuild;

}

@property (nonatomic,copy,readonly) NSString * fromVersion;              //@synthesize fromVersion=_fromVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * fromBuild;                //@synthesize fromBuild=_fromBuild - In the implementation block
@property (nonatomic,copy,readonly) NSString * toVersion;                //@synthesize toVersion=_toVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * toBuild;                  //@synthesize toBuild=_toBuild - In the implementation block
@property (nonatomic,readonly) BOOL isOSVersionUpdate; 
@property (nonatomic,readonly) BOOL isBuildUpdate; 
@property (nonatomic,readonly) BOOL isFreshInstall; 
+(long long)compareOSVersion:(id)arg1 withOSVersion:(id)arg2 ;
+(long long)compareBuild:(id)arg1 withBuild:(id)arg2 ;
+(id)contextFromBuild:(id)arg1 fromVersion:(id)arg2 toBuild:(id)arg3 toVersion:(id)arg4 ;
-(id)description;
-(id)init;
-(id)_init;
-(NSString *)fromVersion;
-(NSString *)fromBuild;
-(NSString *)toVersion;
-(NSString *)toBuild;
-(BOOL)isBuildUpdate;
-(BOOL)isOSVersionUpdate;
-(BOOL)isFreshInstall;
-(long long)compareFromOSVersionWithOSVersion:(id)arg1 ;
-(long long)compareFromBuildVersionWithBuildVersion:(id)arg1 ;
-(long long)compareToOSVersionWithOSVersion:(id)arg1 ;
-(long long)compareToBuildVersionWithBuildVersion:(id)arg1 ;
@end
