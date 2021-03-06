/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SharingUI/SharingUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class CAStateController, NSMutableArray, NSString, CALayer;

@interface SFCAPackageView : UIView <CAStateControllerDelegate> {

	float _duration;
	CAStateController* _stateController;
	NSMutableArray* _completionHandlers;

}

@property (retain) CAStateController * stateController;                    //@synthesize stateController=_stateController - In the implementation block
@property (readonly) NSMutableArray * completionHandlers;                  //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (getter=isInitialState,readonly) BOOL initialState; 
@property (copy,readonly) NSString * stateName; 
@property (readonly) CALayer * packageRootLayer; 
@property (readonly) float duration;                                       //@synthesize duration=_duration - In the implementation block
+(id)keyPathsForValuesAffectingPackageRootLayer;
-(id)initWithCoder:(id)arg1 ;
-(float)duration;
-(unsigned long long)statesCount;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CAStateController *)stateController;
-(NSMutableArray *)completionHandlers;
-(void)setStateController:(CAStateController *)arg1 ;
-(void)_stcaPackageViewCommonInit;
-(id)_newStateControllerWithSuperlayer:(id)arg1 ;
-(void)_changeAppearance;
-(CALayer *)packageRootLayer;
-(void)setStateName:(NSString *)arg1 ;
-(BOOL)isInitialState;
-(NSString *)stateName;
-(id)_getStateWithName:(id)arg1 ;
-(void)setInitialState;
-(void)animateToInitialStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)animateToStateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

