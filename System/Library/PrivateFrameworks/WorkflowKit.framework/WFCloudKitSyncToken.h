/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFRecord.h>

@class NSString, NSDate, NSData, CKServerChangeToken, NSOrderedSet;

@interface WFCloudKitSyncToken : WFRecord {

	NSString* _identifier;
	NSString* _account;
	NSDate* _date;
	NSData* _serverChangeTokenData;
	NSData* _lastOrderingData;

}

@property (nonatomic,copy) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * account;                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSData * serverChangeTokenData;                         //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingData;                              //@synthesize lastOrderingData=_lastOrderingData - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverChangeToken; 
@property (nonatomic,copy) NSOrderedSet * lastOrdering; 
+(id)defaultPropertyValues;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(NSData *)serverChangeTokenData;
-(void)setLastOrdering:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)lastOrdering;
-(NSData *)lastOrderingData;
-(void)setLastOrderingData:(NSData *)arg1 ;
@end

