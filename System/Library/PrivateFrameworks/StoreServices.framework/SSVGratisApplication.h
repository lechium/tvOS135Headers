/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface SSVGratisApplication : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _externalVersionIdentifier;
	NSString* _itemIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                 //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionIdentifier;                     //@synthesize externalVersionIdentifier=_externalVersionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                                //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)itemIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSNumber *)externalVersionIdentifier;
-(void)setExternalVersionIdentifier:(NSNumber *)arg1 ;
@end

