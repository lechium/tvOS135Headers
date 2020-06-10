/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLEMIDIAccessor : NSObject
+(id)uuidForMIDIDevice:(unsigned)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 ;
+(BOOL)deviceIsLocalPeripheral:(unsigned)arg1 ;
+(BOOL)deviceIsRemotePeripheral:(unsigned)arg1 ;
+(unsigned)localPeripheral;
+(id)nameForMIDIDevice:(unsigned)arg1 ;
+(unsigned)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(BOOL)arg2 isRemotePeripheral:(BOOL)arg3 ;
+(BOOL)deviceIsOnline:(unsigned)arg1 ;
+(unsigned)nullDevice;
+(id)localPeripheralName;
+(BOOL)deviceIsNullDevice:(unsigned)arg1 ;
+(BOOL)uuidIsForgettable:(id)arg1 ;
+(unsigned short)timeStampOffset:(unsigned long long)arg1 ;
+(unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(BOOL)arg3 ;
+(unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
+(void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char*)arg2 timeStampByte:(char*)arg3 ;
+(void)logEvent:(char*)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char*)arg4 ;
@end

