/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICollectionLayoutVisualFormatItem.h>

@class NSArray;

@interface _UICollectionLayoutVisualTreeNode : _UICollectionLayoutVisualFormatItem {

	NSArray* _children;
	unsigned long long _axis;

}

@property (nonatomic,retain) NSArray * children;                   //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) unsigned long long axis;              //@synthesize axis=_axis - In the implementation block
-(id)description;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(unsigned long long)axis;
-(void)setAxis:(unsigned long long)arg1 ;
-(BOOL)isVerticalGroup;
-(BOOL)isHorizontalGroup;
-(id)initWithParent:(id)arg1 children:(id)arg2 axis:(unsigned long long)arg3 ;
@end

