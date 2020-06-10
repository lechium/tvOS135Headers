/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMUserIdentity, NSNumber;

@interface EDAMInvitationShareRelationship : FATObject {

	NSString* _displayName;
	EDAMUserIdentity* _recipientUserIdentity;
	NSNumber* _privilege;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) EDAMUserIdentity * recipientUserIdentity;              //@synthesize recipientUserIdentity=_recipientUserIdentity - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                  //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                               //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(EDAMUserIdentity *)recipientUserIdentity;
-(void)setRecipientUserIdentity:(EDAMUserIdentity *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
@end

