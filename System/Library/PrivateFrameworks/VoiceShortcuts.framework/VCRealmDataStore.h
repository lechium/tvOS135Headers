/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFDatabase;

@interface VCRealmDataStore : NSObject {

	WFDatabase* _database;

}

@property (nonatomic,readonly) WFDatabase * database;              //@synthesize database=_database - In the implementation block
-(WFDatabase *)database;
-(id)initWithDatabase:(id)arg1 ;
-(void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getVoiceShortcutsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getInactiveAppsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 accessSpecifier:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)validatePhrases:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 accessSpecifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getSpeakableStringsWithAccessSpecifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPhraseUsable:(id)arg1 inDatabase:(id)arg2 error:(id*)arg3 ;
@end

