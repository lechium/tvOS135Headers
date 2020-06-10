/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:30 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface NSURLPromisePair : NSObject <NSSecureCoding> {

	NSURL* _logicalURL;
	NSURL* _physicalURL;

}

@property (copy,readonly) NSURL * URL; 
@property (readonly) NSURL * logicalURL;               //@synthesize logicalURL=_logicalURL - In the implementation block
@property (readonly) NSURL * physicalURL;              //@synthesize physicalURL=_physicalURL - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pairWithLogicalURL:(id)arg1 physicalURL:(id)arg2 ;
+(id)pairWithURL:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(NSURL *)logicalURL;
-(NSURL *)physicalURL;
@end

