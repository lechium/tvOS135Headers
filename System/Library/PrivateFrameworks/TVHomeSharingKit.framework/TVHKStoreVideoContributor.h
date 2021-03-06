/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TVHKStoreVideoContributor : NSObject {

	NSString* _name;
	unsigned long long _storeID;
	NSString* _templateImageURLString;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long storeID;                   //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy) NSString * templateImageURLString;              //@synthesize templateImageURLString=_templateImageURLString - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)storeID;
-(void)setStoreID:(unsigned long long)arg1 ;
-(NSString *)templateImageURLString;
-(id)_initWithName:(id)arg1 storeID:(unsigned long long)arg2 templateImageURLString:(id)arg3 ;
-(void)setTemplateImageURLString:(NSString *)arg1 ;
@end

