/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface PDCloudStoreCounterpartRecordParser : NSObject {

	NSMutableDictionary* _identifierToParserZones;
	NSArray* _validRecordTypes;
	NSArray* _recordNamePrefixes;

}
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)_isValidRecordTypeForRecord:(id)arg1 ;
-(id)_parseIdentifierForRecord:(id)arg1 ;
-(id)allRecordsFromPush:(BOOL)arg1 ;
-(id)allRecordsWithIdentifier:(id)arg1 fromPush:(BOOL)arg2 ;
-(id)initWithValidRecordTypes:(id)arg1 recordNamePrefixes:(id)arg2 ;
-(void)addRecords:(id)arg1 fromPush:(BOOL)arg2 ;
-(void)removeIdentifiers:(id)arg1 ;
@end

