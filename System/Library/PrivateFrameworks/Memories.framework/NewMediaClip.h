/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class NSArray, NSString;

@interface NewMediaClip : KenBurnsClip <CompoundClipInformation> {

	NSArray* _containedClips;

}

@property (nonatomic,retain) NSArray * containedClips;              //@synthesize containedClips=_containedClips - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(int)arg1 ;
-(int)maxDuration;
-(NSArray *)containedClips;
-(void)setContainedClips:(NSArray *)arg1 ;
-(BOOL)expandsEditList;
-(id)newMediaAssetVideoPiece;
-(id)initWithKBClip:(id)arg1 ;
@end
