/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, PKCurrencyAmount;

@interface PKMapsTransitRouteInfo : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _transitNetworkIdentifiers;
	PKCurrencyAmount* _cost;

}

@property (nonatomic,readonly) NSSet * transitNetworkIdentifiers;              //@synthesize transitNetworkIdentifiers=_transitNetworkIdentifiers - In the implementation block
@property (nonatomic,readonly) PKCurrencyAmount * cost;                        //@synthesize cost=_cost - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKCurrencyAmount *)cost;
-(id)initWithTransitNetworkIdentifiers:(id)arg1 cost:(id)arg2 ;
-(NSSet *)transitNetworkIdentifiers;
@end
