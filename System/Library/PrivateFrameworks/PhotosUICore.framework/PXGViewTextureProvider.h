/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGTextureProvider.h>

@protocol PXGViewSource;
@interface PXGViewTextureProvider : PXGTextureProvider {

	id<PXGViewSource> _fallbackViewSource;

}

@property (assign,nonatomic,__weak) id<PXGViewSource> fallbackViewSource;              //@synthesize fallbackViewSource=_fallbackViewSource - In the implementation block
-(NSRange)requestTexturesForSpritesInRange:(PXGSpriteIndexRange)arg1 geometries:(SCD_Struct_PX13*)arg2 styles:(SCD_Struct_PX16*)arg3 infos:(SCD_Struct_PX17*)arg4 inLayout:(id)arg5 ;
-(void)_requestTextureWithDecorationOptions:(unsigned long long)arg1 viewClass:(Class)arg2 userData:(id)arg3 requestID:(int)arg4 ;
-(void)_requestTextureForViewClass:(Class)arg1 userData:(id)arg2 requestID:(int)arg3 ;
-(id<PXGViewSource>)fallbackViewSource;
-(void)setFallbackViewSource:(id<PXGViewSource>)arg1 ;
@end

