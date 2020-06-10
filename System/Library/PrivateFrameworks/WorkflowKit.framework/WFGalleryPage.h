/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFCloudKitItem.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CKRecordID, NSString, NSNumber, NSArray;

@interface WFGalleryPage : NSObject <WFCloudKitItem, NSMutableCopying> {

	CKRecordID* _identifier;
	NSString* _name;
	NSNumber* _minVersion;
	NSNumber* _isRoot;
	NSArray* _banners;
	NSArray* _collections;
	NSArray* _routines;
	NSArray* _donations;
	NSArray* _donationsGroupedByApp;
	NSString* _language;
	CKRecordID* _base;
	NSString* _persistentIdentifier;

}

@property (nonatomic,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSNumber * minVersion;                        //@synthesize minVersion=_minVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * isRoot;                            //@synthesize isRoot=_isRoot - In the implementation block
@property (nonatomic,readonly) NSArray * banners;                            //@synthesize banners=_banners - In the implementation block
@property (nonatomic,readonly) NSArray * collections;                        //@synthesize collections=_collections - In the implementation block
@property (nonatomic,readonly) NSArray * routines;                           //@synthesize routines=_routines - In the implementation block
@property (nonatomic,readonly) NSArray * donations;                          //@synthesize donations=_donations - In the implementation block
@property (nonatomic,readonly) NSArray * donationsGroupedByApp;              //@synthesize donationsGroupedByApp=_donationsGroupedByApp - In the implementation block
@property (nonatomic,readonly) NSString * language;                          //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) CKRecordID * base;                            //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CKRecordID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
+(id)properties;
+(id)recordType;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CKRecordID *)identifier;
-(NSString *)persistentIdentifier;
-(NSNumber *)isRoot;
-(NSString *)language;
-(NSArray *)collections;
-(CKRecordID *)base;
-(NSNumber *)minVersion;
-(NSArray *)banners;
-(unsigned long long)referenceActionForKey:(id)arg1 ;
-(id)subPageMatchingName:(id)arg1 ;
-(id)subPageWithIdentifier:(id)arg1 ;
-(NSArray *)routines;
-(NSArray *)donations;
-(NSArray *)donationsGroupedByApp;
@end

