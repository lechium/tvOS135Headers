/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CBService.h>

@class NSNumber, NSArray;

@interface CBMutableService : CBService {

	NSNumber* _ID;

}

@property (retain) NSNumber * ID;                           //@synthesize ID=_ID - In the implementation block
@property (retain) NSArray * includedServices; 
@property (retain) NSArray * characteristics; 
-(id)description;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)handlePowerNotOn;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
-(id)initWithType:(id)arg1 primary:(BOOL)arg2 ;
@end

