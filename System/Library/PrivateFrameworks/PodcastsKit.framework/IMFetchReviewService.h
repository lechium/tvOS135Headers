/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:02 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/IMBaseStoreService.h>

@class NSString;

@interface IMFetchReviewService : IMBaseStoreService {

	NSString* _adamID;

}

@property (nonatomic,retain) NSString * adamID;              //@synthesize adamID=_adamID - In the implementation block
-(void)setAdamID:(NSString *)arg1 ;
-(NSString *)adamID;
-(id)urlRequest;
-(id)initWithAdamID:(id)arg1 ;
-(void)performDataRequestWithCompletion:(/*^block*/id)arg1 ;
@end

