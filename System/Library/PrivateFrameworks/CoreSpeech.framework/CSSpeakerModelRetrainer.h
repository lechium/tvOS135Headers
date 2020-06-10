/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSSpeakerModelRetrainer : NSObject
+(void)_createBackupSpeakerModel:(id)arg1 backupSpeakerModelPath:(id)arg2 ;
+(unsigned long long)_revertBackupSpeakerModel:(id)arg1 backupSpeakerModelPath:(id)arg2 ;
+(void)_clearModelFile:(id)arg1 ;
+(unsigned long long)retrainSpeakerModel:(id)arg1 forVoiceTriggerAsset:(id)arg2 ;
@end
