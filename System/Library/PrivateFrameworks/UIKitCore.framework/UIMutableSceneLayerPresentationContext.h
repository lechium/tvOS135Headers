/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UISceneLayerPresentationContext.h>

@class UITransformer;

@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (assign,nonatomic) double alpha; 
@property (nonatomic,retain) UITransformer * transformer; 
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,getter=isClippingDisabled,nonatomic) BOOL clippingDisabled; 
@property (assign,nonatomic) unsigned long long renderingMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end
