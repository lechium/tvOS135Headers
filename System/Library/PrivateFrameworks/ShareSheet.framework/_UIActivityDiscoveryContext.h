/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface _UIActivityDiscoveryContext : NSObject <NSSecureCoding> {

	NSArray* _activityItemValueExtensionMatchingDictionaries;

}

@property (nonatomic,retain) NSArray * activityItemValueExtensionMatchingDictionaries;              //@synthesize activityItemValueExtensionMatchingDictionaries=_activityItemValueExtensionMatchingDictionaries - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextFromExtensionItem:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setActivityItemValueExtensionMatchingDictionaries:(NSArray *)arg1 ;
-(NSArray *)activityItemValueExtensionMatchingDictionaries;
-(id)newExtensionItem;
@end
