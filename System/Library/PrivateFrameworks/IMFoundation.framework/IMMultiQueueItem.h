/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:48 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMMultiQueueItem : NSObject {

	id _block;
	NSString* _GUID;
	NSString* _describer;

}

@property (nonatomic,readonly) id block;                                //@synthesize block=_block - In the implementation block
@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * describer;                    //@synthesize describer=_describer - In the implementation block
-(void)dealloc;
-(id)block;
-(id)initWithBlock:(id)arg1 GUID:(id)arg2 description:(id)arg3 ;
-(NSString *)GUID;
-(NSString *)describer;
@end

