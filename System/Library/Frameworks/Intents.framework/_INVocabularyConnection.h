/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:22:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface _INVocabularyConnection : NSObject {

	NSXPCConnection* _connection;
	id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)_connection;
-(id)_syncService;
-(void)_clearConnection;
-(id)settingsService;
@end

