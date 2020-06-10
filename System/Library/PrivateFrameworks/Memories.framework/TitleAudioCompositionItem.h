/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/MovieCompositionItem.h>

@class NSString;

@interface TitleAudioCompositionItem : MovieCompositionItem {

	NSString* _baseFilename;

}

@property (nonatomic,retain) NSString * baseFilename;              //@synthesize baseFilename=_baseFilename - In the implementation block
-(NSString *)baseFilename;
-(void)setBaseFilename:(NSString *)arg1 ;
-(id)initWithClip:(id)arg1 themeID:(id)arg2 ;
-(void)switchToAsset:(int)arg1 ;
-(BOOL)hasSeparateInOut;
-(id)speedRangesForSourceRange:(SCD_Struct_VE7)arg1 destinationRange:(SCD_Struct_VE7)arg2 ;
@end

