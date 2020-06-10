/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV1;

typedef struct {
	unsigned macAddress : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV2;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct {
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV4;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned timeRemaining : 1;
	unsigned timestamp : 1;
	unsigned totalDuration : 1;
	unsigned likedState : 1;
	unsigned mediaKind : 1;
	unsigned playbackState : 1;
	unsigned revisionNumber : 1;
	unsigned scrubbableState : 1;
	unsigned canSkipNext : 1;
	unsigned canSkipPrevious : 1;
	unsigned canWishlist : 1;
	unsigned hasChapterData : 1;
	unsigned likeable : 1;
} SCD_Struct_TV5;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	unsigned field1;
	unsigned long long field2;
} SCD_Struct_TV7;

typedef struct {
	unsigned databaseID : 1;
	unsigned itemID : 1;
	unsigned likeState : 1;
	unsigned sessionIdentifier : 1;
} SCD_Struct_TV8;

typedef struct __SecKey* SecKeyRef;

typedef struct _MRMediaRemoteCommandInfo* MRMediaRemoteCommandInfoRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct __CFError* CFErrorRef;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

