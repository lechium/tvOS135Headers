/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreCECBus.h>

@interface CoreCECBusClient : CoreCECBus
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)addDeviceWithAttributes:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOSDName:(id)arg1 error:(id*)arg2 ;
-(BOOL)setTvLanguageCode:(id)arg1 error:(id*)arg2 ;
@end

