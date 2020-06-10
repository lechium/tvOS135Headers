/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString, NSDate;


@protocol IDSSocketPairMessage
@property (assign,nonatomic) unsigned sequenceNumber; 
@property (assign,nonatomic) unsigned short streamID; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) BOOL wantsAppAck; 
@property (nonatomic,readonly) BOOL expectsPeerResponse; 
@property (nonatomic,readonly) NSString * peerResponseIdentifier; 
@property (nonatomic,readonly) NSString * messageUUID; 
@property (nonatomic,retain) NSDate * expiryDate; 
@optional
-(NSData *)data;
-(unsigned)sequenceNumber;
-(void)setSequenceNumber:(unsigned)arg1;
-(void)setExpiryDate:(id)arg1;
-(NSDate *)expiryDate;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1;
-(BOOL)expectsPeerResponse;
-(BOOL)wantsAppAck;
-(NSString *)peerResponseIdentifier;
-(NSString *)messageUUID;

@end

