/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDeliveryServices/DDSAssetQuery.h>

@class DDSLinguisticAttributeFilter;

@interface DDSLinguisticAssetQuery : DDSAssetQuery

@property (nonatomic,readonly) DDSLinguisticAttributeFilter * filter; 
-(void)addRegionWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3 ;
-(id)initWithLanguageIdentifier:(id)arg1 ;
@end

