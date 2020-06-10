/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXMIDIDevice, NSMutableSet, NSNumber, NSString;

@interface AXMIDIDeviceEntity : NSObject {

	unsigned _midiEntity;
	AXMIDIDevice* _device;
	NSMutableSet* _sources;
	NSMutableSet* _destinations;
	NSNumber* _supportsMMC;

}

@property (assign,nonatomic) unsigned midiEntity;                           //@synthesize midiEntity=_midiEntity - In the implementation block
@property (nonatomic,retain) NSMutableSet * sources;                        //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableSet * destinations;                   //@synthesize destinations=_destinations - In the implementation block
@property (assign,nonatomic,__weak) AXMIDIDevice * device;                  //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * uniqueID; 
@property (nonatomic,readonly) NSNumber * deviceID; 
@property (nonatomic,readonly) NSNumber * isEmbedded; 
@property (nonatomic,readonly) NSNumber * isBroadcast; 
@property (nonatomic,readonly) NSNumber * isOffline; 
@property (nonatomic,readonly) NSNumber * isPrivate; 
@property (nonatomic,readonly) NSString * driverName; 
@property (nonatomic,readonly) NSNumber * supportsGeneralMIDI; 
@property (nonatomic,readonly) NSNumber * supportsMMC;                      //@synthesize supportsMMC=_supportsMMC - In the implementation block
-(NSString *)name;
-(id)description;
-(NSNumber *)uniqueID;
-(AXMIDIDevice *)device;
-(NSNumber *)deviceID;
-(void)setDevice:(AXMIDIDevice *)arg1 ;
-(NSMutableSet *)sources;
-(void)setSources:(NSMutableSet *)arg1 ;
-(NSMutableSet *)destinations;
-(void)setDestinations:(NSMutableSet *)arg1 ;
-(NSNumber *)isPrivate;
-(NSNumber *)isOffline;
-(NSNumber *)isEmbedded;
-(NSNumber *)isBroadcast;
-(NSString *)driverName;
-(NSNumber *)supportsGeneralMIDI;
-(NSNumber *)supportsMMC;
-(void)addMidiSource:(unsigned)arg1 ;
-(void)removeMidiSource:(unsigned)arg1 ;
-(void)addMidiDestination:(unsigned)arg1 ;
-(void)removeMidiDestination:(unsigned)arg1 ;
-(unsigned)midiEntity;
-(id)initWithMIDIEntity:(unsigned)arg1 device:(id)arg2 ;
-(void)resetAndDetectEndpoints;
-(id)supportsGeneralMMC;
-(id)_sourceForMidiEndpoint:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(id)_destinationForMidiEndpoint:(unsigned)arg1 addIfNeeded:(BOOL)arg2 ;
-(void)setMidiEntity:(unsigned)arg1 ;
@end

