/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable <NSCopying> {

	NSMutableArray* _faceInstances;
	BOOL _completed;
	SCD_Struct_CP2 _has;

}

@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                              //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSMutableArray * faceInstances;              //@synthesize faceInstances=_faceInstances - In the implementation block
+(Class)faceInstancesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(void)clearFaceInstances;
-(void)addFaceInstances:(id)arg1 ;
-(unsigned long long)faceInstancesCount;
-(id)faceInstancesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)faceInstances;
-(void)setFaceInstances:(NSMutableArray *)arg1 ;
@end

