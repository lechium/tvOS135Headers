/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFControlItem.h>

@class NSString;

@interface HFDictionaryValueControlItem : HFControlItem {

	NSString* _characteristicType;

}

@property (nonatomic,copy,readonly) NSString * characteristicType;              //@synthesize characteristicType=_characteristicType - In the implementation block
+(Class)valueClass;
+(id)defaultMainTextColorForCharacteristicType:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)characteristicType;
-(id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 displayResults:(id)arg3 ;
-(id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3 ;
-(BOOL)canCopyWithCharacteristicOptions:(id)arg1 ;
-(id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2 ;
-(id)valueForCharacteristicValues:(id)arg1 ;
-(id)characteristicValuesForValue:(id)arg1 ;
-(id)resultsForBatchReadResponse:(id)arg1 ;
-(void)getStatus:(out id*)arg1 mainTextColor:(out id*)arg2 supplementaryDescription:(out id*)arg3 withBatchReadResponse:(id)arg4 ;
@end

