/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface FBOrderedRequesters : NSObject {

	NSMutableArray* _bands[4];

}
-(id)description;
-(id)init;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
-(id)requesters;
-(BOOL)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
-(id)highestPriorityRequester;
-(id)lowestPriorityRequester;
@end

