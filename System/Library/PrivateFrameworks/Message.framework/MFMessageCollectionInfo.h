/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageInfoOrderedSet, MFMessageInfo, NSArray;

@interface MFMessageCollectionInfo : NSObject {

	MFMessageInfoOrderedSet* _messageInfoSet;
	long long _messageCollectionHash;
	MFMessageInfo* _stickyPlaceholder;

}

@property (nonatomic,retain) MFMessageInfo * stickyPlaceholder;                            //@synthesize stickyPlaceholder=_stickyPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) MFMessageInfo * firstMessage; 
@property (nonatomic,readonly) MFMessageInfo * lastMessage; 
@property (nonatomic,readonly) unsigned long long messagesCount; 
@property (nonatomic,readonly) unsigned long long messageCountWithDuplicates; 
@property (nonatomic,readonly) NSArray * uniqueMessageInfos; 
@property (nonatomic,readonly) NSArray * allMessageInfos; 
@property (nonatomic,readonly) long long messageCollectionHash;                            //@synthesize messageCollectionHash=_messageCollectionHash - In the implementation block
@property (nonatomic,copy) id duplicatePreferenceComparator; 
+(unsigned long long)stateForMessages:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEmpty;
-(unsigned long long)state;
-(unsigned long long)messagesCount;
-(id)duplicatePreferenceComparator;
-(unsigned long long)indexOfMessageInfo:(id)arg1 ;
-(id)messageInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removeMessageInfo:(id)arg1 ;
-(NSArray *)allMessageInfos;
-(id)duplicatesOfMessageInfo:(id)arg1 ;
-(unsigned long long)addMessageInfo:(id)arg1 ;
-(unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg1 ;
-(void)setDuplicatePreferenceComparator:(id)arg1 ;
-(NSArray *)uniqueMessageInfos;
-(MFMessageInfo *)firstMessage;
-(MFMessageInfo *)lastMessage;
-(long long)messageCollectionHash;
-(void)setStickyPlaceholder:(MFMessageInfo *)arg1 ;
-(MFMessageInfo *)stickyPlaceholder;
-(id)initWithHash:(long long)arg1 comparator:(/*^block*/id)arg2 ;
-(unsigned long long)messageCountWithDuplicates;
-(id)visibleMessageInfo;
-(void)mergeWithCollection:(id)arg1 ;
@end

