/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:04 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class NSURL;

@interface MPModelForYouRecommendationsRequest : MPStoreModelRequest {

	long long _filteringPolicy;
	long long _requestEndpoint;
	NSURL* _customForYouURL;

}

@property (assign,nonatomic) long long filteringPolicy;              //@synthesize filteringPolicy=_filteringPolicy - In the implementation block
@property (assign,nonatomic) long long requestEndpoint;              //@synthesize requestEndpoint=_requestEndpoint - In the implementation block
@property (nonatomic,copy) NSURL * customForYouURL;                  //@synthesize customForYouURL=_customForYouURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)filteringPolicy;
-(void)setFilteringPolicy:(long long)arg1 ;
-(long long)requestEndpoint;
-(void)setRequestEndpoint:(long long)arg1 ;
-(NSURL *)customForYouURL;
-(void)setCustomForYouURL:(NSURL *)arg1 ;
@end
