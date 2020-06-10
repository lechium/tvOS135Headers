/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	NSString* _fullName;
	long long _personType;
	long long _manualSortOrder;
	NSString* _displayName;
	long long _verifiedType;
	NSString* _mergeTargetPersonIdentifier;
	NSData* _contactDescriptor;

}

@property (nonatomic,copy) NSData * contactDescriptor;                            //@synthesize contactDescriptor=_contactDescriptor - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                   //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) long long personType;                                //@synthesize personType=_personType - In the implementation block
@property (assign,nonatomic) long long manualSortOrder;                           //@synthesize manualSortOrder=_manualSortOrder - In the implementation block
@property (nonatomic,copy) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) long long verifiedType;                              //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,copy) NSString * mergeTargetPersonIdentifier;                //@synthesize mergeTargetPersonIdentifier=_mergeTargetPersonIdentifier - In the implementation block
+(BOOL)cplShouldIgnorePropertyForCoding:(id)arg1 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
+(BOOL)serverSupportsGraphPeopleHome;
+(BOOL)serverSupportsMergeTargetRef;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)relatedIdentifier;
-(void)setRelatedIdentifier:(id)arg1 ;
-(NSDictionary *)contactMatchingDictionary;
-(void)setContactMatchingDictionary:(NSDictionary *)arg1 ;
-(long long)personType;
-(void)setPersonType:(long long)arg1 ;
-(long long)manualSortOrder;
-(void)setManualSortOrder:(long long)arg1 ;
-(long long)verifiedType;
-(void)setVerifiedType:(long long)arg1 ;
-(NSString *)mergeTargetPersonIdentifier;
-(void)setMergeTargetPersonIdentifier:(NSString *)arg1 ;
-(NSData *)contactDescriptor;
-(void)setContactDescriptor:(NSData *)arg1 ;
-(BOOL)validateRecordForTracker:(id)arg1 ;
@end

