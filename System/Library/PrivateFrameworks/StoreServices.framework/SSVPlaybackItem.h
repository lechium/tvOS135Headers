/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray;

@interface SSVPlaybackItem : NSObject {

	NSDictionary* _itemDictionary;
	NSURL* _fallbackStreamingKeyServerURL;
	NSURL* _fallbackStreamingKeyCertificateURL;

}

@property (nonatomic,copy) NSURL * fallbackStreamingKeyServerURL;                              //@synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL - In the implementation block
@property (nonatomic,copy) NSURL * fallbackStreamingKeyCertificateURL;                         //@synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * itemDictionary;                             //@synthesize itemDictionary=_itemDictionary - In the implementation block
@property (nonatomic,copy,readonly) id itemIdentifier; 
@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) NSURL * HLSPlaylistURL; 
@property (nonatomic,readonly) NSURL * HLSKeyCertificateURL; 
@property (nonatomic,readonly) NSURL * HLSKeyServerURL; 
@property (getter=isiTunesStoreStream,nonatomic,readonly) BOOL iTunesStoreStream; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)itemIdentifier;
-(NSArray *)assets;
-(id)initWithItemDictionary:(id)arg1 ;
-(NSURL *)fallbackStreamingKeyCertificateURL;
-(void)setFallbackStreamingKeyCertificateURL:(NSURL *)arg1 ;
-(NSURL *)fallbackStreamingKeyServerURL;
-(void)setFallbackStreamingKeyServerURL:(NSURL *)arg1 ;
-(id)assetForFlavor:(id)arg1 ;
-(void)_enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(NSURL *)HLSKeyCertificateURL;
-(NSURL *)HLSKeyServerURL;
-(NSURL *)HLSPlaylistURL;
-(BOOL)isiTunesStoreStream;
-(NSDictionary *)itemDictionary;
@end

