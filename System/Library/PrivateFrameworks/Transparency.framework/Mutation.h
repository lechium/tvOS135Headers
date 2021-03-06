/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSData;

@interface Mutation : GPBMessage

@property (assign,nonatomic) int version; 
@property (assign,nonatomic) int mutationType; 
@property (assign,nonatomic) unsigned long long mutationMs; 
@property (nonatomic,copy) NSData * uriVrfoutput; 
@property (nonatomic,copy) NSData * accountId; 
@property (nonatomic,copy) NSData * deviceIdVrfoutput; 
@property (nonatomic,copy) NSData * clientDataVrfoutput; 
@property (assign,nonatomic) unsigned long long appVersion; 
+(id)descriptor;
@end

