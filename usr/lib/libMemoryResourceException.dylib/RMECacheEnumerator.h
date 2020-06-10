/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libMemoryResourceException.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDirectoryEnumerator, NSString;

@interface RMECacheEnumerator : NSObject {

	NSDirectoryEnumerator* _internalEnumerator;
	NSString* _volume;

}

@property (nonatomic,copy) NSDirectoryEnumerator * internalEnumerator;              //@synthesize internalEnumerator=_internalEnumerator - In the implementation block
@property (nonatomic,retain) NSString * volume;                                     //@synthesize volume=_volume - In the implementation block
+(id)getLogContainer:(BOOL)arg1 ;
+(id)getLogPathsSortedByTime;
+(id)getLogPathsForSystemDiagnostic;
+(id)getEPLProfilePath;
-(NSString *)volume;
-(void)setVolume:(NSString *)arg1 ;
-(id)initCacheEnumeratorWithVolume:(id)arg1 ;
-(id)initCacheEnumerator;
-(id)nextValidURL;
-(NSDirectoryEnumerator *)internalEnumerator;
-(void)setInternalEnumerator:(NSDirectoryEnumerator *)arg1 ;
@end

