/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:36 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MPAction.h>

@class NSString;

@interface MPStateOperation : MPAction {

	NSString* _operation;
	NSString* _stateKey;

}

@property (nonatomic,copy) NSString * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,copy) NSString * stateKey;               //@synthesize stateKey=_stateKey - In the implementation block
+(id)stateOperation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)operation;
-(void)setOperation:(NSString *)arg1 ;
-(void)setAction:(id)arg1 ;
-(NSString *)stateKey;
-(void)setStateKey:(NSString *)arg1 ;
@end
