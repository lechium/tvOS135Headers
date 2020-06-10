/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVAudioUnit.h>

@class NSURL;

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic,readonly) NSURL * dspGraphURL; 
@property (nonatomic,readonly) NSURL * auProcessingStripURL; 
-(id)init;
-(BOOL)loadAudioDSPManager;
-(BOOL)loadDSPGraphAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id*)arg2 ;
-(NSURL *)dspGraphURL;
-(NSURL *)auProcessingStripURL;
@end
