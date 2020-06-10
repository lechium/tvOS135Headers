/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <AXRuntime/AXGroupable.h>

@protocol AXElementGroupGenerator;
@class NSArray, NSHashTable, AXElement, NSString;

@interface AXElementGroup : NSArray <AXGroupable> {

	NSArray* _elementStore;
	BOOL _rootGroup;
	id<AXElementGroupGenerator> _generator;
	unsigned long long _groupTraits;
	unsigned long long _userDefinedScanningBehaviorTraits;
	NSHashTable* _groupObservers;
	AXElementGroup* _parentGroup;
	AXElement* _elementCommunity;
	NSString* _label;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<AXElementGroupGenerator> generator;                      //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSHashTable * groupObservers;                                      //@synthesize groupObservers=_groupObservers - In the implementation block
@property (assign,nonatomic) unsigned long long groupTraits;                                    //@synthesize groupTraits=_groupTraits - In the implementation block
@property (assign,getter=isRootGroup,nonatomic) BOOL rootGroup;                                 //@synthesize rootGroup=_rootGroup - In the implementation block
@property (nonatomic,retain) AXElement * elementCommunity;                                      //@synthesize elementCommunity=_elementCommunity - In the implementation block
@property (nonatomic,copy) NSString * label;                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL canBeGroupedWithOtherGroupables; 
@property (nonatomic,readonly) BOOL canBeReplacedByChildren; 
@property (nonatomic,readonly) BOOL allowsChangingExistingGroupingOfContents; 
@property (nonatomic,readonly) BOOL shouldBeUngrouped; 
@property (nonatomic,readonly) BOOL allowsVisualGroupingOfChildren; 
@property (nonatomic,readonly) unsigned long long numberOfElements; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                      //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) unsigned long long userDefinedScanningBehaviorTraits;              //@synthesize userDefinedScanningBehaviorTraits=_userDefinedScanningBehaviorTraits - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
+(id)groupWithElements:(id)arg1 label:(id)arg2 ;
+(id)groupWithElements:(id)arg1 ;
+(id)groupWithGenerator:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(CGRect)frame;
-(id<AXElementGroupGenerator>)generator;
-(id)firstChild;
-(id)lastChild;
-(void)setGenerator:(id<AXElementGroupGenerator>)arg1 ;
-(BOOL)isGroup;
-(AXElementGroup *)parentGroup;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(BOOL)isKeyboardContainer;
-(BOOL)canBeReplacedByChildren;
-(unsigned long long)groupTraits;
-(void)setGroupTraits:(unsigned long long)arg1 ;
-(unsigned long long)userDefinedScanningBehaviorTraits;
-(void)setUserDefinedScanningBehaviorTraits:(unsigned long long)arg1 ;
-(BOOL)allowsChangingExistingGroupingOfContents;
-(BOOL)shouldBeUngrouped;
-(BOOL)allowsVisualGroupingOfChildren;
-(BOOL)canBeGroupedWithOtherGroupables;
-(AXElement *)elementCommunity;
-(void)setElementCommunity:(AXElement *)arg1 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(BOOL)isKeyboardRow;
-(id)firstChildPassingTest:(/*^block*/id)arg1 ;
-(id)descendantsPassingTest:(/*^block*/id)arg1 ;
-(id)firstDescendantPassingTest:(/*^block*/id)arg1 ;
-(id)nextSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)groupByRemovingGroupable:(id)arg1 ;
-(void)setRootGroup:(BOOL)arg1 ;
-(id)initWithElements:(id)arg1 label:(id)arg2 ;
-(id)initWithGenerator:(id)arg1 ;
-(void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3 ;
-(void)setGroupObservers:(NSHashTable *)arg1 ;
-(void)unregisterAllGroupObservers;
-(void)_transferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1 ;
-(void)_generateGroupsIfNeeded;
-(id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL*)arg3 ;
-(void)enumerateLeafDescendantsUsingBlock:(/*^block*/id)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(id)ancestorPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfElements;
-(id)descendantWithNativeFocus;
-(id)_leafAXElementWithPosition:(long long)arg1 ;
-(NSHashTable *)groupObservers;
-(id)debugFullDescription;
-(id)_debugDescriptionForTraits;
-(id)_debugDescriptionForScanningBehaviorTraits;
-(id)_debugFullDescriptionWithIndent:(id)arg1 ;
-(id)groupByPrependingGroupable:(id)arg1 ;
-(id)groupByAppendingGroupable:(id)arg1 ;
-(id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2 ;
-(id)firstChildMatchingItem:(id)arg1 ;
-(id)firstDescendantMatchingItem:(id)arg1 ;
-(id)firstLeafDescendant;
-(id)keyboardContainerRows;
-(id)keyboardRow;
-(BOOL)containsNativeFocusElement;
-(id)leftMostLeafAXElement;
-(id)rightMostLeafAXElement;
-(id)topMostLeafAXElement;
-(id)bottomMostLeafAXElement;
-(void)registerGroupObserver:(id)arg1 ;
-(void)unregisterGroupObserver:(id)arg1 ;
-(id)_debugBriefDescription;
-(BOOL)isRootGroup;
@end
