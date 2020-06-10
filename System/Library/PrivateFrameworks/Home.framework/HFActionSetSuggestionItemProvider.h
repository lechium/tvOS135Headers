/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@protocol HFServiceLikeItem;
@class HMHome, HFItem, NSSet;

@interface HFActionSetSuggestionItemProvider : HFItemProvider {

	BOOL _includeExistingActionSets;
	BOOL _includeCustomActionSets;
	BOOL _persistAddedSuggestions;
	BOOL _hasProvidedStaticSuggestionItems;
	HMHome* _home;
	HFItem*<HFServiceLikeItem> _serviceLikeItem;
	NSSet* _staticSuggestionItems;
	NSSet* _customSuggestionItems;

}

@property (nonatomic,retain) NSSet * staticSuggestionItems;                         //@synthesize staticSuggestionItems=_staticSuggestionItems - In the implementation block
@property (nonatomic,retain) NSSet * customSuggestionItems;                         //@synthesize customSuggestionItems=_customSuggestionItems - In the implementation block
@property (assign,nonatomic) BOOL hasProvidedStaticSuggestionItems;                 //@synthesize hasProvidedStaticSuggestionItems=_hasProvidedStaticSuggestionItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                       //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) HFItem*<HFServiceLikeItem> serviceLikeItem;              //@synthesize serviceLikeItem=_serviceLikeItem - In the implementation block
@property (assign,nonatomic) BOOL includeExistingActionSets;                        //@synthesize includeExistingActionSets=_includeExistingActionSets - In the implementation block
@property (assign,nonatomic) BOOL includeCustomActionSets;                          //@synthesize includeCustomActionSets=_includeCustomActionSets - In the implementation block
@property (assign,nonatomic) BOOL persistAddedSuggestions;                          //@synthesize persistAddedSuggestions=_persistAddedSuggestions - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)items;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setServiceLikeItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFItem*<HFServiceLikeItem>)serviceLikeItem;
-(BOOL)includeExistingActionSets;
-(BOOL)persistAddedSuggestions;
-(void)setIncludeExistingActionSets:(BOOL)arg1 ;
-(void)setPersistAddedSuggestions:(BOOL)arg1 ;
-(id)_builtInActionSetOfType:(id)arg1 ;
-(void)setStaticSuggestionItems:(NSSet *)arg1 ;
-(NSSet *)staticSuggestionItems;
-(BOOL)hasProvidedStaticSuggestionItems;
-(void)setHasProvidedStaticSuggestionItems:(BOOL)arg1 ;
-(BOOL)includeCustomActionSets;
-(void)setCustomSuggestionItems:(NSSet *)arg1 ;
-(NSSet *)customSuggestionItems;
-(void)setIncludeCustomActionSets:(BOOL)arg1 ;
@end

