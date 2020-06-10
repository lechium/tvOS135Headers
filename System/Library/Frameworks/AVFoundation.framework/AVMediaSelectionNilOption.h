/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVMediaSelectionOption.h>

@class NSDictionary, AVWeakReference;

@interface AVMediaSelectionNilOption : AVMediaSelectionOption {

	id _groupID;
	id _groupMediaType;
	NSDictionary* _dictionary;
	AVWeakReference* _weakReferenceToGroup;
	BOOL _displaysNonForcedSubtitles;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionary;
-(id)initWithGroup:(id)arg1 ;
-(id)group;
-(BOOL)isPlayable;
-(BOOL)_representsNilSelection;
-(id)_groupID;
-(id)_groupMediaType;
@end

