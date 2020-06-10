/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UIStatusBarIdentifier, NSMutableDictionary, _UIStatusBar, NSSet;

@interface _UIStatusBarItem : NSObject {

	BOOL _needsUpdate;
	_UIStatusBarIdentifier* _identifier;
	NSMutableDictionary* _displayItems;
	_UIStatusBar* _statusBar;

}

@property (nonatomic,retain) NSMutableDictionary * displayItems;                 //@synthesize displayItems=_displayItems - In the implementation block
@property (__weak,readonly) _UIStatusBar * statusBar;                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) _UIStatusBarIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSSet * dependentEntryKeys; 
@property (nonatomic,readonly) BOOL needsUpdate;                                 //@synthesize needsUpdate=_needsUpdate - In the implementation block
+(id)identifier;
+(id)displayItemIdentifierFromString:(id)arg1 ;
+(id)defaultDisplayIdentifier;
+(id)displayItemIdentifierFromIdentifier:(id)arg1 string:(id)arg2 ;
+(id)itemIdentifierFromString:(id)arg1 ;
+(Class)itemClassForIdentifier:(id)arg1 ;
+(id)itemIdentifierForDisplayItemIdentifier:(id)arg1 ;
+(id)createItemForIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(id)description;
-(_UIStatusBarIdentifier *)identifier;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate;
-(_UIStatusBar *)statusBar;
-(NSMutableDictionary *)displayItems;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(id)overriddenStyleAttributesForData:(id)arg1 identifier:(id)arg2 ;
-(id)viewForIdentifier:(id)arg1 ;
-(NSSet *)dependentEntryKeys;
-(id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(void)updatedDisplayItemsWithData:(id)arg1 ;
-(BOOL)canEnableDisplayItem:(id)arg1 fromData:(id)arg2 ;
-(void)prepareAnimation:(id)arg1 forDisplayItem:(id)arg2 ;
-(void)applyStyleAttributes:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)displayItemForIdentifier:(id)arg1 ;
-(void)setDisplayItems:(NSMutableDictionary *)arg1 ;
-(id)_applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
@end

