/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HFActionSetServiceSuggestionMetadata : NSObject {

	NSString* _serviceType;
	NSString* _primaryCharacteristicType;
	NSArray* _secondaryCharacteristicTypes;

}

@property (nonatomic,readonly) NSString * serviceType;                              //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,readonly) NSString * primaryCharacteristicType;                //@synthesize primaryCharacteristicType=_primaryCharacteristicType - In the implementation block
@property (nonatomic,readonly) NSArray * secondaryCharacteristicTypes;              //@synthesize secondaryCharacteristicTypes=_secondaryCharacteristicTypes - In the implementation block
+(id)metadataForServiceType:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)primaryCharacteristicType;
-(NSArray *)secondaryCharacteristicTypes;
-(id)initWithServiceType:(id)arg1 primaryCharacteristicType:(id)arg2 secondaryCharacteristicTypes:(id)arg3 ;
@end

