/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGSuggestion.h>

@class PHAsset, NSSet, NSString, NSArray, NSDate;

@interface PGSingleAssetSuggestion : NSObject <PGSuggestion> {

	PHAsset* _asset;
	BOOL _isInvalid;
	unsigned short _type;
	unsigned short _subtype;
	NSSet* _features;
	id _recipe;
	unsigned long long _relevanceDurationInDays;
	NSString* _title;
	NSString* _subtitle;
	NSArray* _reasons;

}

@property (nonatomic,retain) id recipe;                                                     //@synthesize recipe=_recipe - In the implementation block
@property (assign,nonatomic) unsigned long long relevanceDurationInDays;                    //@synthesize relevanceDurationInDays=_relevanceDurationInDays - In the implementation block
@property (nonatomic,copy) NSString * title;                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) BOOL isInvalid;                                                //@synthesize isInvalid=_isInvalid - In the implementation block
@property (nonatomic,copy) NSArray * reasons;                                               //@synthesize reasons=_reasons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned short type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned short subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) unsigned short state; 
@property (nonatomic,readonly) unsigned short notificationState; 
@property (nonatomic,readonly) long long version; 
@property (nonatomic,readonly) NSArray * keyAssets; 
@property (nonatomic,readonly) NSArray * representativeAssets; 
@property (nonatomic,readonly) NSSet * features;                                            //@synthesize features=_features - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestedPersonLocalIdentifiers; 
@property (nonatomic,readonly) BOOL containsUnverifiedPersons; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) unsigned char notificationQuality; 
-(NSString *)description;
-(unsigned short)type;
-(unsigned short)state;
-(long long)version;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)creationDate;
-(unsigned short)subtype;
-(NSArray *)reasons;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSSet *)features;
-(void)setReasons:(NSArray *)arg1 ;
-(BOOL)isInvalid;
-(unsigned short)notificationState;
-(NSArray *)representativeAssets;
-(NSArray *)keyAssets;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(BOOL)containsUnverifiedPersons;
-(void)setIsInvalid:(BOOL)arg1 ;
-(id)recipe;
-(void)setRecipe:(id)arg1 ;
-(NSArray *)suggestedPersonLocalIdentifiers;
-(unsigned long long)relevanceDurationInDays;
-(unsigned char)notificationQuality;
-(id)initWithType:(unsigned short)arg1 subtype:(unsigned short)arg2 asset:(id)arg3 ;
-(void)setRelevanceDurationInDays:(unsigned long long)arg1 ;
@end
