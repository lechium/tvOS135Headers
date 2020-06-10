/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSSet;

@interface HFCharacteristicValueSet : NSObject {

	NSMutableSet* _allCharacteristics;
	NSMutableDictionary* _valuesByCharacteristicUUID;

}

@property (nonatomic,readonly) NSSet * allCharacteristics;              //@synthesize allCharacteristics=_allCharacteristics - In the implementation block
-(id)init;
-(NSSet *)allCharacteristics;
-(void)setValue:(id)arg1 forCharacteristic:(id)arg2 ;
-(id)valueForCharacteristic:(id)arg1 ;
-(void)removeValueForCharacteristic:(id)arg1 ;
@end

