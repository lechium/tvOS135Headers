/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSupplementaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	long long _alignment;
	CGPoint _offset;
	BOOL _extendsBoundary;
	BOOL _pinToVisibleBounds;

}

@property (assign,nonatomic) BOOL extendsBoundary;                 //@synthesize extendsBoundary=_extendsBoundary - In the implementation block
@property (assign,nonatomic) BOOL pinToVisibleBounds;              //@synthesize pinToVisibleBounds=_pinToVisibleBounds - In the implementation block
@property (nonatomic,readonly) long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 ;
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)offset;
-(long long)alignment;
-(void)setPinToVisibleBounds:(BOOL)arg1 ;
-(void)setExtendsBoundary:(BOOL)arg1 ;
-(BOOL)pinToVisibleBounds;
-(BOOL)extendsBoundary;
-(id)_apiRepresentation;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(NSDirectionalEdgeInsets)arg6 extendsBoundary:(BOOL)arg7 pinToVisibleBounds:(BOOL)arg8 ;
@end

