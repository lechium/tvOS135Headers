/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:14 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface StockDataSource : NSObject {

	long long _identifier;
	NSString* _name;
	NSString* _sourceDescription;

}

@property (assign,nonatomic) long long identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * sourceDescription;                           //@synthesize sourceDescription=_sourceDescription - In the implementation block
@property (nonatomic,readonly) NSString * localizedSourceDescription; 
-(NSString *)name;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(long long)identifier;
-(void)setIdentifier:(long long)arg1 ;
-(NSString *)sourceDescription;
-(void)setSourceDescription:(NSString *)arg1 ;
-(id)archiveDictionary;
-(NSString *)localizedSourceDescription;
@end

