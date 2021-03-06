/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVLReadWriteFeedResource.h>

@class NSMutableDictionary, NSLock, NSString;

@interface TVLDictionaryFeedResource : NSObject <TVLReadWriteFeedResource> {

	NSMutableDictionary* _prefs;
	NSLock* _prefsLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)feedResourceNamed:(id)arg1 ;
-(void)setFeedResource:(id)arg1 named:(id)arg2 ;
-(void)clearFeedResources;
@end

