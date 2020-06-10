/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSDictionary, WLKSearchWatchListResponse;

@interface WLKSearchWatchListRequestOperation : WLKUTSNetworkRequestOperation {

	NSDictionary* _query;
	WLKSearchWatchListResponse* _response;

}

@property (nonatomic,copy,readonly) NSDictionary * query;                          //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) WLKSearchWatchListResponse * response;              //@synthesize response=_response - In the implementation block
-(NSDictionary *)query;
-(WLKSearchWatchListResponse *)response;
-(void)processResponse;
-(id)initWithQuery:(id)arg1 caller:(id)arg2 ;
@end
