/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSDictionary;

@interface WLKSettingsRequestOperation : WLKNetworkRequestOperation {

	NSDictionary* _response;

}

@property (nonatomic,readonly) NSDictionary * response;              //@synthesize response=_response - In the implementation block
+(id)_requestURL:(id*)arg1 ;
-(id)init;
-(NSDictionary *)response;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
@end
