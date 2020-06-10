/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSDate, NSData;

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage> {

	NSString* _identifier;
	NSString* _account;
	NSDate* _date;
	NSData* _serverChangeTokenData;
	NSData* _lastOrderingData;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSDate * date;                             //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSData * serverChangeTokenData;              //@synthesize serverChangeTokenData=_serverChangeTokenData - In the implementation block
@property (nonatomic,copy) NSData * lastOrderingData;                   //@synthesize lastOrderingData=_lastOrderingData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)className;
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)syncTokenInRealm:(id)arg1 ;
+(void)setSyncToken:(id)arg1 inRealm:(id)arg2 ;
-(NSDate *)date;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)descriptor;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)account;
-(void)setAccount:(NSString *)arg1 ;
-(void)setServerChangeTokenData:(NSData *)arg1 ;
-(NSData *)serverChangeTokenData;
-(NSData *)lastOrderingData;
-(void)setLastOrderingData:(NSData *)arg1 ;
@end

