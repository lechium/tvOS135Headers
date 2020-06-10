/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:50 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppletSubcredentialSharingInvitationMetadata : NSObject <NSSecureCoding> {

	BOOL _shouldRequestInvitation;
	NSString* _anonymizationSalt;

}

@property (nonatomic,retain) NSString * anonymizationSalt;              //@synthesize anonymizationSalt=_anonymizationSalt - In the implementation block
@property (assign,nonatomic) BOOL shouldRequestInvitation;              //@synthesize shouldRequestInvitation=_shouldRequestInvitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldRequestInvitation:(BOOL)arg1 ;
-(void)setAnonymizationSalt:(NSString *)arg1 ;
-(NSString *)anonymizationSalt;
-(BOOL)shouldRequestInvitation;
@end

