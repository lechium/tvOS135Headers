/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying> {

	BOOL _initializeReadyForInteraction;
	BOOL _isLegacyFBSystemApp;
	BOOL _shouldWaitForMigrator;
	BOOL _resetDarkBootState;
	double _systemSleepInterval;
	/*^block*/id _registerServicesBlock;
	/*^block*/id _registerPostCheckInPreServiceInitializationCallbackBlock;
	/*^block*/id _registerLegacyPostInitCallbackBlock;

}

@property (nonatomic,readonly) BOOL _isLegacyFBSystemApp;                                                      //@synthesize isLegacyFBSystemApp=_isLegacyFBSystemApp - In the implementation block
@property (nonatomic,copy,readonly) id _registerPostCheckInPreServiceInitializationCallbackBlock;              //@synthesize registerPostCheckInPreServiceInitializationCallbackBlock=_registerPostCheckInPreServiceInitializationCallbackBlock - In the implementation block
@property (nonatomic,copy,readonly) id _registerLegacyPostInitCallbackBlock;                                   //@synthesize registerLegacyPostInitCallbackBlock=_registerLegacyPostInitCallbackBlock - In the implementation block
@property (nonatomic,readonly) BOOL initializeReadyForInteraction;                                             //@synthesize initializeReadyForInteraction=_initializeReadyForInteraction - In the implementation block
@property (nonatomic,readonly) BOOL resetDarkBootState;                                                        //@synthesize resetDarkBootState=_resetDarkBootState - In the implementation block
@property (nonatomic,readonly) BOOL shouldWaitForMigrator;                                                     //@synthesize shouldWaitForMigrator=_shouldWaitForMigrator - In the implementation block
@property (nonatomic,readonly) double systemSleepInterval;                                                     //@synthesize systemSleepInterval=_systemSleepInterval - In the implementation block
@property (nonatomic,copy,readonly) id registerAdditionalServicesBlock;                                        //@synthesize registerServicesBlock=_registerServicesBlock - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_initWithOptions:(id)arg1 ;
-(BOOL)_isLegacyFBSystemApp;
-(BOOL)initializeReadyForInteraction;
-(BOOL)resetDarkBootState;
-(BOOL)shouldWaitForMigrator;
-(double)systemSleepInterval;
-(id)registerAdditionalServicesBlock;
-(id)_registerPostCheckInPreServiceInitializationCallbackBlock;
-(id)_registerLegacyPostInitCallbackBlock;
@end

