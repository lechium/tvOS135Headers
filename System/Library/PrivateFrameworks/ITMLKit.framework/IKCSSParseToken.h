/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSToken;

@interface IKCSSParseToken : IKCSSParseObject {

	IKCSSToken* _token;

}

@property (nonatomic,retain) IKCSSToken * token;              //@synthesize token=_token - In the implementation block
-(id)description;
-(id)init;
-(IKCSSToken *)token;
-(void)setToken:(IKCSSToken *)arg1 ;
@end

