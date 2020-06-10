/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsCore/INCExecutionInfo.h>

@class NSString;

@interface INCUserActivityExecutionInfo : INCExecutionInfo {

	NSString* _userActivityType;

}

@property (nonatomic,copy,readonly) NSString * userActivityType;              //@synthesize userActivityType=_userActivityType - In the implementation block
+(void)initialize;
-(NSString *)userActivityType;
-(id)initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 ;
-(id)_initWithUserActivityType:(id)arg1 launchableAppBundleId:(id)arg2 containingAppBundleURL:(id)arg3 ;
-(BOOL)canRunOnLocalDevice;
@end
