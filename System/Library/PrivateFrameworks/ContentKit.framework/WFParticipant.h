/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSURL, NSString, NSPredicate;

@interface WFParticipant : NSObject <WFNaming, WFSerializableContent> {

	BOOL _managed;
	BOOL _currentUser;
	NSURL* _URL;
	NSString* _name;
	long long _status;
	long long _role;
	long long _type;
	NSString* _sourceIdentifier;
	NSPredicate* _contactPredicate;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                   //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long status;                                   //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long role;                                     //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) long long type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceIdentifier;                   //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (getter=isManaged,nonatomic,readonly) BOOL managed;                      //@synthesize managed=_managed - In the implementation block
@property (getter=isCurrentUser,nonatomic,readonly) BOOL currentUser;              //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) NSPredicate * contactPredicate;                     //@synthesize contactPredicate=_contactPredicate - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(long long)role;
-(NSURL *)URL;
-(long long)status;
-(NSString *)sourceIdentifier;
-(BOOL)isCurrentUser;
-(NSPredicate *)contactPredicate;
-(BOOL)isManaged;
-(NSString *)wfName;
-(id)wfSerializedRepresentation;
-(id)initWithURL:(id)arg1 name:(id)arg2 status:(long long)arg3 role:(long long)arg4 type:(long long)arg5 sourceIdentifier:(id)arg6 isManaged:(BOOL)arg7 isCurrentUser:(BOOL)arg8 contactPredicate:(id)arg9 ;
-(id)initWithEKParticipant:(id)arg1 ;
@end

