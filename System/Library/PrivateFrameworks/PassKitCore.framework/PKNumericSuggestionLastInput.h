/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDecimalNumber;

@interface PKNumericSuggestionLastInput : NSObject {

	NSString* _serialNumber;
	NSMutableDictionary* _passLastInputDictionary;

}

@property (nonatomic,copy) NSDecimalNumber * value; 
@property (assign,nonatomic) BOOL wentToMax; 
-(id)init;
-(NSDecimalNumber *)value;
-(void)setValue:(NSDecimalNumber *)arg1 ;
-(void)save;
-(id)initWithPassSerialNumber:(id)arg1 ;
-(BOOL)wentToMax;
-(void)setWentToMax:(BOOL)arg1 ;
@end

