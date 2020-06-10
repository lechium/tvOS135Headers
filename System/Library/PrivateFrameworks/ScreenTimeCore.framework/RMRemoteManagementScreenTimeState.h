/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/ScreenTimeCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface RMRemoteManagementScreenTimeState : PBCodable <NSCopying> {

	SCD_Struct_RM5* _daysSinceCreationDates;
	unsigned long long _alwaysAllowedAppsCount;
	unsigned long long _daysWithScreenTimeEnabled;
	unsigned long long _numberOfLimits;
	unsigned long long _timestamp;
	NSString* _familyMemberType;
	NSMutableArray* _limitedCategories;
	BOOL _contentPrivacyRestrictionsEnabled;
	BOOL _customDowntimeEnabled;
	BOOL _downtimeEnabled;
	BOOL _hasPasscode;
	BOOL _isManaged;
	BOOL _isManaging;
	BOOL _screenTimeEnabled;
	SCD_Struct_RM6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasScreenTimeEnabled; 
@property (assign,nonatomic) BOOL screenTimeEnabled;                                        //@synthesize screenTimeEnabled=_screenTimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDaysWithScreenTimeEnabled; 
@property (assign,nonatomic) unsigned long long daysWithScreenTimeEnabled;                  //@synthesize daysWithScreenTimeEnabled=_daysWithScreenTimeEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasFamilyMemberType; 
@property (nonatomic,retain) NSString * familyMemberType;                                   //@synthesize familyMemberType=_familyMemberType - In the implementation block
@property (assign,nonatomic) BOOL hasIsManaged; 
@property (assign,nonatomic) BOOL isManaged;                                                //@synthesize isManaged=_isManaged - In the implementation block
@property (assign,nonatomic) BOOL hasIsManaging; 
@property (assign,nonatomic) BOOL isManaging;                                               //@synthesize isManaging=_isManaging - In the implementation block
@property (assign,nonatomic) BOOL hasHasPasscode; 
@property (assign,nonatomic) BOOL hasPasscode;                                              //@synthesize hasPasscode=_hasPasscode - In the implementation block
@property (assign,nonatomic) BOOL hasDowntimeEnabled; 
@property (assign,nonatomic) BOOL downtimeEnabled;                                          //@synthesize downtimeEnabled=_downtimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasCustomDowntimeEnabled; 
@property (assign,nonatomic) BOOL customDowntimeEnabled;                                    //@synthesize customDowntimeEnabled=_customDowntimeEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfLimits; 
@property (assign,nonatomic) unsigned long long numberOfLimits;                             //@synthesize numberOfLimits=_numberOfLimits - In the implementation block
@property (nonatomic,retain) NSMutableArray * limitedCategories;                            //@synthesize limitedCategories=_limitedCategories - In the implementation block
@property (nonatomic,readonly) unsigned long long daysSinceCreationDatesCount; 
@property (nonatomic,readonly) unsigned long long* daysSinceCreationDates; 
@property (assign,nonatomic) BOOL hasAlwaysAllowedAppsCount; 
@property (assign,nonatomic) unsigned long long alwaysAllowedAppsCount;                     //@synthesize alwaysAllowedAppsCount=_alwaysAllowedAppsCount - In the implementation block
@property (assign,nonatomic) BOOL hasContentPrivacyRestrictionsEnabled; 
@property (assign,nonatomic) BOOL contentPrivacyRestrictionsEnabled;                        //@synthesize contentPrivacyRestrictionsEnabled=_contentPrivacyRestrictionsEnabled - In the implementation block
+(Class)limitedCategoriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isManaged;
-(void)setScreenTimeEnabled:(BOOL)arg1 ;
-(void)setHasScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasScreenTimeEnabled;
-(BOOL)screenTimeEnabled;
-(void)setIsManaged:(BOOL)arg1 ;
-(BOOL)hasPasscode;
-(void)setFamilyMemberType:(NSString *)arg1 ;
-(BOOL)hasFamilyMemberType;
-(void)setHasIsManaged:(BOOL)arg1 ;
-(BOOL)hasIsManaged;
-(void)setIsManaging:(BOOL)arg1 ;
-(void)setHasIsManaging:(BOOL)arg1 ;
-(BOOL)hasIsManaging;
-(void)setHasPasscode:(BOOL)arg1 ;
-(void)setHasHasPasscode:(BOOL)arg1 ;
-(BOOL)hasHasPasscode;
-(NSString *)familyMemberType;
-(BOOL)isManaging;
-(void)addLimitedCategories:(id)arg1 ;
-(unsigned long long)limitedCategoriesCount;
-(void)clearLimitedCategories;
-(id)limitedCategoriesAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)daysSinceCreationDatesCount;
-(void)clearDaysSinceCreationDates;
-(unsigned long long)daysSinceCreationDateAtIndex:(unsigned long long)arg1 ;
-(void)addDaysSinceCreationDate:(unsigned long long)arg1 ;
-(void)setDaysWithScreenTimeEnabled:(unsigned long long)arg1 ;
-(void)setHasDaysWithScreenTimeEnabled:(BOOL)arg1 ;
-(BOOL)hasDaysWithScreenTimeEnabled;
-(void)setDowntimeEnabled:(BOOL)arg1 ;
-(void)setHasDowntimeEnabled:(BOOL)arg1 ;
-(BOOL)hasDowntimeEnabled;
-(void)setCustomDowntimeEnabled:(BOOL)arg1 ;
-(void)setHasCustomDowntimeEnabled:(BOOL)arg1 ;
-(BOOL)hasCustomDowntimeEnabled;
-(void)setNumberOfLimits:(unsigned long long)arg1 ;
-(void)setHasNumberOfLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfLimits;
-(unsigned long long*)daysSinceCreationDates;
-(void)setDaysSinceCreationDates:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(void)setAlwaysAllowedAppsCount:(unsigned long long)arg1 ;
-(void)setHasAlwaysAllowedAppsCount:(BOOL)arg1 ;
-(BOOL)hasAlwaysAllowedAppsCount;
-(void)setContentPrivacyRestrictionsEnabled:(BOOL)arg1 ;
-(void)setHasContentPrivacyRestrictionsEnabled:(BOOL)arg1 ;
-(BOOL)hasContentPrivacyRestrictionsEnabled;
-(unsigned long long)daysWithScreenTimeEnabled;
-(BOOL)downtimeEnabled;
-(BOOL)customDowntimeEnabled;
-(unsigned long long)numberOfLimits;
-(NSMutableArray *)limitedCategories;
-(void)setLimitedCategories:(NSMutableArray *)arg1 ;
-(unsigned long long)alwaysAllowedAppsCount;
-(BOOL)contentPrivacyRestrictionsEnabled;
@end

