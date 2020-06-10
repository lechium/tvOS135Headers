/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/WFBooleanSettingIntent.h>

@class NSNumber;

@interface WFSetCellularDataIntent : INIntent <WFBooleanSettingIntent>

@property (nonatomic,readonly) Class settingsClientClass; 
@property (assign,nonatomic) long long operation; 
@property (nonatomic,retain) NSNumber * state; 
@property (nonatomic,copy) NSNumber * state; 
-(void)applyWithSettingsClient:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Class)settingsClientClass;
@end
