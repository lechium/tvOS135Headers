/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding> {

	NSString* _webURL;
	NSString* _postData;

}

@property (nonatomic,retain) NSString * webURL;                //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,retain) NSString * postData;              //@synthesize postData=_postData - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)webURL;
-(NSString *)postData;
-(void)setWebURL:(NSString *)arg1 ;
-(void)setPostData:(NSString *)arg1 ;
@end

