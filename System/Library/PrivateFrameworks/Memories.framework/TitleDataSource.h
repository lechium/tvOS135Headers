/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ItemStylePickerDataSource.h>

@class NSArray, NSMutableArray, NSString;

@interface TitleDataSource : NSObject <ItemStylePickerDataSource> {

	BOOL _includeThemeTitles;
	BOOL _includeMotionTitles;
	BOOL _includeNone;
	NSArray* _themeTitleNames;
	NSArray* _genericTitleInfoItems;
	NSMutableArray* _genericTitleNames;
	NSMutableArray* _motionTitleNames;
	NSArray* _allTitleNames;

}

@property (nonatomic,retain) NSArray * genericTitleInfoItems;                 //@synthesize genericTitleInfoItems=_genericTitleInfoItems - In the implementation block
@property (nonatomic,retain) NSArray * themeTitleNames;                       //@synthesize themeTitleNames=_themeTitleNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * genericTitleNames;              //@synthesize genericTitleNames=_genericTitleNames - In the implementation block
@property (nonatomic,retain) NSMutableArray * motionTitleNames;               //@synthesize motionTitleNames=_motionTitleNames - In the implementation block
@property (nonatomic,retain) NSArray * allTitleNames;                         //@synthesize allTitleNames=_allTitleNames - In the implementation block
@property (assign,nonatomic) BOOL includeThemeTitles;                         //@synthesize includeThemeTitles=_includeThemeTitles - In the implementation block
@property (assign,nonatomic) BOOL includeMotionTitles;                        //@synthesize includeMotionTitles=_includeMotionTitles - In the implementation block
@property (assign,nonatomic) BOOL includeNone;                                //@synthesize includeNone=_includeNone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
-(id)init;
-(void)dealloc;
-(long long)numberOfItems;
-(id)itemNameAtIndexPath:(id)arg1 ;
-(id)indexPathOfItemName:(id)arg1 ;
-(NSArray *)allTitleNames;
-(NSArray *)genericTitleInfoItems;
-(NSArray *)themeTitleNames;
-(NSMutableArray *)motionTitleNames;
-(NSMutableArray *)genericTitleNames;
-(id)titleTypesForTitleDefinition:(id)arg1 ;
-(id)itemNames;
-(BOOL)includeThemeTitles;
-(BOOL)includeMotionTitles;
-(id)titleStylesIncludingTheme:(BOOL)arg1 includingMotion:(BOOL)arg2 ;
-(BOOL)includeNone;
-(unsigned long long)numberOfTitles;
-(id)indexPathOfTitleName:(id)arg1 ;
-(id)titleNameAtIndex:(unsigned long long)arg1 ;
-(id)representativeTitleNameForTitleDefinition:(id)arg1 ;
-(void)setThemeTitleNames:(NSArray *)arg1 ;
-(void)setIncludeThemeTitles:(BOOL)arg1 ;
-(void)setIncludeMotionTitles:(BOOL)arg1 ;
-(void)setIncludeNone:(BOOL)arg1 ;
-(void)setGenericTitleInfoItems:(NSArray *)arg1 ;
-(void)setGenericTitleNames:(NSMutableArray *)arg1 ;
-(void)setMotionTitleNames:(NSMutableArray *)arg1 ;
-(void)setAllTitleNames:(NSArray *)arg1 ;
-(id)micaFileNameForTitleIdentifier:(id)arg1 micaFileBaseName:(id)arg2 ;
@end

