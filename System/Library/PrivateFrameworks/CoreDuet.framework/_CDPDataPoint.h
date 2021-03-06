/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:42 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSArray, NSString;


@protocol _CDPDataPoint <NSObject>
@property (nonatomic,readonly) BOOL userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL userIsThreadInitiator; 
@required
-(NSDate *)timestamp;
-(NSString *)title;
-(NSArray *)peopleIdentifiers;
-(BOOL)userIsSender;
-(BOOL)userIsThreadInitiator;

@end

