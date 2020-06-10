/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:59 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface MPCPrivateListeningStateSource : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _overrideValue;
	NSNumber* _currentValue;

}

@property (nonatomic,copy,readonly) NSNumber * overrideValue;              //@synthesize overrideValue=_overrideValue - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * currentValue;               //@synthesize currentValue=_currentValue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localDeviceSource;
+(id)staticSourceWithValue:(id)arg1 ;
+(id)sourceWithUserIdentity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSNumber *)currentValue;
-(void)setOverrideValue:(NSNumber *)arg1 ;
-(NSNumber *)overrideValue;
@end
