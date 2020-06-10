/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class NSString;

@interface SiriSpotlightContext : SiriContext {

	NSString* _utteranceText;
	long long _source;

}

@property (nonatomic,copy) NSString * utteranceText;              //@synthesize utteranceText=_utteranceText - In the implementation block
@property (assign,nonatomic) long long source;                    //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSource:(long long)arg1 ;
-(long long)source;
-(NSString *)utteranceText;
-(void)setUtteranceText:(NSString *)arg1 ;
@end

