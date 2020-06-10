/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUSGenericResult : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * actionButton; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SAUIImageResource * thumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * titleMaxLines; 
+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SAUIImageResource *)thumbnail;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)footnote;
-(BOOL)centered;
-(void)setCentered:(BOOL)arg1 ;
-(SAUIAppPunchOut *)actionButton;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)descriptions;
-(NSString *)secondaryTitle;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSNumber *)titleMaxLines;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
@end
