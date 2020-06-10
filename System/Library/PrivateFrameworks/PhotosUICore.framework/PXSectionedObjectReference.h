/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSObjectNSCopying;
@interface PXSectionedObjectReference : NSObject <NSCopying> {

	id<NSObject><NSCopying> _sectionObject;
	id<NSObject><NSCopying> _itemObject;
	id<NSObject><NSCopying> _subitemObject;
	id<NSObject><NSCopying> _leafObject;
	PXSimpleIndexPath _indexPath;

}

@property (nonatomic,copy,readonly) id<NSObject><NSCopying> sectionObject;              //@synthesize sectionObject=_sectionObject - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> itemObject;                 //@synthesize itemObject=_itemObject - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> subitemObject;              //@synthesize subitemObject=_subitemObject - In the implementation block
@property (nonatomic,readonly) PXSimpleIndexPath indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> leafObject;                 //@synthesize leafObject=_leafObject - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(PXSimpleIndexPath)indexPath;
-(id)initWithSectionObject:(id)arg1 itemObject:(id)arg2 subitemObject:(id)arg3 indexPath:(PXSimpleIndexPath)arg4 ;
-(id<NSObject><NSCopying>)sectionObject;
-(id<NSObject><NSCopying>)itemObject;
-(id<NSObject><NSCopying>)subitemObject;
-(id<NSObject><NSCopying>)leafObject;
@end

