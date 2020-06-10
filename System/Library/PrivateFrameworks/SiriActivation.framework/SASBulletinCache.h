/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {

	unsigned long long _count;
	SASBulletinCacheNode* _oldestNode;
	SASBulletinCacheNode* _newestNode;

}
-(id)init;
-(id)allBulletins;
-(id)cachedBulletinForID:(id)arg1 ;
-(void)insertBulletin:(id)arg1 fromFeed:(unsigned long long)arg2 ;
-(BOOL)removeBulletinForID:(id)arg1 ;
-(BOOL)_isFeedRelevant:(unsigned long long)arg1 ;
-(id)_findNodeForBulletinID:(id)arg1 ;
-(void)_deleteNode:(id)arg1 ;
-(void)_purgeOldestNodes;
@end
