/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WFActionEnvironment : NSObject

@property (nonatomic,readonly) BOOL isMemoryConstrained; 
@property (nonatomic,readonly) BOOL isWatchOS; 
@property (nonatomic,readonly) BOOL isAppExtension; 
+(id)currentEnvironment;
+(id)environmentForWorkflowType:(id)arg1 ;
-(BOOL)isAppExtension;
-(BOOL)isMemoryConstrained;
-(BOOL)isWatchOS;
@end

