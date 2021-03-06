/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:17 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray, NSDate;


@protocol PXDisplayAssetCollection <PXDisplayCollection>
@property (nonatomic,readonly) BOOL isEnriched; 
@property (nonatomic,readonly) BOOL isEnrichmentComplete; 
@property (nonatomic,readonly) double promotionScore; 
@property (nonatomic,readonly) BOOL isAggregation; 
@property (nonatomic,readonly) BOOL isRecent; 
@property (nonatomic,readonly) unsigned short px_highlightEnrichmentState; 
@property (nonatomic,readonly) long long px_highlightKind; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedSubtitle; 
@property (nonatomic,readonly) NSString * localizedDebugDescription; 
@property (nonatomic,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,readonly) NSString * localizedDateDescription; 
@property (nonatomic,readonly) NSString * localizedSmartDescription; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned long long estimatedAssetCount; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)localizedTitle;
-(NSString *)localizedSubtitle;
-(NSArray *)localizedLocationNames;
-(double)promotionScore;
-(BOOL)isRecent;
-(unsigned long long)estimatedAssetCount;
-(BOOL)isEnriched;
-(id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;
-(BOOL)isEnrichmentComplete;
-(BOOL)isAggregation;
-(unsigned short)px_highlightEnrichmentState;
-(long long)px_highlightKind;
-(NSString *)localizedDebugDescription;
-(NSString *)localizedDateDescription;
-(NSString *)localizedSmartDescription;

@end

