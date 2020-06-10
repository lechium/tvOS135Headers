/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class PXMemoriesSpec, NSIndexSet, NSDictionary;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {

	CGSize _size;
	PXMemoriesSpec* _spec;
	NSIndexSet* _geometryKinds;
	CGRect _sectionHeaderRect;
	NSDictionary* _rectsByIndexByKind;
	BOOL _isPrepared;
	long long _layoutAxis;

}

@property (assign,nonatomic) long long layoutAxis;              //@synthesize layoutAxis=_layoutAxis - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)invalidate;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(long long)layoutAxis;
-(void)setLayoutAxis:(long long)arg1 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_prepareLayoutIfNeeded;
@end

