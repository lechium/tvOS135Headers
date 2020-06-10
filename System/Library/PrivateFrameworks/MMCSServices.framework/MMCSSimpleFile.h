/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:28:01 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData, NSError;

@interface MMCSSimpleFile : NSObject {

	int _fd;
	double _progress;
	NSString* _authToken;
	long long _encryptionBehavior;
	NSString* _localPath;
	NSURL* _requestURL;
	NSString* _requestorID;
	NSString* _guid;
	unsigned long long _itemID;
	NSData* _signature;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;
	NSError* _mmcsError;
	NSData* _authResponseData;

}

@property (retain) NSString * guid;                                       //@synthesize guid=_guid - In the implementation block
@property (assign) unsigned long long itemID;                             //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSURL * requestURL;                                    //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) NSString * requestorID;                                //@synthesize requestorID=_requestorID - In the implementation block
@property (retain) NSData * signature;                                    //@synthesize signature=_signature - In the implementation block
@property (retain) NSString * authToken;                                  //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * localPath;                                  //@synthesize localPath=_localPath - In the implementation block
@property (assign) int fd;                                                //@synthesize fd=_fd - In the implementation block
@property (retain) NSData * fileHash;                                     //@synthesize fileHash=_fileHash - In the implementation block
@property (assign) unsigned long long protocolFileSize;                   //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (assign) double progress;                                       //@synthesize progress=_progress - In the implementation block
@property (setter=setMMCSError:,retain) NSError * mmcsError;              //@synthesize mmcsError=_mmcsError - In the implementation block
@property (assign) long long encryptionBehavior;                          //@synthesize encryptionBehavior=_encryptionBehavior - In the implementation block
@property (retain) NSData * authResponseData;                             //@synthesize authResponseData=_authResponseData - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(double)progress;
-(void)setProgress:(double)arg1 ;
-(NSData *)signature;
-(int)fd;
-(unsigned long long)itemID;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setItemID:(unsigned long long)arg1 ;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(void)setMMCSError:(id)arg1 ;
-(NSData *)fileHash;
-(void)setFileHash:(NSData *)arg1 ;
-(unsigned long long)protocolFileSize;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(NSString *)localPath;
-(void)setFd:(int)arg1 ;
-(NSData *)authResponseData;
-(NSError *)mmcsError;
-(void)setRequestorID:(NSString *)arg1 ;
-(long long)encryptionBehavior;
-(void)setLocalPath:(NSString *)arg1 ;
-(void)setEncryptionBehavior:(long long)arg1 ;
-(NSString *)requestorID;
-(void)setAuthResponseData:(NSData *)arg1 ;
@end

