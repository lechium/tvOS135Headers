/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * initialView; 
+(id)clearScreen;
+(id)clearScreenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAAceView *)initialView;
-(void)setInitialView:(SAAceView *)arg1 ;
@end

