/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:40 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/CKXPCSuitableString.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKRecordID : NSObject <CKXPCSuitableString, CKSQLiteItem, NSSecureCoding, NSCopying> {

	NSString* _recordName;
	CKRecordZoneID* _zoneID;

}

@property (nonatomic,retain) NSString * recordName;                 //@synthesize recordName=_recordName - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;               //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidRecordName:(id)arg1 outError:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRecordName:(id)arg1 zoneID:(id)arg2 ;
-(NSString *)recordName;
-(CKRecordZoneID *)zoneID;
-(void)setRecordName:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(id)ckShortDescription;
-(id)sqliteRepresentation;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(id)CKPropertiesDescriptionWithProperties:(id)arg1 ;
-(id)initWithRecordName:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)CKXPCSuitableString;
-(long long)compareToRecordID:(id)arg1 ;
@end

