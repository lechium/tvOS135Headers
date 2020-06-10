/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:10 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXNavigationListItem.h>

@class NSString, PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListItem {

	BOOL _draggable;
	BOOL _renamable;
	BOOL _expandable;
	BOOL _expanded;
	NSString* _glyphImageName;
	PHCollectionList* _collection;
	long long _indentationLevel;

}

@property (nonatomic,readonly) PHCollectionList * collection;              //@synthesize collection=_collection - In the implementation block
@property (assign,nonatomic) long long indentationLevel;                   //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;              //@synthesize expanded=_expanded - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(PHCollectionList *)collection;
-(id)representedObject;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)isExpanded;
-(BOOL)isExpandable;
-(BOOL)isDraggable;
-(void)setIndentationLevel:(long long)arg1 ;
-(id)viewControllerForCollectionWithGridPresentation:(id)arg1 ;
-(const CFStringRef)aggregateDictionaryKey;
-(long long)indentationLevel;
-(id)glyphImageName;
-(BOOL)isRenamable;
-(id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2 ;
@end
