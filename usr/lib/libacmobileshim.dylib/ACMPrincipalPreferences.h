/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMPreferences.h>
#import <libobjc.A.dylib/ACMPrincipalPreferences.h>
@class ACFPrincipal, NSString, NSNumber;


@protocol ACMPrincipalPreferences <ACMBasePreferences>
@property (retain,readonly) ACFPrincipal * principal; 
@property (nonatomic,copy) NSString * clientSecret; 
@property (nonatomic,copy) NSNumber * clientSecretCreateDate; 
@property (nonatomic,copy) NSNumber * personID; 
@required
+(id)preferencesForPrincipal:(id)arg1;
-(id)userName;
-(id)realm;
-(NSNumber *)personID;
-(void)setPersonID:(id)arg1;
-(ACFPrincipal *)principal;
-(id)initWithPrincipal:(id)arg1;
-(NSString *)clientSecret;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecret:(id)arg1;
-(void)setClientSecretCreateDate:(id)arg1;

@end


@class ACFPrincipal, NSString, NSNumber;

@interface ACMPrincipalPreferences : ACMPreferences <ACMPrincipalPreferences> {

	ACFPrincipal* _principal;

}

@property (retain) ACFPrincipal * principal;                               //@synthesize principal=_principal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) id<ACMPreferencesStore> preferencesStore; 
@property (nonatomic,copy) NSString * clientSecret; 
@property (nonatomic,copy) NSNumber * clientSecretCreateDate; 
@property (nonatomic,copy) NSNumber * personID; 
+(id)preferencesForPrincipal:(id)arg1 ;
-(void)dealloc;
-(id)userName;
-(id)realm;
-(NSNumber *)personID;
-(void)setPersonID:(NSNumber *)arg1 ;
-(ACFPrincipal *)principal;
-(void)setPrincipal:(ACFPrincipal *)arg1 ;
-(id)initWithPrincipal:(id)arg1 ;
-(NSString *)clientSecret;
-(NSNumber *)clientSecretCreateDate;
-(void)setClientSecret:(NSString *)arg1 ;
-(void)setClientSecretCreateDate:(NSNumber *)arg1 ;
@end

