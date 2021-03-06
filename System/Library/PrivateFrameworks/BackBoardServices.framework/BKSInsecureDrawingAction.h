/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSDictionary * pidToContextInfoDictionary; 
@property (nonatomic,readonly) NSArray * processIds; 
@property (nonatomic,readonly) NSArray * secureModeViolations; 
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithPidToContextIdsDictionary:(id)arg1 ;
-(id)initWithSecureModeViolations:(id)arg1 ;
-(id)_initWithPidToContextInfoDictionary:(id)arg1 ;
-(NSArray *)secureModeViolations;
-(NSDictionary *)pidToContextInfoDictionary;
-(NSArray *)processIds;
@end

