/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {

	NSData* _data;
	Class _messageClass;
	NSString* _storagePath;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)message;
-(id)storePath;
-(id)account;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(id)storagePath;
-(void)setStoragePath:(id)arg1 ;
-(void)writeUpdatedMessageDataToDisk;
-(void)setMessageClass:(Class)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)mailboxUid;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
@end

