/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSObject;

@interface EntityMapCacheEntry : NSObject {

	NSDate* _expiryTime;
	NSObject* _entityName;

}

@property (retain) NSDate * expiryTime;                //@synthesize expiryTime=_expiryTime - In the implementation block
@property (retain) NSObject * entityName;              //@synthesize entityName=_entityName - In the implementation block
-(id)description;
-(NSObject *)entityName;
-(void)setEntityName:(NSObject *)arg1 ;
-(NSDate *)expiryTime;
-(void)setExpiryTime:(NSDate *)arg1 ;
@end
