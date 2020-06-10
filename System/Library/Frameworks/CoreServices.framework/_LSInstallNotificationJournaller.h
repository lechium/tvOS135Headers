/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableArray;

@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding> {

	BOOL _preliminary;
	NSString* _primaryBundleID;
	NSMutableArray* _journalledNotifications;
	unsigned long long _operationType;
	double _timestamp;

}
+(BOOL)supportsSecureCoding;
+(BOOL)shouldJournalNotificationType:(int)arg1 ;
+(void)createInstallJournalDirectoryIfRequired;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 options:(id)arg4 ;
-(id)primaryBundleID;
-(unsigned long long)installOperation;
-(BOOL)applicableForCurrentDatabase;
-(id)journalledNotifications;
-(void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(BOOL)arg3 ;
-(BOOL)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(BOOL)arg2 ;
-(BOOL)shouldExpectEntityToExist;
-(BOOL)entityExists;
-(id)synthesizedPreliminaryJournalledNotifications;
-(id)journalURL;
-(void)_writeJournalUnconditionally;
-(void)removeJournalFile;
-(id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned long long)arg2 ;
-(void)writePreliminaryJournal;
-(void)writeFinalJournal;
-(void)setPrimaryBundleID:(id)arg1 ;
-(void)removeJournalAfterNotificationFence;
@end

