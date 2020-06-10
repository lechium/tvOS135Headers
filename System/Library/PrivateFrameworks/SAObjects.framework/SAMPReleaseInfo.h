/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPReleaseInfo : AceObject <SAAceSerializable>

@property (nonatomic,retain) SACalendar * releaseDate; 
@property (assign,nonatomic) long long releaseYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_af_releaseInfoWithReleaseDate:(id)arg1 ;
+(id)releaseInfo;
+(id)releaseInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACalendar *)releaseDate;
-(void)setReleaseDate:(SACalendar *)arg1 ;
-(void)setReleaseYear:(long long)arg1 ;
-(long long)releaseYear;
-(id)encodedClassName;
@end

