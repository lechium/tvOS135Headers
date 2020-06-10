/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>
#import <UIKitCore/_UIVisualEffectViewParticipating.h>

@class _UIVisualEffectViewBackdropCaptureGroup, NSArray, NSString;

@interface _UIVisualEffectImageView : UIImageView <_UIVisualEffectViewParticipating> {

	_UIVisualEffectViewBackdropCaptureGroup* _primaryCaptureGroup;
	NSArray* _viewEffects;
	NSArray* _filters;

}

@property (assign,nonatomic,__weak) id<_UIVisualEffectViewSubviewMonitoring> subviewMonitor; 
@property (assign,nonatomic) BOOL disableGroupFiltering; 
@property (nonatomic,retain) _UIVisualEffectViewBackdropCaptureGroup * primaryCaptureGroup;               //@synthesize primaryCaptureGroup=_primaryCaptureGroup - In the implementation block
@property (nonatomic,copy) NSArray * viewEffects;                                                         //@synthesize viewEffects=_viewEffects - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                                             //@synthesize filters=_filters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView*<_UIVisualEffectViewParticipating> containedView; 
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(UIView*<_UIVisualEffectViewParticipating>)containedView;
-(void)setSubviewMonitor:(id<_UIVisualEffectViewSubviewMonitoring>)arg1 ;
-(void)setContainedView:(UIView*<_UIVisualEffectViewParticipating>)arg1 ;
-(void)setPrimaryCaptureGroup:(_UIVisualEffectViewBackdropCaptureGroup *)arg1 ;
-(void)applyRequestedFilterEffects;
-(NSArray *)viewEffects;
-(void)setViewEffects:(NSArray *)arg1 ;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedViewEffects;
-(_UIVisualEffectViewBackdropCaptureGroup *)primaryCaptureGroup;
-(BOOL)disableGroupFiltering;
-(void)setDisableGroupFiltering:(BOOL)arg1 ;
-(id)_initialValueForLayer:(id)arg1 keyPath:(id)arg2 usePresentationValue:(BOOL)arg3 ;
-(id<_UIVisualEffectViewSubviewMonitoring>)subviewMonitor;
@end

