/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSString* _network;

}

@property (nonatomic,readonly) NSDate * releaseDate;                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                  //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;              //@synthesize network=_network - In the implementation block
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)network;
-(NSDate *)releaseDate;
-(NSDate *)finaleDate;
@end
