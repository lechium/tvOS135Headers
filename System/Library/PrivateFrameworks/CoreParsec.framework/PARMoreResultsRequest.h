/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:32 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreParsec/PARRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding> {

	NSURL* _moreResultsURL;

}

@property (nonatomic,copy) NSURL * moreResultsURL;              //@synthesize moreResultsURL=_moreResultsURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)nwActivityLabel;
-(NSURL *)moreResultsURL;
-(void)setMoreResultsURL:(NSURL *)arg1 ;
@end

