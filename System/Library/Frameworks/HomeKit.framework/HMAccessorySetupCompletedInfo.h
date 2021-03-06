/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithAccessoryList:(id)arg1 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
@end

