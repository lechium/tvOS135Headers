/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, ML3StatementCacheList;

@interface ML3DatabaseStatementCache : NSObject {

	NSMutableDictionary* _statementsDictionary;
	ML3StatementCacheList* _nodeList;
	unsigned long long _cacheSize;

}

@property (nonatomic,readonly) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
-(void)dealloc;
-(void)clearCache;
-(void)cacheStatement:(id)arg1 ;
-(unsigned long long)cacheSize;
-(id)initWithCacheSize:(unsigned long long)arg1 ;
-(id)cachedStatementForSQL:(id)arg1 ;
-(id)allStatements;
@end
