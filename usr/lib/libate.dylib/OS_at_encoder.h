/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:18 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libate.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libdispatch.dylib/OS_object.h>
#import <libobjc.A.dylib/OS_at_encoder.h>

@protocol OS_at_encoder <NSObject>
@end


@class NSString;

@interface OS_at_encoder : OS_object <OS_at_encoder>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(NSString *)debugDescription;
-(void)dealloc;
@end

