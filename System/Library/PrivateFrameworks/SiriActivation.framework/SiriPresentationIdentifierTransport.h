/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SiriPresentationIdentifierTransport : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _identifier;

}

@property (nonatomic,retain) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(long long)siriPresentationIdentifier;
-(id)initWithSiriPresentationIdentifier:(long long)arg1 ;
@end
