/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSURL;

@interface SANoteUpdate : SADomainCommand

@property (nonatomic,copy) NSString * contentsToAppend; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)update;
+(id)updateWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)contentsToAppend;
-(void)setContentsToAppend:(NSString *)arg1 ;
@end

