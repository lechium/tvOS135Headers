/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXPresentedGridLayout <NSObject>
@property (nonatomic,readonly) long long presentedNumberOfRows; 
@required
-(long long)presentedNumberOfColumnsAtRow:(long long)arg1;
-(CGRect*)presentedRectForItemAtIndex:(long long)arg1;
-(SCD_Struct_PX28*)presentedItemLocationForItemAtIndex:(long long)arg1;
-(id)presentedItemsInRect:(CGRect)arg1;
-(id)presentedItemsBetweenItem:(long long)arg1 andItem:(long long)arg2;
-(long long)presentedNumberOfRows;

@end

