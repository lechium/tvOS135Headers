/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTDataProtectionManager, RTMapServiceManager, RTDistanceCalculator, CNContact;

@interface RTContactsManager : RTService {

	BOOL _available;
	RTDataProtectionManager* _dataProtectionManager;
	RTMapServiceManager* _mapServiceManager;
	RTDistanceCalculator* _distanceCalculator;
	CNContact* _meCard;

}

@property (nonatomic,retain) RTDataProtectionManager * dataProtectionManager;              //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                      //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTDistanceCalculator * distanceCalculator;                    //@synthesize distanceCalculator=_distanceCalculator - In the implementation block
@property (nonatomic,retain) CNContact * meCard;                                           //@synthesize meCard=_meCard - In the implementation block
@property (assign,nonatomic) BOOL available;                                               //@synthesize available=_available - In the implementation block
+(id)addressLabelTypeToString:(unsigned long long)arg1 ;
+(unsigned long long)labelStringToAddressLabelType:(id)arg1 ;
+(id)addressDictionaryFromMapItem:(id)arg1 ;
+(id)addressLabelTypeToLabel:(unsigned long long)arg1 ;
-(id)init;
-(void)_setup;
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(CNContact *)meCard;
-(void)setMeCard:(CNContact *)arg1 ;
-(void)_shutdown;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(RTDistanceCalculator *)distanceCalculator;
-(id)initWithDataProtectionManager:(id)arg1 mapServiceManager:(id)arg2 distanceCalculator:(id)arg3 ;
-(id)addressIdentifierOfMeCardWithAddressFromMapItem:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateAddressOfMeCardWithAddressIdentifier:(id)arg1 toAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateAddressLabelTypeOfMeCardWithAddressIdentifier:(id)arg1 toAddressLabelType:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)removeAddressOfMeCardWithAddressIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)addAddressToMeCardWithAddressLabelType:(unsigned long long)arg1 addressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(void)setDistanceCalculator:(RTDistanceCalculator *)arg1 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(void)fetchMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)donatePostalAddress:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)onDataProtectionNotification:(id)arg1 ;
-(void)onContactStoreNotification:(id)arg1 ;
-(void)_onContactStoreNotification:(id)arg1 ;
-(id)_getMeCardWithError:(id*)arg1 ;
-(void)_fetchMeCardWithHandler:(/*^block*/id)arg1 ;
-(void)_donatePostalAddress:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)removeAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)addressIdentifierOfContact:(id)arg1 withAddressFromMapItem:(id)arg2 error:(id*)arg3 ;
-(id)addAddressToContact:(id)arg1 addressLabelType:(unsigned long long)arg2 addressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateAddressOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressFromMapItem:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateAddressLabelTypeOfContact:(id)arg1 withAddressIdentifier:(id)arg2 toAddressLabelType:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setDataProtectionManager:(RTDataProtectionManager *)arg1 ;
@end

