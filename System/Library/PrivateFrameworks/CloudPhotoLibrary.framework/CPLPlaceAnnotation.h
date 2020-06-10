/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:05 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface CPLPlaceAnnotation : NSObject <NSSecureCoding, NSCopying> {

	NSNumber* _placeLevel;
	NSString* _placeName;

}

@property (nonatomic,copy) NSNumber * placeLevel;              //@synthesize placeLevel=_placeLevel - In the implementation block
@property (nonatomic,copy) NSString * placeName;               //@synthesize placeName=_placeName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)placeLevel;
-(void)setPlaceLevel:(NSNumber *)arg1 ;
-(NSString *)placeName;
-(void)setPlaceName:(NSString *)arg1 ;
@end
