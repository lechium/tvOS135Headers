/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
#import <libobjc.A.dylib/SBKKeyValuePayloadPair.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying> {

	BOOL _hasBeenPlayed;
	NSString* _itemIdentifier;
	double _timestamp;
	double _bookmarkTime;
	unsigned long long _playCount;

}

@property (copy) NSString * itemIdentifier;                         //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double bookmarkTime;                             //@synthesize bookmarkTime=_bookmarkTime - In the implementation block
@property (assign) BOOL hasBeenPlayed;                              //@synthesize hasBeenPlayed=_hasBeenPlayed - In the implementation block
@property (assign) unsigned long long playCount;                    //@synthesize playCount=_playCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(BOOL)arg3 ;
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
+(id)_testableMetadataItem_1;
+(id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6 ;
+(id)metadataWithValuesFromDataSourceItem:(id)arg1 ;
+(id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(BOOL)arg4 playCount:(unsigned long long)arg5 ;
+(id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)playCount;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(double)bookmarkTime;
-(BOOL)hasBeenPlayed;
-(void)setHasBeenPlayed:(BOOL)arg1 ;
-(void)setBookmarkTime:(double)arg1 ;
-(id)kvsKey;
-(id)kvsPayload;
-(id)kvsValueDescription;
-(id)initAsTestableItem;
-(id)keyValueStorePayload;
@end

