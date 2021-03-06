/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLRegionsClusteringItem;
@interface PLRegionsHierarchicalClusteringObject : NSObject {

	id<PLRegionsClusteringItem> _object;
	unsigned long long _index;

}

@property (nonatomic,readonly) id<PLRegionsClusteringItem> object;              //@synthesize object=_object - In the implementation block
@property (assign) unsigned long long index;                                    //@synthesize index=_index - In the implementation block
+(id)clusterObjectWithObject:(id)arg1 index:(unsigned long long)arg2 ;
-(id<PLRegionsClusteringItem>)object;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

