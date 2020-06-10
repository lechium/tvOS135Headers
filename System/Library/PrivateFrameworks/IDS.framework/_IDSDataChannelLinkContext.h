/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:16:15 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSData;

@interface _IDSDataChannelLinkContext : NSObject {

	char _linkID;
	unsigned char _networkType;
	long long _connectionType;
	unsigned _RATType;
	unsigned short _maxMTU;
	unsigned char _remoteNetworkType;
	long long _remoteConnectionType;
	unsigned _remoteRATType;
	unsigned _maxBitrate;
	NSUUID* _linkUUID;
	NSUUID* _QRSessionID;
	long long _relayServerProvider;
	NSData* _relaySessionToken;
	NSData* _relaySessionKey;
	BOOL _serverIsDegraded;
	unsigned short _localLinkFlags;
	unsigned short _remoteLinkFlags;

}
-(id)description;
@end

