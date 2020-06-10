/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BKSHIDEventSenderDescriptor.h>

@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (assign,nonatomic) long long hardwareType; 
@property (nonatomic,copy) BKSHIDEventDisplay * associatedDisplay; 
@property (assign,getter=isAuthenticated,nonatomic) BOOL authenticated; 
@property (assign,nonatomic) unsigned long long senderID; 
+(id)new;
-(id)init;
-(void)setHardwareType:(long long)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(void)setAssociatedDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setPrimaryPage:(unsigned)arg1 primaryUsage:(unsigned)arg2 ;
-(void)setSenderID:(unsigned long long)arg1 ;
@end

