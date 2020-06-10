/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionViewUpdateTranslating;
@class NSArray, _UIDataSourceSnapshotter;

@interface _UICollectionCompositionalLayoutSolverUpdate : NSObject {

	NSArray* _updateItems;
	id<_UICollectionViewUpdateTranslating> _updateTranslator;
	_UIDataSourceSnapshotter* _finalDataSourceSnapshot;

}

@property (nonatomic,readonly) NSArray * updateItems;                                                //@synthesize updateItems=_updateItems - In the implementation block
@property (nonatomic,readonly) id<_UICollectionViewUpdateTranslating> updateTranslator;              //@synthesize updateTranslator=_updateTranslator - In the implementation block
@property (nonatomic,readonly) _UIDataSourceSnapshotter * finalDataSourceSnapshot;                   //@synthesize finalDataSourceSnapshot=_finalDataSourceSnapshot - In the implementation block
+(id)solverUpdateWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3 ;
-(NSArray *)updateItems;
-(_UIDataSourceSnapshotter *)finalDataSourceSnapshot;
-(id<_UICollectionViewUpdateTranslating>)updateTranslator;
-(id)initWithUpdateItems:(id)arg1 updateTranslator:(id)arg2 finalDataSourceSnapshot:(id)arg3 ;
@end

