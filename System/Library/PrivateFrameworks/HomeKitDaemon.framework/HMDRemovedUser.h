/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding> {

	BOOL _removalInProgress;
	HMDUser* _user;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isRemovalInProgress) BOOL removalInProgress;              //@synthesize removalInProgress=_removalInProgress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)removedUserWithUser:(id)arg1 ;
-(id)description;
-(HMDUser *)user;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(BOOL)isEqualToUser:(id)arg1 ;
-(void)setRemovalInProgress:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 expiration:(id)arg2 ;
-(BOOL)isEqualToUserID:(id)arg1 ;
-(BOOL)isRemovalInProgress;
@end

