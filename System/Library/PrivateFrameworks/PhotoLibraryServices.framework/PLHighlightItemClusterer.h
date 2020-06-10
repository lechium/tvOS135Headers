/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLHighlightItemClustererRule;
@interface PLHighlightItemClusterer : NSObject {

	id<PLHighlightItemClustererRule> _rule;

}

@property (nonatomic,readonly) id<PLHighlightItemClustererRule> rule;              //@synthesize rule=_rule - In the implementation block
-(id)initWithRule:(id)arg1 ;
-(id<PLHighlightItemClustererRule>)rule;
-(void)restoreExistingHighlightItemListsFromUpdatedHighlightItems:(id)arg1 deletedHighlightItems:(id)arg2 usingModelReader:(id)arg3 progressBlock:(/*^block*/id)arg4 restoreBlock:(/*^block*/id)arg5 ;
-(id)processHighlightItems:(id)arg1 withRestoredHighlightItemLists:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

