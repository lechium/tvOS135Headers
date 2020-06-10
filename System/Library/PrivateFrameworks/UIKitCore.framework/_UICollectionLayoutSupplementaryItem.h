/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSString, _UICollectionLayoutAnchor, _UICollectionLayoutEdgeSpacing;

@interface _UICollectionLayoutSupplementaryItem : _UICollectionLayoutItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	long long _zIndex;
	_UICollectionLayoutAnchor* _containerAnchor;
	_UICollectionLayoutAnchor* _itemAnchor;
	_UICollectionLayoutEdgeSpacing* _edgeSpacing;
	NSString* _name;
	BOOL _canAdjustContentSize;

}

@property (assign,nonatomic) long long zIndex;                                           //@synthesize zIndex=_zIndex - In the implementation block
@property (nonatomic,readonly) NSString * elementKind;                                   //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutAnchor * containerAnchor;              //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,readonly) _UICollectionLayoutAnchor * itemAnchor;                   //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (assign,nonatomic) BOOL canAdjustContentSize;                                  //@synthesize canAdjustContentSize=_canAdjustContentSize - In the implementation block
+(id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
+(id)supplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(NSString *)elementKind;
-(_UICollectionLayoutAnchor *)containerAnchor;
-(_UICollectionLayoutAnchor *)itemAnchor;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 zIndex:(long long)arg3 contentInsets:(NSDirectionalEdgeInsets)arg4 containerAnchor:(id)arg5 itemAnchor:(id)arg6 edgeSpacing:(id)arg7 name:(id)arg8 canAdjustContentSize:(BOOL)arg9 ;
-(BOOL)canAdjustContentSize;
-(void)setCanAdjustContentSize:(BOOL)arg1 ;
@end

