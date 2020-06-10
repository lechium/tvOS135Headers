/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/AKCredentialRequestProtocol.h>

@class NSString, NSUUID;

@interface AKCredentialRequest : NSObject <AKCredentialRequestProtocol> {

	NSString* _altDSID;
	NSString* _userIdentifier;
	NSUUID* _requestIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * userIdentifier;                        //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                      //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(NSUUID *)requestIdentifier;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
@end

