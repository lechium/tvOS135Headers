/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:23:22 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _WKTextInputContext : NSObject <NSCopying> {

	ElementContext _textInputContext;

}

@property (nonatomic,readonly) CGRect boundingRect; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(CGRect)boundingRect;
-(const ElementContext*)_textInputContext;
-(id)_initWithTextInputContext:(const ElementContext*)arg1 ;
@end

