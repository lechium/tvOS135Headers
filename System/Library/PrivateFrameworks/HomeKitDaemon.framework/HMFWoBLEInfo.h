/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:41:11 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMFWoBLEInfo : HMFObject <NSSecureCoding> {

	NSData* _bleIdentifier;

}

@property (nonatomic,readonly) NSData * bleIdentifier;              //@synthesize bleIdentifier=_bleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)bleIdentifier;
-(id)initWithBLEIdentifier:(id)arg1 ;
@end

