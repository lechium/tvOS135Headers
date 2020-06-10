/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIFocusRegionSearchContext.h>

@protocol _UIFocusRegionContainer, _UIFocusMapArea;
@class UIFocusSystem, UIScreen, _UIFocusSearchInfo, NSMutableArray, NSHashTable, NSArray, _UIFocusRegion, _UIFocusMapSnapshotDebugInfo, NSString;

@interface _UIFocusMapSnapshot : NSObject <_UIFocusRegionSearchContext> {

	NSMutableArray* _mutableUnoccludedRegions;
	NSHashTable* _filteredOriginalRegions;
	BOOL _didCaptureSnapshot;
	NSMutableArray* _containersBeingAdded;
	NSMutableArray* _containersBeingAddedFocusSystems;
	NSHashTable* _eligibleEnvironments;
	NSHashTable* _ineligibleEnvironments;
	BOOL _isSearchingRegionsOfInterestContainer;
	BOOL _clipToSnapshotRect;
	NSArray* _regions;
	UIFocusSystem* _focusSystem;
	id<_UIFocusRegionContainer> _rootContainer;
	id<_UIFocusMapArea> _mapArea;
	_UIFocusRegion* _focusedRegion;
	id<_UIFocusRegionContainer> _regionsContainer;
	_UIFocusSearchInfo* _searchInfo;
	id<_UIFocusMapArea> _searchArea;

}

@property (getter=_debugInfo,nonatomic,readonly) _UIFocusMapSnapshotDebugInfo * debugInfo; 
@property (nonatomic,retain) _UIFocusSearchInfo * searchInfo;                                           //@synthesize searchInfo=_searchInfo - In the implementation block
@property (getter=_searchArea,nonatomic,readonly) id<_UIFocusMapArea> searchArea;                       //@synthesize searchArea=_searchArea - In the implementation block
@property (nonatomic,__weak,readonly) UIFocusSystem * focusSystem;                                      //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> rootContainer;                        //@synthesize rootContainer=_rootContainer - In the implementation block
@property (nonatomic,readonly) id<_UIFocusMapArea> mapArea;                                             //@synthesize mapArea=_mapArea - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusRegion * focusedRegion;                                     //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (nonatomic,__weak,readonly) id<_UIFocusRegionContainer> regionsContainer;                     //@synthesize regionsContainer=_regionsContainer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions; 
@property (nonatomic,copy,readonly) NSArray * originalRegions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) UIScreen * screen; 
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
-(id)init;
-(id)debugQuickLookObject;
-(NSArray *)regions;
-(UIScreen *)screen;
-(void)addRegion:(id)arg1 ;
-(void)addRegions:(id)arg1 ;
-(id)_debugInfo;
-(id<UICoordinateSpace>)coordinateSpace;
-(id<_UIFocusMapArea>)searchArea;
-(void)addRegionsInContainers:(id)arg1 ;
-(id<_UIFocusRegionContainer>)rootContainer;
-(UIFocusSystem *)focusSystem;
-(_UIFocusSearchInfo *)searchInfo;
-(void)addRegionsInContainer:(id)arg1 ;
-(_UIFocusRegion *)focusedRegion;
-(id<_UIFocusMapArea>)mapArea;
-(id)_searchArea;
-(id)_debugInfoWithFocusMapSearchInfo:(id)arg1 ;
-(void)setSearchInfo:(_UIFocusSearchInfo *)arg1 ;
-(NSArray *)originalRegions;
-(id)regionsForOriginalRegion:(id)arg1 ;
-(id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 searchArea:(id)arg3 ;
-(id<_UIFocusRegionContainer>)regionsContainer;
-(void)_capture;
-(id)_initWithSnapshotter:(id)arg1 mapArea:(id)arg2 ;
@end

