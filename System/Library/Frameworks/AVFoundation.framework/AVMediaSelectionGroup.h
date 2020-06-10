/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {

	AVMediaSelectionGroupInternal* _mediaSelectionGroup;

}

@property (nonatomic,readonly) NSArray * options; 
@property (nonatomic,readonly) AVMediaSelectionOption * defaultOption; 
@property (nonatomic,readonly) BOOL allowsEmptySelection; 
+(id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)playableMediaSelectionOptionsFromArray:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSArray *)options;
-(id)dictionary;
-(id)asset;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(id)_weakReference;
-(BOOL)_isStreamingGroup;
-(BOOL)allowsEmptySelection;
-(BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2 ;
-(AVMediaSelectionOption *)defaultOption;
-(id)_groupID;
-(id)_groupMediaType;
-(id)_groupMediaCharacteristics;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
@end
