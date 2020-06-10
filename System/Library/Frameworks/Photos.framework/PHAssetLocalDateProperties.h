/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSNumber;

@interface PHAssetLocalDateProperties : PHAssetPropertySet {

	NSNumber* _inferredTimeZoneOffset;

}

@property (nonatomic,readonly) NSNumber * inferredTimeZoneOffset;              //@synthesize inferredTimeZoneOffset=_inferredTimeZoneOffset - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSNumber *)inferredTimeZoneOffset;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end
