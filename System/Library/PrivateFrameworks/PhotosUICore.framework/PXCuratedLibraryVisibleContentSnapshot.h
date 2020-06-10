/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PXBrowserVisibleContentSnapshot.h>

@class NSDateInterval, NSArray, NSString;

@interface PXCuratedLibraryVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {

	/*^block*/id _dateIntervalFuture;
	/*^block*/id _locationNamesFuture;
	unsigned long long _dataSourceIdentifier;
	BOOL _isFiltering;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSArray * locationNames; 
@property (nonatomic,readonly) unsigned long long dateIntervalGranularity; 
@property (nonatomic,readonly) NSString * localizedPlaceholderText; 
-(id)init;
-(NSDateInterval *)dateInterval;
-(NSString *)localizedPlaceholderText;
-(NSArray *)locationNames;
-(unsigned long long)dateIntervalGranularity;
-(id)initWithLibraryLayout:(id)arg1 ;
@end
