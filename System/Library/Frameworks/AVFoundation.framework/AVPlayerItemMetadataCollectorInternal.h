/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:14:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVWeakReferencingDelegateStorage, NSObject, NSArray, NSDate, AVWeakReference;

@interface AVPlayerItemMetadataCollectorInternal : NSObject {

	AVWeakReferencingDelegateStorage* delegateStorage;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSArray* identifiers;
	NSArray* classifyingLabels;
	NSDate* mostRecentlyModifiedMetadataGroupTimestamp;
	AVWeakReference* weakReferenceToPlayerItem;

}
@end

