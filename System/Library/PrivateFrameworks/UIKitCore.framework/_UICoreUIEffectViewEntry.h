/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class CALayer;

@interface _UICoreUIEffectViewEntry : _UIVisualEffectViewEntry {

	CALayer* _materialLayer;

}

@property (nonatomic,retain) CALayer * materialLayer;              //@synthesize materialLayer=_materialLayer - In the implementation block
-(void)removeEffectFromView:(id)arg1 ;
-(BOOL)canTransitionToEffect:(id)arg1 ;
-(BOOL)shouldAnimateProperty:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(BOOL)isSameTypeOfEffect:(id)arg1 ;
-(CALayer *)materialLayer;
-(void)setMaterialLayer:(CALayer *)arg1 ;
@end
