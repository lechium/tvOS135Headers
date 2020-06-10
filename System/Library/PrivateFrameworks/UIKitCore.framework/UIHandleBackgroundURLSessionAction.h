/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:23 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UIHandleBackgroundURLSessionAction : BSAction

@property (nonatomic,copy,readonly) NSString * sessionIdentifier; 
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(NSString *)sessionIdentifier;
-(id)initWithSessionIdentifier:(id)arg1 ;
-(long long)UIActionType;
-(id)initWithSessionIdentifier:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
@end

