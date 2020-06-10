/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:27:57 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface MCSessionPeerConnectionData : NSObject {

	BOOL _hasIdentitySet;
	NSData* _gckSessionConnectionData;
	long long _encryptionPreference;

}

@property (nonatomic,retain) NSData * gckSessionConnectionData;              //@synthesize gckSessionConnectionData=_gckSessionConnectionData - In the implementation block
@property (assign,nonatomic) long long encryptionPreference;                 //@synthesize encryptionPreference=_encryptionPreference - In the implementation block
@property (assign,nonatomic) BOOL hasIdentitySet;                            //@synthesize hasIdentitySet=_hasIdentitySet - In the implementation block
+(id)connectionDataSegmentWithEncryptionPreference:(long long)arg1 identitySet:(BOOL)arg2 gckSessionConnectionDataBytes:(void*)arg3 gckSessionConnectionDataLength:(unsigned long long)arg4 ;
-(void)dealloc;
-(BOOL)parseConnectionDataBlob:(id)arg1 ;
-(void)setEncryptionPreference:(long long)arg1 ;
-(void)setHasIdentitySet:(BOOL)arg1 ;
-(void)setGckSessionConnectionData:(NSData *)arg1 ;
-(void)parseConnectionDataSegmentWithBytes:(char*)arg1 withLength:(unsigned long long)arg2 ;
-(id)initWithConnectionDataBlob:(id)arg1 ;
-(NSData *)gckSessionConnectionData;
-(long long)encryptionPreference;
-(BOOL)hasIdentitySet;
@end

