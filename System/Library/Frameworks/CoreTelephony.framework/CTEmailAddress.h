/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:54 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)emailAddress:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)address;
-(id)initWithAddress:(id)arg1 ;
-(id)encodedString;
-(id)canonicalFormat;
@end

