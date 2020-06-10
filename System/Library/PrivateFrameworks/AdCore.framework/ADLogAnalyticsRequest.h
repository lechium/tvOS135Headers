/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface ADLogAnalyticsRequest : PBRequest <NSCopying> {

	NSString* _bundleID;
	NSData* _contentiAdID;
	NSData* _dPID;
	NSMutableArray* _events;
	NSData* _iAdID;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                       //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                  //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentiAdID; 
@property (nonatomic,retain) NSData * contentiAdID;                //@synthesize contentiAdID=_contentiAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                        //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
+(id)options;
+(Class)eventsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(NSMutableArray *)events;
-(void)addEvents:(id)arg1 ;
-(unsigned long long)eventsCount;
-(void)clearEvents;
-(id)eventsAtIndex:(unsigned long long)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
@end
