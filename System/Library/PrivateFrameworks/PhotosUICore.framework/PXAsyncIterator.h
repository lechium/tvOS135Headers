/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXAsyncIterator <NSObject>
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) unsigned long long count; 
@required
-(unsigned long long)count;
-(void)stop;
-(unsigned long long)index;
-(void)next;

@end

