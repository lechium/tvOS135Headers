/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions {

	NSArray* _adamIds;

}

@property (nonatomic,readonly) NSArray * adamIds;              //@synthesize adamIds=_adamIds - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAdamIds:(id)arg1 ;
-(NSArray *)adamIds;
@end

