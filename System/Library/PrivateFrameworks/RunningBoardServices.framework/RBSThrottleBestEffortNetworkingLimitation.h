/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoardServices/RBSLimitation.h>

@interface RBSThrottleBestEffortNetworkingLimitation : RBSLimitation
+(id)limitation;
-(void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
-(BOOL)isValidForContext:(id)arg1 withError:(id*)arg2 ;
-(void)applyToSystemState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3 ;
@end

