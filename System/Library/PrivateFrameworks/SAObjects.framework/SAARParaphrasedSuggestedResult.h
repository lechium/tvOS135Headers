/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedSuggestedResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (assign,nonatomic) long long rank; 
+(id)paraphrasedSuggestedResult;
+(id)paraphrasedSuggestedResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setRank:(long long)arg1 ;
-(long long)rank;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(id)encodedClassName;
@end

