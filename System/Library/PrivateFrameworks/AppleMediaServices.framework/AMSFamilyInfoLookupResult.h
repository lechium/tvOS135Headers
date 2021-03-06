/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface AMSFamilyInfoLookupResult : NSObject {

	BOOL _cached;
	NSArray* _familyMembers;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (getter=isCached,nonatomic,readonly) BOOL cached;                          //@synthesize cached=_cached - In the implementation block
@property (nonatomic,readonly) NSArray * familyMembers;                              //@synthesize familyMembers=_familyMembers - In the implementation block
+(id)_familyMembersFromDictionaryRepresentation:(id)arg1 ;
-(id)description;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)isCached;
-(NSArray *)familyMembers;
-(id)initWithDictionaryRepresentation:(id)arg1 cached:(BOOL)arg2 ;
@end

