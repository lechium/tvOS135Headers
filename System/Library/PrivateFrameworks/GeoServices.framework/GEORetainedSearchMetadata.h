/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDRetainedSearchMetadata, NSString;

@interface GEORetainedSearchMetadata : NSObject <NSCopying> {

	GEOPDRetainedSearchMetadata* _retainedSearchMetadata;

}

@property (getter=_query,nonatomic,readonly) NSString * query; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_query;
-(id)_retainedSearchMetadata;
-(id)initWithRetainedSearchMetadata:(id)arg1 ;
@end

