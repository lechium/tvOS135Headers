/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:46:13 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDateComponentsFormatter, NSNumberFormatter;

@interface VUIMediaTagsViewHelper : NSObject {

	NSMutableDictionary* _tagsViewDictionary;
	NSDateComponentsFormatter* _dateComponentFormatter;
	NSNumberFormatter* _tomatoPercentFormatter;

}
-(id)initWithMediaItem:(id)arg1 ;
-(id)_releaseDateDescriptionFromDate:(id)arg1 ;
-(id)_durationDescriptionFromDuration:(id)arg1 ;
-(BOOL)_isValidNumber:(id)arg1 ;
-(id)_commonSenseString:(id)arg1 ;
-(void)addSeperatorKey:(id)arg1 ;
-(void)_mediaBagdesWithVUIMediaEntity:(id)arg1 ;
-(id)initWithContentMetadata:(id)arg1 additionalMetadata:(id)arg2 ;
-(id)initWithVUIMediaItem:(id)arg1 ;
-(id)initWithVUIMediaEntity:(id)arg1 ;
-(id)tagsViewDictionary;
@end

