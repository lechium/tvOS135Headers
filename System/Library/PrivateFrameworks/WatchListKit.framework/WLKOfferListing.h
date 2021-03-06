/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, WLKStoreOffer;

@interface WLKOfferListing : NSObject {

	NSArray* _storeOffers;

}

@property (nonatomic,copy,readonly) NSArray * storeOffers;                                 //@synthesize storeOffers=_storeOffers - In the implementation block
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRentalOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreBuyOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreGetOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRedownloadOffer; 
-(id)initWithMAPIDictionaries:(id)arg1 ;
-(NSArray *)storeOffers;
-(WLKStoreOffer *)bestStoreBuyOffer;
-(WLKStoreOffer *)bestStoreRentalOffer;
-(id)_storeOffersFromMAPIDictionaries:(id)arg1 ;
-(id)_bestStoreOfferForOfferType:(unsigned long long)arg1 ;
-(BOOL)_supportsHD;
-(BOOL)_prefersSD;
-(id)_highDefinitionPredicate;
-(id)_standardDefinitionPredicate;
-(id)_filteredStoreContentSource:(id)arg1 ;
-(WLKStoreOffer *)bestStoreGetOffer;
-(WLKStoreOffer *)bestStoreRedownloadOffer;
@end

