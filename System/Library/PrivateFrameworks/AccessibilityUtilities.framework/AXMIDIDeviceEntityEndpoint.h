/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:31 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMIDIDeviceEntity, NSString, NSNumber;

@interface AXMIDIDeviceEntityEndpoint : NSObject {

	unsigned _midiEndpoint;
	AXMIDIDeviceEntity* _entity;

}

@property (assign,nonatomic) unsigned midiEndpoint;                           //@synthesize midiEndpoint=_midiEndpoint - In the implementation block
@property (assign,nonatomic,__weak) AXMIDIDeviceEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * manufacturer; 
@property (nonatomic,readonly) NSString * model; 
@property (nonatomic,readonly) NSNumber * uniqueID; 
@property (nonatomic,readonly) NSNumber * receiveChannels; 
@property (nonatomic,readonly) NSNumber * transmitChannels; 
@property (nonatomic,readonly) NSNumber * isEmbedded; 
@property (nonatomic,readonly) NSNumber * isBroadcast; 
@property (nonatomic,readonly) NSNumber * isOffline; 
@property (nonatomic,readonly) NSNumber * isPrivate; 
@property (nonatomic,readonly) NSString * driverName; 
-(NSString *)name;
-(id)description;
-(NSNumber *)uniqueID;
-(AXMIDIDeviceEntity *)entity;
-(NSString *)model;
-(void)setEntity:(AXMIDIDeviceEntity *)arg1 ;
-(NSString *)manufacturer;
-(NSNumber *)isPrivate;
-(NSNumber *)isOffline;
-(id)initWithMIDIEndpoint:(unsigned)arg1 entity:(id)arg2 ;
-(NSNumber *)receiveChannels;
-(NSNumber *)transmitChannels;
-(NSNumber *)isEmbedded;
-(NSNumber *)isBroadcast;
-(NSString *)driverName;
-(unsigned)midiEndpoint;
-(void)setMidiEndpoint:(unsigned)arg1 ;
@end

