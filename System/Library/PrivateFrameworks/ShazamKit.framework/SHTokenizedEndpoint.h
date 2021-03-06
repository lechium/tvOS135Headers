/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:44:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SHTokenizedEndpoint : NSObject <NSCopying> {

	NSString* _tokenURLString;

}

@property (nonatomic,copy) NSString * tokenURLString;              //@synthesize tokenURLString=_tokenURLString - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithTokenURL:(id)arg1 ;
-(NSString *)tokenURLString;
-(id)tokenForTokenType:(long long)arg1 ;
-(void)setTokenURLString:(NSString *)arg1 ;
-(BOOL)updateToken:(long long)arg1 withValue:(id)arg2 ;
-(id)URLRepresentation;
-(BOOL)containsTokens;
@end

