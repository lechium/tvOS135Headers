/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@interface PXCachingLayoutGenerator : PXLayoutGenerator {

	BOOL _isValid;
	CGSize _contentSize;
	CGRect* _itemRects;
	long long* _itemKinds;
	long long _itemCapacity;

}
-(void)dealloc;
-(void)invalidate;
-(CGSize)size;
-(void)_updateIfNeeded;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)updateContentSize:(out CGSize*)arg1 itemRects:(out CGRect*)arg2 ;
-(void)updateContentSize:(out CGSize*)arg1 itemRects:(out CGRect*)arg2 itemKinds:(out long long*)arg3 ;
@end

