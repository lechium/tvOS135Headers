/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface RadioRecentStationsResponseStationGroup : NSObject {

	NSDictionary* _responseDictionary;

}

@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,copy,readonly) NSArray * stationDictionaries; 
-(BOOL)isActive;
-(NSString *)localizedTitle;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)stationDictionaries;
@end
