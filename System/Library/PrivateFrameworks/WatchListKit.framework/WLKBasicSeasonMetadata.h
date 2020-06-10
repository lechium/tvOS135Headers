/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:44 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {

	NSNumber* _seasonNumber;
	NSString* _canonicalShowID;

}

@property (nonatomic,readonly) NSNumber * seasonNumber;                      //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;              //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
+(id)seasonsWithDictionaries:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)seasonNumber;
-(NSString *)canonicalShowID;
@end

