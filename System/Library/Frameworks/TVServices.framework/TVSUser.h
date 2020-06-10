/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface TVSUser : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localAlias;
	BOOL _isHomeUserSharingSameiTunesAccount;
	BOOL _allowsAccess;
	NSString* _iTunesAltDSID;
	NSString* _homeUserID;
	NSString* _homeID;
	NSNumber* _iTunesDSID;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _pseudonymID;
	NSString* _iTunesUsername;

}

@property (nonatomic,copy) NSString * iTunesUsername;                                //@synthesize iTunesUsername=_iTunesUsername - In the implementation block
@property (nonatomic,copy) NSString * pseudonymID;                                   //@synthesize pseudonymID=_pseudonymID - In the implementation block
@property (nonatomic,readonly) NSString * iTunesAltDSID;                             //@synthesize iTunesAltDSID=_iTunesAltDSID - In the implementation block
@property (nonatomic,readonly) NSString * homeUserID;                                //@synthesize homeUserID=_homeUserID - In the implementation block
@property (nonatomic,readonly) NSString * homeID;                                    //@synthesize homeID=_homeID - In the implementation block
@property (nonatomic,readonly) NSNumber * iTunesDSID;                                //@synthesize iTunesDSID=_iTunesDSID - In the implementation block
@property (nonatomic,readonly) NSString * fullName;                                  //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * lastName;                                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,readonly) NSString * effectiveIdentifier; 
@property (nonatomic,retain) NSString * localAlias; 
@property (nonatomic,readonly) BOOL isHomeUserSharingSameiTunesAccount;              //@synthesize isHomeUserSharingSameiTunesAccount=_isHomeUserSharingSameiTunesAccount - In the implementation block
@property (assign,nonatomic) BOOL allowsAccess;                                      //@synthesize allowsAccess=_allowsAccess - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allUsers;
+(void)fetchAllUsersWithCompletion:(/*^block*/id)arg1 ;
+(id)activeUsers;
+(void)fetchActiveUsersWithCompletion:(/*^block*/id)arg1 ;
+(void)setActiveUsers:(id)arg1 ;
+(id)accountPropertyKeyForGameCenterWithUserIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)fullName;
-(NSString *)effectiveIdentifier;
-(void)_finishInitFromAccount:(id)arg1 ;
-(void)_writeAccountProperty:(id)arg1 forKeyPrefix:(id)arg2 ;
-(NSString *)iTunesAltDSID;
-(NSString *)homeUserID;
-(NSString *)pseudonymID;
-(NSString *)homeID;
-(id)initWithHomeUserID:(id)arg1 account:(id)arg2 ;
-(NSString *)localAlias;
-(void)setLocalAlias:(NSString *)arg1 ;
-(void)setAllowsAccess:(BOOL)arg1 ;
-(NSNumber *)iTunesDSID;
-(void)setPseudonymID:(NSString *)arg1 ;
-(BOOL)isHomeUserSharingSameiTunesAccount;
-(BOOL)allowsAccess;
-(NSString *)iTunesUsername;
-(void)setITunesUsername:(NSString *)arg1 ;
@end

