/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKChannelDetails, WLKBasicContentMetadata, NSArray, NSNumber, WLKLocale, NSDate, WLKPlayEvent, NSURL, NSDictionary, WLKComingSoonInfo, WLKOfferListing, SSLookupItem, SSLookupItemOffer, WLKStoreOffer;

@interface WLKPlayable : NSObject {

	BOOL _entitled;
	BOOL _entitledAnywhere;
	BOOL _appInstalled;
	BOOL _itunes;
	BOOL _subtitled;
	NSString* _playableID;
	NSString* _canonicalID;
	NSString* _channelID;
	WLKChannelDetails* _channelDetails;
	NSString* _contentID;
	long long _contentSourceType;
	long long _airingType;
	WLKBasicContentMetadata* _content;
	NSArray* _adLocales;
	NSArray* _audioTrackLocales;
	NSArray* _audioTrackFormats;
	NSArray* _closedCaptionLocales;
	NSArray* _SDHLocales;
	NSNumber* _duration;
	WLKLocale* _primaryLocale;
	NSString* _externalID;
	NSString* _externalServiceID;
	NSArray* _subtitledLocales;
	NSString* _videoQuality;
	NSString* _videoColorRange;
	NSDate* _endAirTime;
	NSDate* _startAirTime;
	WLKPlayEvent* _playEvent;
	NSURL* _tvAppDeeplinkURL;
	NSDictionary* _punchoutUrls;
	WLKComingSoonInfo* _comingSoonInfo;
	NSArray* _movieClips;
	NSArray* _subscriptionOffers;
	WLKOfferListing* _offerListing;
	NSDictionary* _itsData;
	SSLookupItem* _lookupItem;
	NSArray* _offers;
	SSLookupItemOffer* _bestBuyOffer;
	SSLookupItemOffer* _bestRentalOffer;

}

@property (nonatomic,copy,readonly) NSString * playableID;                                   //@synthesize playableID=_playableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                                  //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * channelDetails;                      //@synthesize channelDetails=_channelDetails - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentID;                                    //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) long long contentSourceType;                                  //@synthesize contentSourceType=_contentSourceType - In the implementation block
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled;                              //@synthesize entitled=_entitled - In the implementation block
@property (getter=isEntitledAnywhere,nonatomic,readonly) BOOL entitledAnywhere;              //@synthesize entitledAnywhere=_entitledAnywhere - In the implementation block
@property (getter=isAppInstalled,nonatomic,readonly) BOOL appInstalled;                      //@synthesize appInstalled=_appInstalled - In the implementation block
@property (getter=isiTunes,nonatomic,readonly) BOOL itunes;                                  //@synthesize itunes=_itunes - In the implementation block
@property (nonatomic,readonly) long long airingType;                                         //@synthesize airingType=_airingType - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * content;                            //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSArray * adLocales;                                     //@synthesize adLocales=_adLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackLocales;                             //@synthesize audioTrackLocales=_audioTrackLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackFormats;                             //@synthesize audioTrackFormats=_audioTrackFormats - In the implementation block
@property (nonatomic,copy,readonly) NSArray * closedCaptionLocales;                          //@synthesize closedCaptionLocales=_closedCaptionLocales - In the implementation block
@property (setter=DHLocales,nonatomic,copy,readonly) NSArray * SDHLocales;                   //@synthesize SDHLocales=_SDHLocales - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) WLKLocale * primaryLocale;                               //@synthesize primaryLocale=_primaryLocale - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalServiceID;                            //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (getter=isSubtitled,nonatomic,readonly) BOOL subtitled;                            //@synthesize subtitled=_subtitled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subtitledLocales;                              //@synthesize subtitledLocales=_subtitledLocales - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoQuality;                                 //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoColorRange;                              //@synthesize videoColorRange=_videoColorRange - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endAirTime;                                     //@synthesize endAirTime=_endAirTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startAirTime;                                   //@synthesize startAirTime=_startAirTime - In the implementation block
@property (nonatomic,readonly) WLKPlayEvent * playEvent;                                     //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tvAppDeeplinkURL;                                //@synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;                             //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) WLKComingSoonInfo * comingSoonInfo;                      //@synthesize comingSoonInfo=_comingSoonInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * movieClips;                                    //@synthesize movieClips=_movieClips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeOffers; 
@property (nonatomic,copy,readonly) NSArray * subscriptionOffers;                            //@synthesize subscriptionOffers=_subscriptionOffers - In the implementation block
@property (nonatomic,copy,readonly) WLKOfferListing * offerListing;                          //@synthesize offerListing=_offerListing - In the implementation block
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRentalOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreBuyOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreSubscriptionOffer; 
@property (nonatomic,copy,readonly) NSDictionary * itsData;                                  //@synthesize itsData=_itsData - In the implementation block
@property (nonatomic,copy,readonly) SSLookupItem * lookupItem;                               //@synthesize lookupItem=_lookupItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * offers;                                        //@synthesize offers=_offers - In the implementation block
@property (nonatomic,copy,readonly) SSLookupItemOffer * bestBuyOffer;                        //@synthesize bestBuyOffer=_bestBuyOffer - In the implementation block
@property (nonatomic,copy,readonly) SSLookupItemOffer * bestRentalOffer;                     //@synthesize bestRentalOffer=_bestRentalOffer - In the implementation block
+(id)playablesWithDictionaries:(id)arg1 context:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(WLKBasicContentMetadata *)content;
-(NSNumber *)duration;
-(NSArray *)offers;
-(NSString *)externalID;
-(BOOL)isEntitled;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(WLKChannelDetails *)channelDetails;
-(NSString *)videoQuality;
-(NSString *)contentID;
-(NSArray *)movieClips;
-(WLKPlayEvent *)playEvent;
-(NSString *)canonicalID;
-(NSURL *)tvAppDeeplinkURL;
-(BOOL)isiTunes;
-(NSDictionary *)punchoutUrls;
-(NSString *)channelID;
-(NSArray *)subscriptionOffers;
-(id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2 ;
-(BOOL)isAppInstalled;
-(long long)contentSourceType;
-(WLKOfferListing *)offerListing;
-(NSArray *)storeOffers;
-(NSString *)playableID;
-(WLKStoreOffer *)bestStoreBuyOffer;
-(WLKStoreOffer *)bestStoreRentalOffer;
-(id)playPunchoutURL;
-(id)openPunchoutURL;
-(WLKStoreOffer *)bestStoreSubscriptionOffer;
-(BOOL)isEntitledAnywhere;
-(long long)airingType;
-(NSArray *)adLocales;
-(NSArray *)audioTrackLocales;
-(NSArray *)audioTrackFormats;
-(NSArray *)closedCaptionLocales;
-(NSArray *)SDHLocales;
-(WLKLocale *)primaryLocale;
-(NSString *)externalServiceID;
-(BOOL)isSubtitled;
-(NSArray *)subtitledLocales;
-(NSString *)videoColorRange;
-(NSDate *)endAirTime;
-(NSDate *)startAirTime;
-(WLKComingSoonInfo *)comingSoonInfo;
-(NSDictionary *)itsData;
-(SSLookupItem *)lookupItem;
-(SSLookupItemOffer *)bestBuyOffer;
-(SSLookupItemOffer *)bestRentalOffer;
@end

