/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSyncServiceDelegate <NSObject>
@required
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
-(BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
-(id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
-(id)syncService:(id)arg1 sectionIdentifierForUniversalSectionIdentifier:(id)arg2;

@end
