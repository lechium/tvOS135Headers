/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPDAutocompleteSessionData;

@interface GEOAutocompleteSessionData : NSObject {

	GEOSessionID _analyticsShortSessionId;
	GEOPDAutocompleteSessionData* _autocompleteSessionData;

}

@property (nonatomic,readonly) GEOPDAutocompleteSessionData * autocompleteSessionData;              //@synthesize autocompleteSessionData=_autocompleteSessionData - In the implementation block
-(id)init;
-(GEOPDAutocompleteSessionData *)autocompleteSessionData;
-(id)updateWithAutoCompleteSessionData:(id)arg1 ;
-(id)initWithAutoCompleteSessionData:(id)arg1 ;
@end

