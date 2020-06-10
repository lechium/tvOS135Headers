/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class CPExclusiveLock;

@interface ACAccountMigrationLock : NSObject <NSLocking> {

	CPExclusiveLock* _underlyingLock;

}
+(id)_currentSystemVersion;
+(void)writeMigrationVersionPref;
+(BOOL)isMigrationFinished;
+(void)signalMigrationFinished;
-(id)init;
-(void)lock;
-(void)unlock;
@end
