/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol INShareETAIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSArray * recipients; 
@property (assign,nonatomic) unsigned long long mediums; 
@required
-(long long)code;
-(void)setRecipients:(id)arg1;
-(NSArray *)recipients;
-(unsigned long long)mediums;
-(void)setMediums:(unsigned long long)arg1;

@end

