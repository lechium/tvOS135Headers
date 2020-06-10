/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation {

	NSArray* _favorites;

}

@property (nonatomic,readonly) NSArray * favorites;              //@synthesize favorites=_favorites - In the implementation block
-(NSArray *)favorites;
-(void)prepareURLRequest:(/*^block*/id)arg1 ;
-(void)processResponse;
-(id)initWithCaller:(id)arg1 ;
@end

