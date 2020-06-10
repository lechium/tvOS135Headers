/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilitiesUI.framework/NetAppsUtilitiesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NAUIAutoUpdatingFontObserver : NSObject {

	id _notificationObserver;
	id _target;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
+(BOOL)canObserveFontsForTarget:(id)arg1 ;
-(void)dealloc;
-(id)target;
-(id)initWithTarget:(id)arg1 ;
-(void)updateDyamicFontForCurrentContentSize;
@end

