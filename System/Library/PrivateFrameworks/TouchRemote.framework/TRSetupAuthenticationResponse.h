/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:37 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class NSSet;

@interface TRSetupAuthenticationResponse : TRResponseMessage {

	NSSet* _unauthenticatedAccountServices;

}

@property (nonatomic,retain) NSSet * unauthenticatedAccountServices;              //@synthesize unauthenticatedAccountServices=_unauthenticatedAccountServices - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUnauthenticatedAccountServices:(NSSet *)arg1 ;
-(NSSet *)unauthenticatedAccountServices;
@end

