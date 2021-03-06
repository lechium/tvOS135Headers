/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupNetworkResponse : TRResponseMessage {

	BOOL _hasNetwork;

}

@property (assign,nonatomic) BOOL hasNetwork;              //@synthesize hasNetwork=_hasNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)hasNetwork;
-(void)setHasNetwork:(BOOL)arg1 ;
@end

