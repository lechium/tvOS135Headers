/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLSystemSound, NSURL;

@interface TLAlertTone : NSObject {

	unsigned _actualSoundID;
	unsigned _previewSoundID;
	TLSystemSound* _actualSound;
	TLSystemSound* _previewSound;
	BOOL _requiresLongFormPlayback;
	NSURL* _soundFileURL;

}

@property (nonatomic,readonly) NSURL * soundFileURL;                       //@synthesize soundFileURL=_soundFileURL - In the implementation block
@property (nonatomic,readonly) TLSystemSound * actualSound; 
@property (nonatomic,readonly) TLSystemSound * previewSound; 
@property (nonatomic,readonly) BOOL requiresLongFormPlayback;              //@synthesize requiresLongFormPlayback=_requiresLongFormPlayback - In the implementation block
-(id)initWithSoundFileURL:(id)arg1 actualSoundID:(unsigned)arg2 previewSoundID:(unsigned)arg3 requiresLongFormPlayback:(BOOL)arg4 ;
-(TLSystemSound *)actualSound;
-(NSURL *)soundFileURL;
-(TLSystemSound *)previewSound;
-(BOOL)requiresLongFormPlayback;
@end
