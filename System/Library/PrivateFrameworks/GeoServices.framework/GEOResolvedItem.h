/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDResolvedItem, NSString;

@interface GEOResolvedItem : NSObject {

	GEOPDResolvedItem* _resolvedItem;

}

@property (nonatomic,readonly) BOOL hasResultIndex; 
@property (nonatomic,readonly) unsigned long long resultIndex; 
@property (nonatomic,readonly) NSString * extractedTerm; 
@property (nonatomic,readonly) int itemType; 
-(int)itemType;
-(NSString *)extractedTerm;
-(unsigned long long)resultIndex;
-(BOOL)hasResultIndex;
-(id)initWithResolvedItem:(id)arg1 ;
-(id)initWithAutocompleteResolvedItem:(id)arg1 ;
@end

