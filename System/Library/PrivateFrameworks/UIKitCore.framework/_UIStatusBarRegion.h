/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarActionable.h>

@protocol _UIStatusBarRegionLayout;
@class _UIStatusBarAction, NSString, _UIStatusBar, NSSet, _UIStatusBarStyleAttributes, UIView, NSOrderedSet, NSMutableIndexSet, UILayoutGuide, NSLayoutConstraint, NSArray, _UIStatusBarDisplayItem, NSDictionary;

@interface _UIStatusBarRegion : NSObject <_UIStatusBarActionable> {

	BOOL _offsetable;
	_UIStatusBarAction* _action;
	NSString* _identifier;
	_UIStatusBar* _statusBar;
	id<_UIStatusBarRegionLayout> _layout;
	NSSet* _dependentRegionIdentifiers;
	_UIStatusBarRegion* _enabilityRegion;
	double _alpha;
	long long _overriddenStyle;
	_UIStatusBarStyleAttributes* _overriddenStyleAttributes;
	UIView* _contentView;
	UIView* _backgroundView;
	UIView* _highlightView;
	NSOrderedSet* _displayItems;
	NSMutableIndexSet* _disablingTokens;
	UILayoutGuide* _layoutGuide;
	NSLayoutConstraint* _centerXConstraint;
	NSLayoutConstraint* _centerYConstraint;
	UIView* _containerView;
	UIView* _frozenView;
	UIOffset _offset;
	UIEdgeInsets _actionInsets;

}

@property (nonatomic,retain) NSMutableIndexSet * disablingTokens;                                  //@synthesize disablingTokens=_disablingTokens - In the implementation block
@property (nonatomic,retain) UILayoutGuide * layoutGuide;                                          //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerXConstraint;                               //@synthesize centerXConstraint=_centerXConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * centerYConstraint;                               //@synthesize centerYConstraint=_centerYConstraint - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                             //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * frozenView;                                                  //@synthesize frozenView=_frozenView - In the implementation block
@property (nonatomic,readonly) NSArray * enabledDisplayItems; 
@property (nonatomic,readonly) NSArray * currentEnabledDisplayItems; 
@property (nonatomic,copy,readonly) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) _UIStatusBar * statusBar;                                      //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,readonly) id<UILayoutItem> layoutItem; 
@property (nonatomic,readonly) id<UILayoutItem> containerItem; 
@property (nonatomic,retain) id<_UIStatusBarRegionLayout> layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) NSSet * dependentRegionIdentifiers;                                   //@synthesize dependentRegionIdentifiers=_dependentRegionIdentifiers - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) _UIStatusBarRegion * enabilityRegion;                          //@synthesize enabilityRegion=_enabilityRegion - In the implementation block
@property (assign,nonatomic) BOOL offsetable;                                                      //@synthesize offsetable=_offsetable - In the implementation block
@property (assign,nonatomic) UIOffset offset;                                                      //@synthesize offset=_offset - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@property (assign,nonatomic) double alpha;                                                         //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) long long overriddenStyle;                                            //@synthesize overriddenStyle=_overriddenStyle - In the implementation block
@property (nonatomic,retain) _UIStatusBarStyleAttributes * overriddenStyleAttributes;              //@synthesize overriddenStyleAttributes=_overriddenStyleAttributes - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                                               //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) NSOrderedSet * displayItems;                                          //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,readonly) _UIStatusBarDisplayItem * overflowedDisplayItem; 
@property (nonatomic,copy,readonly) NSDictionary * displayItemAbsoluteFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UIStatusBarAction * action;                                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) UIEdgeInsets actionInsets;                                            //@synthesize actionInsets=_actionInsets - In the implementation block
-(NSString *)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)isEnabled;
-(UIOffset)offset;
-(void)setOffset:(UIOffset)arg1 ;
-(id<_UIStatusBarRegionLayout>)layout;
-(double)alpha;
-(_UIStatusBarAction *)action;
-(void)setAction:(_UIStatusBarAction *)arg1 ;
-(BOOL)isFrozen;
-(void)setLayout:(id<_UIStatusBarRegionLayout>)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(_UIStatusBar *)statusBar;
-(UIView *)containerView;
-(NSOrderedSet *)displayItems;
-(UIView *)backgroundView;
-(void)setHighlightView:(UIView *)arg1 ;
-(NSLayoutConstraint *)centerXConstraint;
-(NSLayoutConstraint *)centerYConstraint;
-(void)setCenterXConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCenterYConstraint:(NSLayoutConstraint *)arg1 ;
-(id<UILayoutItem>)layoutItem;
-(_UIStatusBarStyleAttributes *)overriddenStyleAttributes;
-(UILayoutGuide *)layoutGuide;
-(void)setLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setActionInsets:(UIEdgeInsets)arg1 ;
-(void)setOverriddenStyleAttributes:(_UIStatusBarStyleAttributes *)arg1 ;
-(void)setDisplayItems:(NSOrderedSet *)arg1 ;
-(UIEdgeInsets)actionInsets;
-(id<UILayoutItem>)containerItem;
-(void)setStatusBar:(_UIStatusBar *)arg1 ;
-(void)disableWithToken:(unsigned long long)arg1 ;
-(void)setOverriddenStyle:(long long)arg1 ;
-(void)enableWithToken:(unsigned long long)arg1 ;
-(void)setOffsetable:(BOOL)arg1 ;
-(void)setEnabilityRegion:(_UIStatusBarRegion *)arg1 ;
-(NSDictionary *)displayItemAbsoluteFrames;
-(_UIStatusBarDisplayItem *)overflowedDisplayItem;
-(BOOL)offsetable;
-(long long)overriddenStyle;
-(id)displayItemForHUDAtLocation:(CGPoint)arg1 ;
-(NSArray *)currentEnabledDisplayItems;
-(void)_addSubview:(id)arg1 atBack:(BOOL)arg2 ;
-(void)setFrozenView:(UIView *)arg1 ;
-(void)_overriddenStyleAttributesChanged;
-(NSArray *)enabledDisplayItems;
-(NSSet *)dependentRegionIdentifiers;
-(void)setDependentRegionIdentifiers:(NSSet *)arg1 ;
-(_UIStatusBarRegion *)enabilityRegion;
-(NSMutableIndexSet *)disablingTokens;
-(void)setDisablingTokens:(NSMutableIndexSet *)arg1 ;
-(UIView *)frozenView;
@end
