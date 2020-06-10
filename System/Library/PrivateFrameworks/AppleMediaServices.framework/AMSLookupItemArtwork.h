/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface AMSLookupItemArtwork : NSObject {

	NSDictionary* _artworkDictionary;

}

@property (nonatomic,readonly) NSDictionary * artworkDictionary;              //@synthesize artworkDictionary=_artworkDictionary - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,readonly) double width; 
-(double)width;
-(double)height;
-(NSString *)URLString;
-(NSDictionary *)artworkDictionary;
-(id)initWithArtworkDictionary:(id)arg1 ;
-(id)URLWithHeight:(long long)arg1 width:(long long)arg2 cropStyle:(id)arg3 format:(id)arg4 ;
-(id)colorWithKind:(id)arg1 ;
@end
