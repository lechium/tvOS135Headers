/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:45:07 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UICollectionLayoutFramesQueryOffsets : NSObject {

	long long _indexOffset;
	long long _supplementaryIndexOffset;
	CGPoint _frameOffset;

}

@property (assign,nonatomic) CGPoint frameOffset;                             //@synthesize frameOffset=_frameOffset - In the implementation block
@property (assign,nonatomic) long long indexOffset;                           //@synthesize indexOffset=_indexOffset - In the implementation block
@property (assign,nonatomic) long long supplementaryIndexOffset;              //@synthesize supplementaryIndexOffset=_supplementaryIndexOffset - In the implementation block
-(id)init;
-(long long)indexOffset;
-(void)setIndexOffset:(long long)arg1 ;
-(CGPoint)frameOffset;
-(void)setFrameOffset:(CGPoint)arg1 ;
-(id)initWithFrameOffset:(CGPoint)arg1 indexOffset:(long long)arg2 supplementaryIndexOffset:(long long)arg3 ;
-(long long)supplementaryIndexOffset;
-(void)setSupplementaryIndexOffset:(long long)arg1 ;
@end
