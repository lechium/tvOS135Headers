/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying> {

	NSMutableArray* _predicates;

}

@property (nonatomic,retain) NSMutableArray * predicates;              //@synthesize predicates=_predicates - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(void)setPredicates:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)predicates;
-(void)clearPredicates;
-(void)addPredicates:(id)arg1 ;
-(unsigned long long)predicatesCount;
-(id)predicatesAtIndex:(unsigned long long)arg1 ;
@end

