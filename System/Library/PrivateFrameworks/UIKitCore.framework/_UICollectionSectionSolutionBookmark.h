/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionLayoutSectionSolver;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSection, _UICollectionPreferredSizes;

@interface _UICollectionSectionSolutionBookmark : NSObject {

	id<_UICollectionLayoutSectionSolver> _solution;
	NSCollectionLayoutSection* _section;
	CGRect _globalFrame;
	CGSize _contentSize;
	_UICollectionPreferredSizes* _preferredSizes;

}

@property (nonatomic,readonly) id<_UICollectionLayoutSectionSolver> solution;              //@synthesize solution=_solution - In the implementation block
@property (nonatomic,readonly) CGRect globalFrame;                                         //@synthesize globalFrame=_globalFrame - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                                         //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect orthogonalContentLayoutFrame; 
@property (nonatomic,readonly) CGSize orthogonalContentSize; 
@property (nonatomic,readonly) NSCollectionLayoutSection * section;                        //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizes * preferredSizes;               //@synthesize preferredSizes=_preferredSizes - In the implementation block
-(id)description;
-(NSCollectionLayoutSection *)section;
-(CGSize)contentSize;
-(id<_UICollectionLayoutSectionSolver>)solution;
-(_UICollectionPreferredSizes *)preferredSizes;
-(CGRect)globalFrame;
-(CGRect)orthogonalContentLayoutFrame;
-(CGSize)orthogonalContentSize;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 contentSize:(CGSize)arg3 section:(id)arg4 preferredSizes:(id)arg5 ;
-(id)copyWithGlobalFrame:(CGRect)arg1 ;
-(id)initWithSolution:(id)arg1 globalFrame:(CGRect)arg2 contentSize:(CGSize)arg3 section:(id)arg4 ;
@end
