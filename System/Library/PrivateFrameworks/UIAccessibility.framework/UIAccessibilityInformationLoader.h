/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface UIAccessibilityInformationLoader : NSObject {

	NSTimer* _coalesceTimer;

}
+(id)sharedInstance;
-(id)_init;
-(void)setNeedsLoadAccessibilityInformation;
-(void)_loadAccessibilityInformationOnMainThread:(BOOL)arg1 ;
-(void)_setNeedsLoadAccessibilityInformationOnMainThread;
-(void)_coalesceTimerFired:(id)arg1 ;
-(void)loadAccessibilityInformation;
@end

