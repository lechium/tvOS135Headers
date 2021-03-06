/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:56 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol P256PublicKeyProtocol;
@interface PublicKey : NSObject {

	id<P256PublicKeyProtocol> _key;

}

@property (retain) id<P256PublicKeyProtocol> key;              //@synthesize key=_key - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<P256PublicKeyProtocol>)key;
-(void)setKey:(id<P256PublicKeyProtocol>)arg1 ;
-(id)initWithKey:(id)arg1 ;
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end

