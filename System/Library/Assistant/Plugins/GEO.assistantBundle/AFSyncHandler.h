/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Assistant/Plugins/GEO.assistantBundle/GEO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFSyncHandler <NSObject>
@optional
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 count:(long long)arg3 forKey:(id)arg4 beginInfo:(id)arg5 configuration:(id)arg6;
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2;
-(void)syncDidEnd;
-(id)syncSnapshotForKey:(id)arg1;
-(id)currentSyncSnapshot;
-(id)syncVerificationKeyForKey:(id)arg1;

@end

