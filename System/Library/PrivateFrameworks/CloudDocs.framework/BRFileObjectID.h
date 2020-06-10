/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class NSString, NSNumber;

@interface BRFileObjectID : NSObject <NSSecureCoding, NSCopying, PQLValuable>

@property (nonatomic,readonly) NSString * asString; 
@property (nonatomic,readonly) BOOL isFolderOrAliasID; 
@property (nonatomic,readonly) BOOL isDocumentID; 
@property (nonatomic,readonly) NSNumber * folderID; 
@property (nonatomic,readonly) NSNumber * documentID; 
@property (nonatomic,readonly) unsigned long long rawID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)fileObjectIDForURL:(id)arg1 allocateDocID:(BOOL)arg2 error:(id*)arg3 ;
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
+(id)fileObjectIDWithString:(id)arg1 ;
+(id)newFromSqliteStatement:(sqlite3_stmtRef)arg1 atIndex:(int)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)folderID;
-(NSNumber *)documentID;
-(BOOL)isDocumentID;
-(unsigned long long)rawID;
-(BOOL)isEqualToFileObjectID:(id)arg1 ;
-(BOOL)isFolderOrAliasID;
-(NSString *)asString;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
@end

