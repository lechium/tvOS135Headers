/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PGManager, NSSet, NSMutableDictionary;

@interface PGMessageProfile : NSObject <NSSecureCoding> {

	PGManager* _manager;
	NSSet* _personalChatIdentifiers;
	NSSet* _groupChatIdentifiers;
	NSMutableDictionary* _cnIdentifiersByChatIdentifier;
	NSMutableDictionary* _personalChatIdentifierByContactIdentifier;
	NSMutableDictionary* _numberOfMessagesPerChatIdentifier;
	NSMutableDictionary* _addressMentionsByContactIdentifier;
	NSMutableDictionary* _numberOfLoveEmojisByPersonLocalIdentifier;

}

@property (nonatomic,retain) PGManager * manager;                                                            //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSSet * personalChatIdentifiers;                                              //@synthesize personalChatIdentifiers=_personalChatIdentifiers - In the implementation block
@property (nonatomic,readonly) NSSet * groupChatIdentifiers;                                                 //@synthesize groupChatIdentifiers=_groupChatIdentifiers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cnIdentifiersByChatIdentifier;                          //@synthesize cnIdentifiersByChatIdentifier=_cnIdentifiersByChatIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * personalChatIdentifierByContactIdentifier;              //@synthesize personalChatIdentifierByContactIdentifier=_personalChatIdentifierByContactIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * numberOfMessagesPerChatIdentifier;                        //@synthesize numberOfMessagesPerChatIdentifier=_numberOfMessagesPerChatIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * addressMentionsByContactIdentifier;                       //@synthesize addressMentionsByContactIdentifier=_addressMentionsByContactIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * numberOfLoveEmojisByPersonLocalIdentifier;              //@synthesize numberOfLoveEmojisByPersonLocalIdentifier=_numberOfLoveEmojisByPersonLocalIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)persistedMessageProfileWithManager:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionary;
-(PGManager *)manager;
-(void)setManager:(PGManager *)arg1 ;
-(id)initWithGroupChatIdentifiers:(id)arg1 personalChatIdentifiers:(id)arg2 personsByChatIdentifier:(id)arg3 manager:(id)arg4 ;
-(void)enumeratePersonLocalIdentifiersExchangingLoveEmojisWithProgressBlock:(/*^block*/id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateMessageGroupsWithProgressBlock:(/*^block*/id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateContactIdentifiersAndMentionedAddressesUsingBlock:(/*^block*/id)arg1 ;
-(id)numberOfMessagesByContactIdentifier;
-(unsigned long long)numberOfMessageGroupChats;
-(void)registerMessageForChatIdentifier:(id)arg1 ;
-(void)registerLoveEmoji:(unsigned long long)arg1 forPersonLocalIdentifier:(id)arg2 ;
-(void)registerMentionedLocation:(id)arg1 contactIdentifier:(id)arg2 onDate:(id)arg3 ;
-(BOOL)persistOnDisk;
-(NSSet *)personalChatIdentifiers;
-(NSSet *)groupChatIdentifiers;
-(NSMutableDictionary *)cnIdentifiersByChatIdentifier;
-(NSMutableDictionary *)personalChatIdentifierByContactIdentifier;
-(NSMutableDictionary *)numberOfMessagesPerChatIdentifier;
-(void)setNumberOfMessagesPerChatIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)addressMentionsByContactIdentifier;
-(void)setAddressMentionsByContactIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)numberOfLoveEmojisByPersonLocalIdentifier;
@end

