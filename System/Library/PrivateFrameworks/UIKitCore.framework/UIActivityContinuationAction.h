/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString, NSDate, NSData;

@interface UIActivityContinuationAction : BSAction

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * activityTypeIdentifier; 
@property (nonatomic,readonly) NSString * originatingDeviceType; 
@property (nonatomic,readonly) NSString * originatingDeviceName; 
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSDate * lastUpdateTime; 
@property (nonatomic,readonly) NSData * userActivityData; 
-(NSString *)identifier;
-(NSString *)activityType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSDate *)lastUpdateTime;
-(NSData *)userActivityData;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceType;
-(long long)UIActionType;
-(NSString *)activityTypeIdentifier;
@end

