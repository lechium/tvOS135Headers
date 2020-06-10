/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCard.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PARAsyncCard : SFCard <NSSecureCoding> {

	double _scale;
	unsigned long long _clientQueryId;

}

@property (assign,nonatomic) double scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy,readonly) NSURL * cardURL; 
@property (nonatomic,readonly) unsigned long long clientQueryId;              //@synthesize clientQueryId=_clientQueryId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 ;
+(id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(NSURL *)cardURL;
-(unsigned long long)clientQueryId;
@end
