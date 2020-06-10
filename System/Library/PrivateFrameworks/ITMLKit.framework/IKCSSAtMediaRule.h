/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:58 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSRule.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKCSSMediaQuery;

@interface IKCSSAtMediaRule : IKCSSRule <NSCopying> {

	IKCSSMediaQuery* _mediaQuery;
	NSRange _queryRange;

}

@property (assign,nonatomic) NSRange queryRange;              //@synthesize queryRange=_queryRange - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)mediaQuery;
-(NSRange)queryRange;
-(void)setQueryRange:(NSRange)arg1 ;
-(id)initWithMediaQuery:(id)arg1 ;
@end

