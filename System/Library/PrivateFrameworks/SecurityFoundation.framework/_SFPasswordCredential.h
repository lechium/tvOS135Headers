/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFCredential.h>

@class NSString;

@interface _SFPasswordCredential : _SFCredential {

	NSString* _username;
	NSString* _password;

}

@property (getter=_cachedPassword,nonatomic,copy) NSString * password; 
@property (nonatomic,copy) NSString * username; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 supplementaryServiceIdentifiers:(id)arg4 ;
-(id)_cachedPassword;
-(id)descriptionShowingPassword:(BOOL)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 primaryServiceIdentifier:(id)arg3 ;
-(id)_initWithUsername:(id)arg1 primaryServiceIdentifier:(id)arg2 supplementaryServiceIdentifiers:(id)arg3 ;
-(void)usePasswordWithHandler:(/*^block*/id)arg1 ;
@end

