/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTriggerModel.h>

@class NSDate, NSData, NSString;

@interface HMDTimerTriggerModel : HMDTriggerModel

@property (nonatomic,copy) NSDate * fireDate; 
@property (nonatomic,copy) NSData * fireDateTimeZone; 
@property (nonatomic,copy) NSString * significantEvent; 
@property (nonatomic,copy) NSData * significantEventOffset; 
@property (nonatomic,copy) NSData * fireRepeatInterval; 
@property (nonatomic,copy) NSData * recurrences; 
+(id)properties;
-(id)createPayload;
@end
