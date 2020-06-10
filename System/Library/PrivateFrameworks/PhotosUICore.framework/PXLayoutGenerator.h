/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PXLayoutMetrics, NSIndexSet, NSString;

@interface PXLayoutGenerator : NSObject <NSCopying> {

	PXLayoutMetrics* _metrics;
	unsigned long long _itemCount;
	unsigned long long _keyItemIndex;
	/*^block*/id _itemLayoutInfoBlock;

}

@property (nonatomic,readonly) PXCornerSpriteIndexes cornerSpriteIndexes; 
@property (nonatomic,copy) PXLayoutMetrics * metrics;                                  //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) unsigned long long itemCount;                             //@synthesize itemCount=_itemCount - In the implementation block
@property (assign,nonatomic) unsigned long long keyItemIndex;                          //@synthesize keyItemIndex=_keyItemIndex - In the implementation block
@property (nonatomic,copy) id itemLayoutInfoBlock;                                     //@synthesize itemLayoutInfoBlock=_itemLayoutInfoBlock - In the implementation block
@property (nonatomic,readonly) CGSize estimatedSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSIndexSet * geometryKinds; 
@property (nonatomic,readonly) NSString * diagnosticDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)invalidate;
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(PXLayoutMetrics *)metrics;
-(void)setMetrics:(PXLayoutMetrics *)arg1 ;
-(void)setItemCount:(unsigned long long)arg1 ;
-(unsigned long long)itemCount;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(NSString *)diagnosticDescription;
-(unsigned long long)keyItemIndex;
-(PXCornerSpriteIndexes)cornerSpriteIndexes;
-(void)setKeyItemIndex:(unsigned long long)arg1 ;
-(NSIndexSet *)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)setItemLayoutInfoBlock:(id)arg1 ;
-(id)itemLayoutInfoBlock;
@end
