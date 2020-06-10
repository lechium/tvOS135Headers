/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface SFSiriDeviceSetupGreetingDetails : NSObject {

	NSArray* _introWordTimings;
	NSString* _dialogAText;
	NSArray* _dialogAWordTimings;
	NSArray* _dialogBPhraseTimings;
	NSArray* _dialogCPhraseTimings;

}

@property (nonatomic,copy) NSArray * introWordTimings;                  //@synthesize introWordTimings=_introWordTimings - In the implementation block
@property (nonatomic,copy) NSString * dialogAText;                      //@synthesize dialogAText=_dialogAText - In the implementation block
@property (nonatomic,copy) NSArray * dialogAWordTimings;                //@synthesize dialogAWordTimings=_dialogAWordTimings - In the implementation block
@property (nonatomic,copy) NSArray * dialogBPhraseTimings;              //@synthesize dialogBPhraseTimings=_dialogBPhraseTimings - In the implementation block
@property (nonatomic,copy) NSArray * dialogCPhraseTimings;              //@synthesize dialogCPhraseTimings=_dialogCPhraseTimings - In the implementation block
-(NSArray *)introWordTimings;
-(NSString *)dialogAText;
-(NSArray *)dialogAWordTimings;
-(NSArray *)dialogBPhraseTimings;
-(NSArray *)dialogCPhraseTimings;
-(void)setIntroWordTimings:(NSArray *)arg1 ;
-(void)setDialogAText:(NSString *)arg1 ;
-(void)setDialogAWordTimings:(NSArray *)arg1 ;
-(void)setDialogBPhraseTimings:(NSArray *)arg1 ;
-(void)setDialogCPhraseTimings:(NSArray *)arg1 ;
@end
