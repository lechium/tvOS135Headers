/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString, WLKContentPlayResponse;

@interface WLKContentPlayRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _canonicalID;
	WLKContentPlayResponse* _response;

}

@property (nonatomic,retain) WLKContentPlayResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                  //@synthesize canonicalID=_canonicalID - In the implementation block
-(WLKContentPlayResponse *)response;
-(void)setResponse:(WLKContentPlayResponse *)arg1 ;
-(NSString *)canonicalID;
-(void)processResponse;
-(id)initWithCanonicalID:(id)arg1 caller:(id)arg2 ;
@end

