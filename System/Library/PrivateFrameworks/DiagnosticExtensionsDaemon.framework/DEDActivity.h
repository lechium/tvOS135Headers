/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity;
@class NSObject;

@interface DEDActivity : NSObject {

	NSObject*<OS_os_activity> _cleanup;

}

@property (retain) NSObject*<OS_os_activity> cleanup;              //@synthesize cleanup=_cleanup - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_os_activity>)cleanup;
-(id)currentCleanupActivity;
-(void)setCleanup:(NSObject*<OS_os_activity>)arg1 ;
-(id)newCleanupActivity;
@end
