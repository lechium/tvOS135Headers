/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXLayoutPerformer;
@interface PXLayoutPerformerCacheEntry : NSObject {

	id<PXLayoutPerformer> _performer;
	unsigned long long _reentryCount;

}

@property (nonatomic,retain) id<PXLayoutPerformer> performer;              //@synthesize performer=_performer - In the implementation block
@property (assign,nonatomic) unsigned long long reentryCount;              //@synthesize reentryCount=_reentryCount - In the implementation block
-(id<PXLayoutPerformer>)performer;
-(void)setPerformer:(id<PXLayoutPerformer>)arg1 ;
-(unsigned long long)reentryCount;
-(void)setReentryCount:(unsigned long long)arg1 ;
@end

