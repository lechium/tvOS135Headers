/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKMediaQueryController.h>

@protocol TVHKMediaEntityFetchControllerDelegate;
@class TVHKMediaEntityFetchRequest, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TVHKMediaEntityFetchController : TVHKMediaQueryController {

	BOOL _calculatesRecentlyAdded;
	id<TVHKMediaEntityFetchControllerDelegate> _delegate;
	TVHKMediaEntityFetchRequest* _request;
	NSArray* _groupingKeyPaths;
	NSDictionary* _groupingTitleValueTransformers;
	NSDictionary* _groupingSortComparators;
	NSMutableArray* _mutableMediaEntities;
	NSMutableArray* _mutableRecentlyAddedMediaEntities;
	NSMutableDictionary* _mutableGroupings;

}

@property (nonatomic,retain) TVHKMediaEntityFetchRequest * request;                                   //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableMediaEntities;                                   //@synthesize mutableMediaEntities=_mutableMediaEntities - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableRecentlyAddedMediaEntities;                      //@synthesize mutableRecentlyAddedMediaEntities=_mutableRecentlyAddedMediaEntities - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mutableGroupings;                                  //@synthesize mutableGroupings=_mutableGroupings - In the implementation block
@property (assign,nonatomic,__weak) id<TVHKMediaEntityFetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * mediaEntities; 
@property (assign,nonatomic) BOOL calculatesRecentlyAdded;                                            //@synthesize calculatesRecentlyAdded=_calculatesRecentlyAdded - In the implementation block
@property (nonatomic,copy) NSArray * groupingKeyPaths;                                                //@synthesize groupingKeyPaths=_groupingKeyPaths - In the implementation block
@property (nonatomic,copy) NSDictionary * groupingTitleValueTransformers;                             //@synthesize groupingTitleValueTransformers=_groupingTitleValueTransformers - In the implementation block
@property (nonatomic,copy) NSDictionary * groupingSortComparators;                                    //@synthesize groupingSortComparators=_groupingSortComparators - In the implementation block
-(id<TVHKMediaEntityFetchControllerDelegate>)delegate;
-(void)setDelegate:(id<TVHKMediaEntityFetchControllerDelegate>)arg1 ;
-(TVHKMediaEntityFetchRequest *)request;
-(void)setRequest:(TVHKMediaEntityFetchRequest *)arg1 ;
-(void)stop;
-(NSArray *)mediaEntities;
-(BOOL)calculatesRecentlyAdded;
-(NSArray *)groupingKeyPaths;
-(NSDictionary *)groupingTitleValueTransformers;
-(NSDictionary *)groupingSortComparators;
-(void)setCalculatesRecentlyAdded:(BOOL)arg1 ;
-(void)setGroupingKeyPaths:(NSArray *)arg1 ;
-(void)setGroupingTitleValueTransformers:(NSDictionary *)arg1 ;
-(void)setGroupingSortComparators:(NSDictionary *)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 ;
-(NSMutableArray *)mutableMediaEntities;
-(NSMutableArray *)mutableRecentlyAddedMediaEntities;
-(NSMutableDictionary *)mutableGroupings;
-(void)_handleManualFetchControllerOperationDidComplete:(id)arg1 ;
-(void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg1 ;
-(BOOL)_updateWithResult:(id)arg1 updateOnNoChanges:(BOOL)arg2 ;
-(void)_notifyFetchRequest:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)_notifyFetchRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)_updateMutableGroupingsWithResult:(id)arg1 updateOnNoChanges:(BOOL)arg2 ;
-(id)initWithMediaEntityServer:(id)arg1 fetchRequest:(id)arg2 ;
-(id)_queryOperationForQueryReason:(long long)arg1 simulatedContentsChangeObjects:(id)arg2 ;
-(void)_didCompleteQueryOperation:(id)arg1 ;
-(BOOL)_shouldRequeryForContentsChange:(id)arg1 ;
-(void)setMutableMediaEntities:(NSMutableArray *)arg1 ;
-(void)setMutableRecentlyAddedMediaEntities:(NSMutableArray *)arg1 ;
-(void)setMutableGroupings:(NSMutableDictionary *)arg1 ;
@end

