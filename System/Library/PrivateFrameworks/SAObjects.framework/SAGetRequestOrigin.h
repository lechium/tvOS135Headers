/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SAGetRequestOrigin : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredAccuracy; 
@property (nonatomic,copy) NSNumber * maxAge; 
@property (nonatomic,copy) NSNumber * searchTimeout; 
+(id)getRequestOrigin;
+(id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)desiredAccuracy;
-(void)setDesiredAccuracy:(NSString *)arg1 ;
-(NSNumber *)maxAge;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setMaxAge:(NSNumber *)arg1 ;
-(NSNumber *)searchTimeout;
-(void)setSearchTimeout:(NSNumber *)arg1 ;
@end
