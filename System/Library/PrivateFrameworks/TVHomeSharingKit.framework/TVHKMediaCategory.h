/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSSet, NSDictionary;

@interface TVHKMediaCategory : NSObject {

	unsigned long long _type;
	NSString* _typeString;
	NSSet* _supportedMediaItemTypes;
	NSSet* _supportedMediaCollectionTypes;
	NSDictionary* _supportedChildMediaCollectionTypes;

}

@property (assign,nonatomic) unsigned long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * typeString;                                          //@synthesize typeString=_typeString - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaItemTypes;                                //@synthesize supportedMediaItemTypes=_supportedMediaItemTypes - In the implementation block
@property (nonatomic,copy) NSSet * supportedMediaCollectionTypes;                          //@synthesize supportedMediaCollectionTypes=_supportedMediaCollectionTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * supportedChildMediaCollectionTypes;              //@synthesize supportedChildMediaCollectionTypes=_supportedChildMediaCollectionTypes - In the implementation block
+(id)mediaCatgeoryForType:(unsigned long long)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
-(NSString *)typeString;
-(NSSet *)supportedMediaItemTypes;
-(id)_initWithType:(unsigned long long)arg1 typeString:(id)arg2 ;
-(void)setSupportedMediaItemTypes:(NSSet *)arg1 ;
-(void)setSupportedMediaCollectionTypes:(NSSet *)arg1 ;
-(void)setSupportedChildMediaCollectionTypes:(NSDictionary *)arg1 ;
-(NSSet *)supportedMediaCollectionTypes;
-(NSDictionary *)supportedChildMediaCollectionTypes;
@end

