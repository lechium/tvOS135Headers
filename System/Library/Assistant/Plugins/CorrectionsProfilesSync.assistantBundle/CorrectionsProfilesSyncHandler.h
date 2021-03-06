/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class NSDictionary, NSMutableArray, CorrectionsProfilesLastState, NSString;

@interface CorrectionsProfilesSyncHandler : NSObject <AFSyncHandler> {

	NSDictionary* _correctionProfiles;
	NSMutableArray* _correctionProfileKeysToSync;
	NSMutableArray* _correctionProfileKeysToDelete;
	CorrectionsProfilesLastState* _lastState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadCorrectionProfiles;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
@end

