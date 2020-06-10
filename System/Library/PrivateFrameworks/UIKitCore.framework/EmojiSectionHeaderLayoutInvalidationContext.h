/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayoutInvalidationContext.h>

@class NSMutableIndexSet, NSIndexSet;

@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {

	NSMutableIndexSet* _invalidatedSections;
	CFDictionaryRef _headerWidthDict;

}

@property (nonatomic,readonly) NSIndexSet * invalidatedSections;              //@synthesize invalidatedSections=_invalidatedSections - In the implementation block
-(void)dealloc;
-(double)preferredWidthForHeaderInSection:(long long)arg1 ;
-(NSIndexSet *)invalidatedSections;
@end
