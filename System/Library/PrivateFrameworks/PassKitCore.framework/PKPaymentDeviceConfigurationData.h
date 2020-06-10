/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKPaymentDeviceConfigurationData : NSObject <NSSecureCoding> {

	BOOL _devSigned;
	NSNumber* _primaryJSBLSequenceCounter;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,copy) NSNumber * primaryJSBLSequenceCounter;              //@synthesize primaryJSBLSequenceCounter=_primaryJSBLSequenceCounter - In the implementation block
@property (nonatomic,copy) NSString * secureElementIdentifier;                 //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL devSigned;                                   //@synthesize devSigned=_devSigned - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)secureElementIdentifier;
-(BOOL)devSigned;
-(NSNumber *)primaryJSBLSequenceCounter;
-(void)setPrimaryJSBLSequenceCounter:(NSNumber *)arg1 ;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(void)setDevSigned:(BOOL)arg1 ;
@end
