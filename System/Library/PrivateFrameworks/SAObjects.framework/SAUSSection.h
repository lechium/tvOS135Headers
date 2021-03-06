/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAUIAppPunchOut, NSString;

@interface SAUSSection : SADomainObject

@property (nonatomic,copy) NSArray * cardResults; 
@property (nonatomic,copy) NSArray * genericResults; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * sectionTitle; 
+(id)section;
+(id)sectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)cardResults;
-(void)setCardResults:(NSArray *)arg1 ;
-(NSArray *)genericResults;
-(void)setGenericResults:(NSArray *)arg1 ;
@end

