/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:18:06 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock, NSString;

@interface VNRPNTrackerEspressoModelCacheManager : NSObject {

	NSMutableDictionary* _rpnEspressoResourcesKeyToEspressoResourcesCache;
	NSLock* _rpnEspressoResourcesKeyToEspressoResourcesCacheLock;
	NSString* _espressoModelName;

}

@property (readonly) NSString * espressoModelName;              //@synthesize espressoModelName=_espressoModelName - In the implementation block
+(id)cacheKeyFromOptions:(id)arg1 error:(id*)arg2 ;
+(id)cacheOptionsKeys;
-(void)dealloc;
-(id)initWithRPNEspressoModelName:(id)arg1 ;
-(id)espressoResourcesFromOptions:(id)arg1 error:(id*)arg2 ;
-(NSString *)espressoModelName;
@end

