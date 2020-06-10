/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, NSHashTable;

@interface PKBacklightController : NSObject {

	BrightnessSystemClient* _brightnessClient;
	BOOL _foregroundActive;
	NSHashTable* _requesters;
	NSHashTable* _allowers;
	BOOL _isBacklightRamped;

}
+(id)sharedInstance;
-(id)init;
-(void)beginAllowingBacklightRamping:(id)arg1 ;
-(void)endAllowingBacklightRamping:(id)arg1 ;
-(void)endRequestingBacklightRamping:(id)arg1 ;
-(void)beginRequestingBacklightRamping:(id)arg1 ;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg1 period:(double)arg2 ;
@end
