/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSSearchableIndex;

@interface IMINInteractionUtilities : NSObject {

	CSSearchableIndex* _searchableIndex;

}

@property (nonatomic,retain) CSSearchableIndex * searchableIndex;              //@synthesize searchableIndex=_searchableIndex - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(CSSearchableIndex *)searchableIndex;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
-(void)deleteInteractionsWithChatGUIDs:(id)arg1 ;
-(void)deleteInteractionsWithMessageGUIDs:(id)arg1 ;
@end

