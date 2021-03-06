/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject {

	NSMutableArray* _splitterDeviceList;
	BOOL _splitterEnabled;

}

@property (assign,nonatomic) BOOL splitterEnabled;                                               //@synthesize splitterEnabled=_splitterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisableSpeakerVerificationInSplitterMode; 
-(id)description;
-(id)init;
-(unsigned long long)splitterState;
-(BOOL)_hasDeviceTemporaryPairedNotInContacts;
-(id)splitterDeviceList;
-(void)addDeviceIntoSplitterDeviceList:(id)arg1 ;
-(BOOL)shouldDisableSpeakerVerificationInSplitterMode;
-(BOOL)splitterEnabled;
-(void)setSplitterEnabled:(BOOL)arg1 ;
@end

