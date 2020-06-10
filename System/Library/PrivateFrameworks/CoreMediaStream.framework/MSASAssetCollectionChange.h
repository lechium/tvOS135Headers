/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(id)description;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)ctag;
-(void)setCtag:(NSString *)arg1 ;
-(BOOL)wasDeleted;
-(void)setWasDeleted:(BOOL)arg1 ;
@end

