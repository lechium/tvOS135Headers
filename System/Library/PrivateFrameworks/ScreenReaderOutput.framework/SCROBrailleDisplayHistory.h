/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:53 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long long _currentIndex;
	long long _unreadCount;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(BOOL)_moveIndexBy:(long long)arg1 ;
-(void)addString:(id)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(BOOL)hasUnread;
-(id)currentString;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(BOOL)isOnMostRecent;
-(void)moveToMostRecent;
@end

