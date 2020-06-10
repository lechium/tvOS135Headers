/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/WFRemoteFile.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSNumber, NSDate, NSDictionary;

@interface WFDropboxMetadata : MTLModel <WFRemoteFile, WFNaming, MTLJSONSerializing> {

	NSString* _name;
	NSString* _path;
	NSString* _identifier;
	NSString* _revision;
	NSString* _contentHash;
	NSNumber* _fileSize;
	NSDate* _clientModifiedDate;
	NSDate* _serverModifiedDate;
	NSString* _itemKind;

}

@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * itemKind;                                //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * path;                             //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * revision;                         //@synthesize revision=_revision - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentHash;                      //@synthesize contentHash=_contentHash - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) NSDate * clientModifiedDate;                      //@synthesize clientModifiedDate=_clientModifiedDate - In the implementation block
@property (nonatomic,readonly) NSDate * serverModifiedDate;                      //@synthesize serverModifiedDate=_serverModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
+(id)clientModifiedDateJSONTransformer;
+(id)serverModifiedDateJSONTransformer;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(NSString *)path;
-(NSNumber *)fileSize;
-(BOOL)isDirectory;
-(NSString *)itemKind;
-(NSString *)revision;
-(void)setItemKind:(NSString *)arg1 ;
-(NSString *)wfName;
-(BOOL)wfIsDirectory;
-(id)wfPath;
-(id)wfFileSize;
-(id)wfLastModifiedDate;
-(id)wfFileType;
-(BOOL)wfIsEqualToFile:(id)arg1 ;
-(NSString *)contentHash;
-(NSDate *)clientModifiedDate;
-(NSDate *)serverModifiedDate;
@end
