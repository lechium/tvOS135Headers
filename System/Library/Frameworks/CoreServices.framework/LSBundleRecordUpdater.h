/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSRecordBuilder.h>

@class NSString;

@interface LSBundleRecordUpdater : LSRecordBuilder {

	LSContext _context;
	BOOL _hasContext;
	unsigned _bundleID;
	LSBundleData _bundleData;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 preferPlaceholder:(BOOL)arg2 ;
-(void)parseSINFDictionary:(id)arg1 ;
-(void)parseiTunesMetadata:(id)arg1 ;
-(void)parsePlaceholderMetadata:(id)arg1 ;
-(BOOL)updateBundleRecord:(id*)arg1 ;
@end
