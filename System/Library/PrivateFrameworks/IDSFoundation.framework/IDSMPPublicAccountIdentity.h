/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSMPIdentity.h>

@class NSData;

@interface IDSMPPublicAccountIdentity : IDSMPIdentity

@property (nonatomic,readonly) NSData * publicName; 
+(id)publicAccountIdentitywithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
-(NSData *)publicName;
-(BOOL)verifySignature:(id)arg1 ofData:(id)arg2 error:(id*)arg3 ;
@end

