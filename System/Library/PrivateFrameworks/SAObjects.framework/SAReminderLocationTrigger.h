/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAReminderTrigger.h>

@class NSURL, NSString, SALocation;

@interface SAReminderLocationTrigger : SAReminderTrigger

@property (nonatomic,copy) NSURL * contactIdentifier; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (nonatomic,retain) SALocation * location; 
@property (nonatomic,copy) NSString * mobileSpace; 
@property (nonatomic,copy) NSString * timing; 
+(id)locationTrigger;
+(id)locationTriggerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)contactIdentifier;
-(SALocation *)location;
-(void)setLocation:(SALocation *)arg1 ;
-(void)setContactIdentifier:(NSURL *)arg1 ;
-(NSString *)mobileSpace;
-(void)setMobileSpace:(NSString *)arg1 ;
-(NSString *)timing;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(void)setTiming:(NSString *)arg1 ;
@end

