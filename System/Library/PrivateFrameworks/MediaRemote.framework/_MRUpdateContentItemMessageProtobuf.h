/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying> {

	NSMutableArray* _contentItems;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;

}

@property (nonatomic,retain) NSMutableArray * contentItems;                             //@synthesize contentItems=_contentItems - In the implementation block
@property (nonatomic,readonly) BOOL hasPlayerPath; 
@property (nonatomic,retain) _MRNowPlayingPlayerPathProtobuf * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
+(Class)contentItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContentItems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentItems;
-(void)setPlayerPath:(_MRNowPlayingPlayerPathProtobuf *)arg1 ;
-(BOOL)hasPlayerPath;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(void)addContentItems:(id)arg1 ;
-(unsigned long long)contentItemsCount;
-(void)clearContentItems;
-(id)contentItemsAtIndex:(unsigned long long)arg1 ;
@end

