/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSData, NSString, GEORPUserCredentials;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {

	PBDataReader* _reader;
	NSData* _devicePushToken;
	NSString* _problemId;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _didOptIn;
	struct {
		unsigned has_didOptIn : 1;
		unsigned read_devicePushToken : 1;
		unsigned read_problemId : 1;
		unsigned read_userCredentials : 1;
		unsigned read_userEmail : 1;
		unsigned wrote_devicePushToken : 1;
		unsigned wrote_problemId : 1;
		unsigned wrote_userCredentials : 1;
		unsigned wrote_userEmail : 1;
		unsigned wrote_didOptIn : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId; 
@property (assign,nonatomic) BOOL hasDidOptIn; 
@property (assign,nonatomic) BOOL didOptIn; 
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials; 
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken; 
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(NSString *)problemId;
-(void)_readUserCredentials;
-(void)_readDevicePushToken;
-(void)_readUserEmail;
-(NSData *)devicePushToken;
-(NSString *)userEmail;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(void)setUserEmail:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(BOOL)hasDevicePushToken;
-(BOOL)hasUserEmail;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasProblemId;
-(void)_readProblemId;
-(BOOL)didOptIn;
-(void)setDidOptIn:(BOOL)arg1 ;
-(void)setHasDidOptIn:(BOOL)arg1 ;
-(BOOL)hasDidOptIn;
-(id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3 ;
@end

