/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHSAsynchronousOperation.h>

@class TVHKMediaEntityImageURLsFetchRequest, TVHSMediaServerIdentifier, NSDictionary, NSError;

@interface TVHKMediaEntityImageURLsFetchOperation : TVHSAsynchronousOperation {

	TVHKMediaEntityImageURLsFetchRequest* _request;
	TVHSMediaServerIdentifier* _mediaServerIdentifier;
	unsigned long long _DAAPDatabaseID;
	unsigned long long _DPAPDatabaseID;
	NSDictionary* _imageURLByMediaEntityIdentifier;
	NSError* _error;
	NSDictionary* _mediaEntityIdentifierByMediaServerRequestIdentifier;

}

@property (nonatomic,copy) TVHKMediaEntityImageURLsFetchRequest * request;                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) TVHSMediaServerIdentifier * mediaServerIdentifier;                               //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long DAAPDatabaseID;                                             //@synthesize DAAPDatabaseID=_DAAPDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long DPAPDatabaseID;                                             //@synthesize DPAPDatabaseID=_DPAPDatabaseID - In the implementation block
@property (nonatomic,copy) NSDictionary * imageURLByMediaEntityIdentifier;                                  //@synthesize imageURLByMediaEntityIdentifier=_imageURLByMediaEntityIdentifier - In the implementation block
@property (nonatomic,copy) NSError * error;                                                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSDictionary * mediaEntityIdentifierByMediaServerRequestIdentifier;              //@synthesize mediaEntityIdentifierByMediaServerRequestIdentifier=_mediaEntityIdentifierByMediaServerRequestIdentifier - In the implementation block
-(id)init;
-(NSError *)error;
-(TVHKMediaEntityImageURLsFetchRequest *)request;
-(void)setRequest:(TVHKMediaEntityImageURLsFetchRequest *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
-(TVHSMediaServerIdentifier *)mediaServerIdentifier;
-(void)setMediaServerIdentifier:(TVHSMediaServerIdentifier *)arg1 ;
-(unsigned long long)DAAPDatabaseID;
-(unsigned long long)DPAPDatabaseID;
-(void)setDAAPDatabaseID:(unsigned long long)arg1 ;
-(void)setDPAPDatabaseID:(unsigned long long)arg1 ;
-(void)setImageURLByMediaEntityIdentifier:(NSDictionary *)arg1 ;
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 DAAPDatabaseID:(unsigned long long)arg3 DPAPDatabaseID:(unsigned long long)arg4 ;
-(NSDictionary *)imageURLByMediaEntityIdentifier;
-(NSDictionary *)mediaEntityIdentifierByMediaServerRequestIdentifier;
-(void)setMediaEntityIdentifierByMediaServerRequestIdentifier:(NSDictionary *)arg1 ;
@end

