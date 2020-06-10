/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOperationQueue, VSPersistentStorage, NSUndoManager;

@interface VSAccountSerializationCenter : NSObject {

	NSOperationQueue* _serializationQueue;
	VSPersistentStorage* _storage;

}

@property (nonatomic,retain) NSOperationQueue * serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
@property (nonatomic,retain) VSPersistentStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)defaultSerializationCenter;
-(id)init;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSOperationQueue *)serializationQueue;
-(id)exportDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setSerializationQueue:(NSOperationQueue *)arg1 ;
@end

