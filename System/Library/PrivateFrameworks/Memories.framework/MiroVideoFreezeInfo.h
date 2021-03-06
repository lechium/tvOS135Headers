/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:25 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MiroFreezeInfo.h>

@class NSArray;

@interface MiroVideoFreezeInfo : MiroFreezeInfo {

	NSArray* _ranges;

}

@property (nonatomic,retain) NSArray * ranges;              //@synthesize ranges=_ranges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)token;
-(id)initWithData:(id)arg1 ;
-(id)dataRepresentation;
-(NSArray *)ranges;
-(void)setRanges:(NSArray *)arg1 ;
-(BOOL)isAdded;
-(BOOL)isRemoved;
-(BOOL)isFreeze;
@end

