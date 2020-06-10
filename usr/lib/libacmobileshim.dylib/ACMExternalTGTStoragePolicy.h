/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMKeychainTGTStoragePolicy.h>

@class NSData;

@interface ACMExternalTGTStoragePolicy : ACMKeychainTGTStoragePolicy {

	NSData* _secret;

}

@property (nonatomic,readonly) id<ACFCryptographProtocol> cryptograph; 
@property (nonatomic,readonly) NSData * secret;                                     //@synthesize secret=_secret - In the implementation block
-(id)service;
-(id)preferences;
-(NSData *)secret;
-(int)storeItemWithInfo:(id)arg1 ;
-(id)tokenDataWithDictionary:(id)arg1 ;
-(id)encryptTokenData:(id)arg1 ;
-(id)decryptTokenData:(id)arg1 ;
-(id)tokenDictionaryWithData:(id)arg1 ;
-(void)resetSecret;
-(BOOL)performRemoveTokenWithPrincipal:(id)arg1 service:(id)arg2 ;
-(id<ACFCryptographProtocol>)cryptograph;
-(id)searchItemWithInfo:(id)arg1 ;
@end
