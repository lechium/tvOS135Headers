/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXGInternalReusableView <NSObject>
@required
-(void)pxg_configureWithTexture:(id)arg1 geometry:(SCD_Struct_UI137*)arg2 info:(SCD_Struct_UI138*)arg3 style:(SCD_Struct_UI140*)arg4 textureInfo:({?=}*)arg5 resizableCapInsets:(SCD_Struct_UI94)arg6;
-(void)pxg_becomeReusable;
-(void)pxg_addToScrollViewController:(id)arg1;
-(void)pxg_prepareForReuse;
-(void)pxg_shiftPosition:(CGPoint)arg1;

@end

