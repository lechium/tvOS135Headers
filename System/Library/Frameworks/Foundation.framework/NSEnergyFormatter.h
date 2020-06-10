/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@class NSString, NSNumberFormatter;

@interface NSEnergyFormatter : NSFormatter <NSObservable, NSObserver> {

	void* _formatter;
	BOOL _isForFoodEnergyUse;
	void** _reserved[2];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSNumberFormatter * numberFormatter; 
@property (assign) long long unitStyle; 
@property (getter=isForFoodEnergyUse) BOOL forFoodEnergyUse;              //@synthesize isForFoodEnergyUse=_isForFoodEnergyUse - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(void)setUnitStyle:(long long)arg1 ;
-(long long)unitStyle;
-(id)unitStringFromValue:(double)arg1 unit:(long long)arg2 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)stringFromValue:(double)arg1 unit:(long long)arg2 ;
-(BOOL)isForFoodEnergyUse;
-(long long)targetUnitFromJoules:(double)arg1 ;
-(id)stringFromJoules:(double)arg1 ;
-(id)unitStringFromJoules:(double)arg1 usedUnit:(long long*)arg2 ;
-(void)setForFoodEnergyUse:(BOOL)arg1 ;
@end

