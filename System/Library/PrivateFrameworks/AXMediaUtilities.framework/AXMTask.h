/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:20 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXMTask : NSObject {

	BOOL _complete;
	/*^block*/id _taskCompleteBlock;

}

@property (assign,getter=isComplete,nonatomic) BOOL complete;              //@synthesize complete=_complete - In the implementation block
@property (nonatomic,copy) id taskCompleteBlock;                           //@synthesize taskCompleteBlock=_taskCompleteBlock - In the implementation block
-(BOOL)isComplete;
-(void)setComplete:(BOOL)arg1 ;
-(void)markAsComplete:(BOOL)arg1 ;
-(void)setTaskCompleteBlock:(id)arg1 ;
-(id)taskCompleteBlock;
@end

