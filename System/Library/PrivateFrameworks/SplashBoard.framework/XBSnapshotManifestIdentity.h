/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol XBSnapshotManifestStore;
@class NSString;

@interface XBSnapshotManifestIdentity : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	id<XBSnapshotManifestStore> _store;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultGroupIdentifier; 
@property (nonatomic,copy,readonly) id<XBSnapshotManifestStore> store;              //@synthesize store=_store - In the implementation block
+(id)identityWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)bundleIdentifier;
-(id<XBSnapshotManifestStore>)store;
-(NSString *)defaultGroupIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 store:(id)arg2 ;
@end

