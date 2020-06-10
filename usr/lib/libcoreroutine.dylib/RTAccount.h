/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@class NSString, NSArray;

@interface RTAccount : NSObject {

	BOOL _primaryEmailVerified;
	NSString* _dsid;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _appleID;
	NSString* _altDSID;
	NSString* _primaryEmail;
	NSString* _appleIDAlias;
	NSArray* _appleIDAliases;

}

@property (nonatomic,retain) NSString * dsid;                        //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * firstName;                   //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                    //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL primaryEmailVerified;              //@synthesize primaryEmailVerified=_primaryEmailVerified - In the implementation block
@property (nonatomic,retain) NSString * appleID;                     //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * primaryEmail;                //@synthesize primaryEmail=_primaryEmail - In the implementation block
@property (nonatomic,retain) NSString * appleIDAlias;                //@synthesize appleIDAlias=_appleIDAlias - In the implementation block
@property (nonatomic,retain) NSArray * appleIDAliases;               //@synthesize appleIDAliases=_appleIDAliases - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSArray *)appleIDAliases;
-(NSString *)primaryEmail;
-(BOOL)primaryEmailVerified;
-(id)appleIDs;
-(void)setPrimaryEmail:(NSString *)arg1 ;
-(id)initWithACAccount:(id)arg1 ;
-(void)setPrimaryEmailVerified:(BOOL)arg1 ;
-(void)setAppleIDAlias:(NSString *)arg1 ;
-(void)setAppleIDAliases:(NSArray *)arg1 ;
-(NSString *)appleIDAlias;
@end

