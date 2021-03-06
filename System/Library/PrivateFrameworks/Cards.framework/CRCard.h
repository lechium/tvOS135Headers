/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:12 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSSet, NSString, SFCard;


@protocol CRCard <NSObject,NSSecureCoding,NSCopying,CRContent>
@property (nonatomic,readonly) NSArray * cardSections; 
@property (nonatomic,readonly) NSSet * interactions; 
@property (nonatomic,readonly) NSArray * dismissalCommands; 
@property (nonatomic,copy,readonly) NSString * cardIdentifier; 
@property (nonatomic,readonly) unsigned long long cardFormat; 
@property (nonatomic,readonly) BOOL asynchronous; 
@property (nonatomic,readonly) BOOL flexibleSectionOrder; 
@property (nonatomic,readonly) SFCard * backingCard; 
@optional
-(BOOL)flexibleSectionOrder;
-(BOOL)asynchronous;
-(void)loadCardWithCompletion:(/*^block*/id)arg1;
-(SFCard *)backingCard;

@required
-(NSArray *)cardSections;
-(NSSet *)interactions;
-(NSArray *)dismissalCommands;
-(NSString *)cardIdentifier;
-(unsigned long long)cardFormat;

@end

