/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSString, IKAppContext, NSDictionary;

@interface VUIMediaEntitiesFetchOperation : NSOperation {

	NSArray* _mediaEntities;
	NSString* _mediaCategory;
	NSString* _mediaCollectionType;
	IKAppContext* _appContext;
	NSString* _mediaEntitySubtype;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSString * mediaEntitySubtype;               //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                       //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) NSString * mediaCategory;                    //@synthesize mediaCategory=_mediaCategory - In the implementation block
@property (nonatomic,retain) NSString * mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
+(id)_numberForObject:(id)arg1 ;
+(id)_timeIntervalNumberForObject:(id)arg1 ;
+(id)_mpPropertiesForProperties:(id)arg1 ;
+(id)_mpOrderingDirectionMappingForSortDirectionMapping:(id)arg1 ;
-(id)init;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)main;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(IKAppContext *)appContext;
-(id)_mediaQuery;
-(BOOL)_prepare;
-(NSString *)mediaCollectionType;
-(NSArray *)mediaEntities;
-(NSString *)mediaEntitySubtype;
-(void)setMediaEntitySubtype:(NSString *)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)setMediaCollectionType:(NSString *)arg1 ;
-(BOOL)_isItemsFetch;
-(BOOL)_isCollectionsFetch;
-(id)initWithAppContext:(id)arg1 options:(id)arg2 ;
-(NSString *)mediaCategory;
-(id)_baseMediaQuery;
-(void)setMediaCategory:(NSString *)arg1 ;
-(void)_addPredicatesToMediaQuery:(id)arg1 withFilters:(id)arg2 ;
-(void)_setSortOrderingForMediaQuery:(id)arg1 withSortProperties:(id)arg2 sortDirectionMapping:(id)arg3 ;
-(void)_addPrefetchPropertiesToMediaQuery:(id)arg1 prefetchProperties:(id)arg2 ;
@end

