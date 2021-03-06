/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:29 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMMeCardSharingStateController : NSObject

@property (assign,nonatomic) BOOL sharingEnabled; 
@property (assign,nonatomic) unsigned long long sharingAudience; 
@property (assign,nonatomic) unsigned long long nameFormat; 
@property (assign,nonatomic) BOOL nameForkedFromMeCard; 
@property (assign,nonatomic) BOOL imageForkedFromMeCard; 
+(id)sharedInstance;
-(id)init;
-(BOOL)sharingEnabled;
-(void)_migrateMeCardDomains;
-(void)_syncPreferenceDidChange;
-(void)setSharingAudience:(unsigned long long)arg1 ;
-(void)_incrementSharingVersion;
-(void)setSharingEnabled:(BOOL)arg1 ;
-(unsigned long long)sharingAudience;
-(unsigned long long)nameFormat;
-(void)setNameFormat:(unsigned long long)arg1 ;
-(void)postNameFormatChangedNotification;
-(BOOL)nameForkedFromMeCard;
-(void)setNameForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)imageForkedFromMeCard;
-(void)setImageForkedFromMeCard:(BOOL)arg1 ;
-(BOOL)wasSharingEverEnabled;
@end

