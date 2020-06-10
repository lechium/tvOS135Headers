/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ARUIRingsView.h>

@class ARUICountdownController;

@interface ARUICountdownView : ARUIRingsView {

	ARUICountdownController* _countdownController;
	ARUICountdownController* _backingTrackController;

}

@property (nonatomic,readonly) ARUICountdownController * countdownController; 
+(id)countdownViewConfiguredForCompanion;
+(id)countdownViewConfiguredForWatch;
-(ARUICountdownController *)countdownController;
-(id)initWithCountdownController:(id)arg1 ;
-(id)initWithCountdownController:(id)arg1 backingTrackController:(id)arg2 ;
-(id)backingTrackController;
@end
