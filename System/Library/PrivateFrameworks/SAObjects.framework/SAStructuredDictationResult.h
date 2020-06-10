/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAStructuredDictationResult : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * items; 
+(id)structuredDictationResult;
+(id)structuredDictationResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

