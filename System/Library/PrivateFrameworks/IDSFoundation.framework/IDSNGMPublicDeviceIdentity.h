/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSNGMPublicDeviceIdentity : NSObject
+(id)identityWithIdentityData:(id)arg1 prekeyData:(id)arg2 error:(id*)arg3 ;
+(id)identityWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)identityData;
-(id)prekeyData;
-(id)sealMessage:(id)arg1 signedByFullIdentity:(id)arg2 error:(id*)arg3 ;
-(id)dataRepresentationWithError:(id*)arg1 ;
@end
