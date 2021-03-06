/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXIndexPathSet.h>

@interface PXMutableIndexPathSet : PXIndexPathSet
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)removeIndexPath:(PXSimpleIndexPath)arg1 ;
-(void)unionIndexPathSet:(id)arg1 ;
-(void)minusIndexPathSet:(id)arg1 ;
-(void)removeAllIndexPaths;
-(void)modifySectionIndexSetForDataSourceIdentifier:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)modifyItemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)modifySubitemIndexSetForDataSourceIdentifier:(unsigned long long)arg1 section:(long long)arg2 item:(long long)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

