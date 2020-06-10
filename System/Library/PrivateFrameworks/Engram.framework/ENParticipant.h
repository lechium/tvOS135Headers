/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol ENAccountPublicKey;
@class NSSet, NSArray;

@interface ENParticipant : NSObject <NSSecureCoding> {

	id<ENAccountPublicKey> _accountPublicKey;
	NSSet* _aliases;
	NSArray* _devices;

}

@property (nonatomic,retain) id<ENAccountPublicKey> accountPublicKey;              //@synthesize accountPublicKey=_accountPublicKey - In the implementation block
@property (nonatomic,retain) NSSet * aliases;                                      //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSArray * devices;                                    //@synthesize devices=_devices - In the implementation block
@property (nonatomic,readonly) BOOL supportsEngram; 
+(id)participantsFromEndpoints:(id)arg1 ;
+(id)participantsByAlias:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)devices;
-(void)setDevices:(NSArray *)arg1 ;
-(NSSet *)aliases;
-(void)setAliases:(NSSet *)arg1 ;
-(id)initWithAccountPublicKey:(id)arg1 aliases:(id)arg2 devices:(id)arg3 ;
-(id<ENAccountPublicKey>)accountPublicKey;
-(BOOL)supportsEngram;
-(id)deviceWithIdentifier:(id)arg1 ;
-(void)setAccountPublicKey:(id<ENAccountPublicKey>)arg1 ;
@end

