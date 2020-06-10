/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PVCanceler : NSObject {

	BOOL _canceled;
	/*^block*/id _updateBlock;

}

@property (assign,nonatomic) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) id updateBlock;               //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)cancelerWithUpdateBlock:(/*^block*/id)arg1 ;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end

