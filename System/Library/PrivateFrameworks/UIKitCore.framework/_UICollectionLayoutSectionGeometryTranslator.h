/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {

	CGSize _contentSize;
	unsigned long long _layoutAxis;
	BOOL _layoutRTL;
	NSDirectionalEdgeInsets _supplementaryInsets;
	NSDirectionalEdgeInsets _sectionInsets;
	CGRect _contentFrame;
	CGRect _effectiveFrame;

}

@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) CGSize auxillaryHostContentSize; 
@property (nonatomic,readonly) CGSize effectiveContentSize; 
@property (nonatomic,readonly) CGPoint contentOffset; 
@property (nonatomic,readonly) CGRect contentFrame; 
@property (nonatomic,readonly) CGRect effectiveFrame; 
-(id)description;
-(CGRect)contentFrame;
-(CGSize)contentSize;
-(CGPoint)contentOffset;
-(CGSize)effectiveContentSize;
-(id)initWithContentSize:(CGSize)arg1 layoutAxis:(unsigned long long)arg2 layoutRTL:(BOOL)arg3 sectionInsets:(NSDirectionalEdgeInsets)arg4 supplementaryInsets:(NSDirectionalEdgeInsets)arg5 ;
-(CGRect)contentRectForSectionRect:(CGRect)arg1 ;
-(CGSize)auxillaryHostContentSize;
-(void)_computeFrames;
-(CGRect)effectiveFrame;
@end

