/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOAutocompleteFilter.h>

@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter> {

	unsigned long long _types;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
-(id)init;
-(BOOL)applyToAutocompleteParameters:(id)arg1 error:(id*)arg2 ;
-(id)initWithResultTypes:(unsigned long long)arg1 ;
-(unsigned long long)types;
@end

