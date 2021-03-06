/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class SFTokenBucket;

@interface SFTokenBucketWithDups : NSObject {

	SFTokenBucket* _bucket;
	unsigned long long _maxDups;
	CFArrayRef _dups;

}
-(id)init;
-(void)dealloc;
-(id)initWithBucket:(id)arg1 dupHistoryLength:(unsigned long long)arg2 ;
-(BOOL)acquireTokenForIdentifier:(unsigned long long)arg1 ;
@end

