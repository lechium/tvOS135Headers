/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (assign,nonatomic) BOOL firstEntity; 
@property (nonatomic,retain) SAUIDecoratedText * playDetail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)competingTeamPlayDetailItem;
+(id)competingTeamPlayDetailItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)firstEntity;
-(void)setFirstEntity:(BOOL)arg1 ;
-(SAUIDecoratedText *)playDetail;
-(void)setPlayDetail:(SAUIDecoratedText *)arg1 ;
@end

