/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface _MXExtensionMatchingMerger : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSArray* _mapExtensions;
	NSArray* _intentNonUIExtensions;
	NSArray* _intentUIExtensions;

}
-(id)init;
-(id)receiveExtensions:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)clearExtensions;
@end
