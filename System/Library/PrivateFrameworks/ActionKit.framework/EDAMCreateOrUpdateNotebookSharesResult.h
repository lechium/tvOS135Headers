/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray;

@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject {

	NSNumber* _updateSequenceNum;
	NSArray* _matchingShares;

}

@property (nonatomic,retain) NSNumber * updateSequenceNum;              //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSArray * matchingShares;                  //@synthesize matchingShares=_matchingShares - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSArray *)matchingShares;
-(void)setMatchingShares:(NSArray *)arg1 ;
@end

