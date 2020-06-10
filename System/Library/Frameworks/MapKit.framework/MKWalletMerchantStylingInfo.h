/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:47 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MKWalletMerchantStylingInfo : NSObject <NSSecureCoding> {

	NSData* _styleAttributesData;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)_featureStyleAttributes;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 transparent:(BOOL)arg3 ;
-(id)imageForSize:(unsigned long long)arg1 scale:(double)arg2 ;
-(id)tintColorForScale:(double)arg1 ;
@end

