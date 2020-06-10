/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATMessageLink;

@interface ATRemoteFileManager : NSObject {

	ATMessageLink* _messageLink;

}

@property (nonatomic,retain) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
-(BOOL)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(ATMessageLink *)messageLink;
-(id)initWithMessageLink:(id)arg1 ;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
-(id)_sendRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)uploadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)_readStreamData:(id)arg1 error:(id*)arg2 ;
-(BOOL)downloadFileAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)moveItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)removeItemsAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(void)progressUpdatedWithPercentage:(double)arg1 size:(unsigned long long)arg2 ;
-(BOOL)createDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)contentsOfDirectoryAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)usageOfDirectoryAtPath:(id)arg1 count:(unsigned long long*)arg2 size:(unsigned long long*)arg3 options:(id)arg4 error:(id*)arg5 ;
-(BOOL)uploadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)downloadFilesAtPaths:(id)arg1 options:(id)arg2 results:(id*)arg3 error:(id*)arg4 ;
-(BOOL)uploadData:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)dataAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)moveItemAtPath:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeItemAtPath:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)freeSpace:(unsigned long long*)arg1 error:(id*)arg2 ;
@end

