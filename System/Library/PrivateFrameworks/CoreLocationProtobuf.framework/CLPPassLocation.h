/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPLocation, NSString;

@interface CLPPassLocation : PBCodable <NSCopying> {

	double _age;
	NSMutableArray* _associatedStoreIds;
	CLPLocation* _location;
	int _passSource;
	NSString* _passTypeId;
	int _serverHash;
	SCD_Struct_CL9 _has;

}

@property (nonatomic,retain) NSString * passTypeId;                            //@synthesize passTypeId=_passTypeId - In the implementation block
@property (nonatomic,retain) NSMutableArray * associatedStoreIds;              //@synthesize associatedStoreIds=_associatedStoreIds - In the implementation block
@property (assign,nonatomic) int passSource;                                   //@synthesize passSource=_passSource - In the implementation block
@property (assign,nonatomic) BOOL hasAge; 
@property (assign,nonatomic) double age;                                       //@synthesize age=_age - In the implementation block
@property (nonatomic,retain) CLPLocation * location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasServerHash; 
@property (assign,nonatomic) int serverHash;                                   //@synthesize serverHash=_serverHash - In the implementation block
+(Class)associatedStoreIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(CLPLocation *)location;
-(double)age;
-(void)setLocation:(CLPLocation *)arg1 ;
-(void)setAge:(double)arg1 ;
-(void)setHasAge:(BOOL)arg1 ;
-(BOOL)hasAge;
-(void)setServerHash:(int)arg1 ;
-(void)setHasServerHash:(BOOL)arg1 ;
-(BOOL)hasServerHash;
-(int)serverHash;
-(void)addAssociatedStoreId:(id)arg1 ;
-(void)setPassTypeId:(NSString *)arg1 ;
-(unsigned long long)associatedStoreIdsCount;
-(void)clearAssociatedStoreIds;
-(id)associatedStoreIdAtIndex:(unsigned long long)arg1 ;
-(NSString *)passTypeId;
-(NSMutableArray *)associatedStoreIds;
-(void)setAssociatedStoreIds:(NSMutableArray *)arg1 ;
-(int)passSource;
-(void)setPassSource:(int)arg1 ;
@end

